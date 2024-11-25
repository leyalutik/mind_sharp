#include "game.h"

#include <exception>
#include <string>

#include <QWidget>
#include <QString>
#include <QMessageBox>
#include <QLineEdit>
#include <QString>



Game::Game(const std::string& name_user,
           Input* input_value,
           Output* output_value,
           FileManager* file_value,
           QWidget* parent)
    : QWidget(parent),  // Инициализация QWidget с parent
    current_name(name_user),
    input(input_value),
    output(output_value),
    file(file_value)
{
    try
    {
    if (input == nullptr || output == nullptr || file == nullptr)
        {
        throw std::invalid_argument("Неверные указатели");
        }
    }

    catch (const std::invalid_argument& e) {
        qWarning("Неверные указатели: %s", e.what());

        QMessageBox::warning(
            parent,                                  // Родительский виджет
            QString("Ошибка"),                       // Заголовок окна
            QString::fromStdString(e.what())         // Текст сообщения
            );
    }
}


PlayGame::PlayGame(const std::string& name,
                   Input* input_value,
                   Output* output_value,
                   FileManager* file_value,
                   QWidget* parent)
    : Game(name, input_value, output_value,
           file_value, parent) {}


void PlayGame::read_data()
{
   std::string user_file = std::string(SOURCE_DIR)
                            + std::string("/user_data.txt");
    file->set_read_file(user_file);
    file->set_save_file(user_file);

    file->read_user_data(user_data);

    // Nothing to read
    if(user_data.size() == 0)
    {

        UserData d;
        d.init();
        d.name = current_name; // Устанавливаем имя пользователя
        user_data.push_back(d);
        current_data.set(d);
        return;
    }
 //find data with current name
    for (const auto& data : user_data)
    {
        if (data.name == current_name)
        {

        current_data.set(data);
        return;
        }
    }
 //not find then add date with current name
    UserData d;
    d.init();
    d.name = current_name; // Устанавливаем имя пользователя
    user_data.push_back(d);
    current_data.set(d);

}

void PlayGame::play()
{
    // Подключаем сигнал завершения ввода к слоту обработки текста







    Timer t;
    for (int32_t i = 0; i < current_data.total_examples; ++i)
    {
        ExpressionOperations exp(current_data.operation_sign,
                                 current_data.first_member_number_digits,
                                 current_data.second_member_number_digits);

        exp.generate_expression();
        std::string line = print_exp(exp.exp,exp.sign) ;
        output->expression_show(line);

        input->process_int_input();

        exp.exp.user_answer = input->int_data;

        if (!mind_sharp(exp.exp, exp.exp.user_answer))
        {
            Expression expr(exp.exp.member1,
                            exp.exp.member2,
                            exp.exp.computer_answer,
                            exp.exp.user_answer);
            wrong_expressions.push_back(expr);
        }

        current_time = t.elapsed();
    }
}

void PlayGame::analyze_results()
{
    output->text = "Analyzing results...";
    output->show();

    output->text = "Total time for solving tasks: " + std::to_string(current_time) + "\n";

    if (current_time < current_data.best_time) {
        output->text += "You improved your solving time by " +
                        std::to_string(current_data.best_time - current_time) + "\n";
        current_data.best_time = current_time;
    }
    output->text += print_result(wrong_expressions,
                                        current_data.operation_sign);
    output->show();
}

void PlayGame::write_data()
{

    bool found = false;

    for (size_t i=0; i< user_data.size(); ++i)
    {
        if (user_data[i].name == current_data.name)
        {
            found = true;
            user_data[i].set(current_data);

        }
    }

    if(!found)
    {
        std::cout << "Not found current user\n";
    }

    // Отладочный вывод
    std::cout << "Number of users to save: " << user_data.size() << std::endl;
    for (const auto& user : user_data) {
        std::cout << "User: " << user.name << std::endl;
        std::cout << user.wrong_answers << std::endl;
        std::cout << user.best_time << std::endl;
    }

    file->save_user_data(user_data);
}

bool PlayGame::mind_sharp(const Expression& exp, int32_t& answer_user) {
    return (answer_user == exp.computer_answer);
}

std::string PlayGame::print_exp(const Expression& exp, const OPERATION_SIGN operation)
{
    return std::to_string(exp.member1) + " " +
           (operation == OPERATION_SIGN::PLUS ? "+" :
            operation == OPERATION_SIGN::MINUS ? "-" :
            operation == OPERATION_SIGN::PRODUCT ? "*" : "^") + " " +
           std::to_string(exp.member2) + std::string(" = ");
}

std::string PlayGame::print_wrong_exp(const Expression& wrong_exp,
                                      OPERATION_SIGN operation) {
    return "Correct answer: " +
           std::to_string(wrong_exp.member1) + " " +
           (operation == OPERATION_SIGN::PLUS ? "+" :
            operation == OPERATION_SIGN::MINUS ? "-" :
            operation == OPERATION_SIGN::PRODUCT ? "*" : "^") + " " +
           std::to_string(wrong_exp.member2) +
           " = " + std::to_string(wrong_exp.computer_answer) +
           ", your answer was " + std::to_string(wrong_exp.user_answer) + "\n";
}

std::string PlayGame::print_result(const std::vector<Expression>& wrong_exp,
                                   const OPERATION_SIGN operation)
{
    size_t N_mistake = wrong_exp.size();
    std::string data;
    if (N_mistake == 0) {
        data = "Well done! You did not make any mistakes!\n";
    } else {
        data = "You made " + std::to_string(N_mistake) + " mistake(s):\n";
        for (const auto& exp : wrong_exp) {
            data += print_wrong_exp(exp,operation);
        }
    }
    return data;
}

//#include "game.moc"
