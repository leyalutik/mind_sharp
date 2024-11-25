#include "game.h"



Game::Game(const std::string& name_user, Input input_value, Output output_value, FileManager file)
    : current_name(name_user), input(input_value), output(output_value), file(file) {}

PlayGame::PlayGame(const std::string& name, Input input_value, Output output_value, FileManager file)
    : Game(name, input_value, output_value, file) {}

PlayGame::PlayGame(const std::string& name) : Game(name) {}

void PlayGame::read_data() {
    file.read_user_data(user_data);
    for (const auto& data : user_data) {
        if (data.name == current_name) {
            current_data = data;
            break;
        }
    }
}

void PlayGame::play() {
    output.string_line= "Do the tasks quickly as you can. Don't fear mistakes!\n";
    output.display();

    Timer t;
    for (int32_t i = 0; i < current_data.total_examples; ++i) {
        ExpressionOperations exp(current_data.operation_sign,
                                 current_data.first_member_number_digits,
                                 current_data.second_member_number_digits);

        exp.generate_expression();
        print_exp(exp.exp);

        int32_t answer = input.get_text_as_int();
        exp.exp.user_answer = answer;

        if (!mind_sharp(exp.exp, exp.exp.user_answer)) {
            Expression expr(exp.exp.member1,
                            exp.exp.member2,
                            exp.exp.computer_answer,
                            exp.exp.user_answer);
            wrong_expressions.push_back(expr);
        }

        current_time = t.elapsed();
    }
}

void PlayGame::analyze_results() {
    outputdata = "Analyzing results...";
    output.show();

    output.data += "Total time for solving tasks: " + std::to_string(current_time) + "\n";

    if (current_time < current_data.best_time) {
        display.data += "You improved your solving time by " +
                        std::to_string(current_data.best_time - current_time) + "\n";
        current_data.best_time = current_time;
    }
    output.string_line += print_result(wrong_expressions);
    output.display();
}

void PlayGame::write_data() {
    bool user_found = false;
    for (auto& data : user_data) {
        if (data.name == current_name) {
            data = current_data;
            user_found = true;
            break;
        }
    }
    if (!user_found) {
        user_data.push_back(current_data);
    }
    file.save_user_data(user_data);
}

bool PlayGame::mind_sharp(Expression& exp, int32_t& answer_user) {
    return (answer_user == exp.computer_answer);
}

std::string PlayGame::print_exp(Expression& exp, OPERATION_SIGN operation)
{
    return std::to_string(exp.member1) + " " +
           (operation == OPERATION_SIGN::PLUS ? "+" :
            operation == OPERATION_SIGN::MINUS ? "-" :
            operation == OPERATION_SIGN::PRODUCT ? "*" : "^") + " " +
           std::to_string(exp.member2) + std::string(" = ");
}

std::string PlayGame::print_wrong_exp(Expression& wrong_exp, OPERATION_SIGN operation) {
    return "Correct answer: " +
           std::to_string(wrong_exp.member1) + " " +
           (wrong_exp.sign == OPERATION_SIGN::PLUS ? "+" :
            wrong_exp.sign == OPERATION_SIGN::MINUS ? "-" :
            wrong_exp.sign == OPERATION_SIGN::PRODUCT ? "*" : "^") + " " +
           std::to_string(wrong_exp.member2) +
           " = " + std::to_string(wrong_exp.computer_answer) +
           ", your answer was " + std::to_string(wrong_exp.user_answer) + "\n";
}

std::string PlayGame::print_result(std::vector<Expression>& wrong_exp) {
    size_t N_mistake = wrong_exp.size();
    std::string data;
    if (N_mistake == 0) {
        data = "Well done! You did not make any mistakes!\n";
    } else {
        data = "You made " + std::to_string(N_mistake) + " mistake(s):\n";
        for (const auto& exp : wrong_exp) {
            data += print_wrong_exp(exp);
        }
    }
    return data;
}

