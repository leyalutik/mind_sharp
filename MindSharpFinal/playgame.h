#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <iostream>
#include <cstdint>
#include <cmath>


// Перечисление знаков операций
enum class OPERATION_SIGN {
    PLUS = 0,
    MINUS = 1,
    PRODUCT = 2,
    POW = 3
};

// Структура для представления выражений
class ExpressionOperations
{
    ExpressionOperations()
    {
        PERATION_SIGN sign = OPERATION_SIGN::PLUS;
        int32_t first_member_number_digits = 2;
        int32_t second_member_number_digits = 2;
    }
    ExpressionOperations(const OPERATION_SIGN sign_value,
                         const int32_t first_member_digits_value,
                         const int32_t second_member_number_digits_value):
        sign(sign_value),
        first_member_number_digits(first_member_digits_value),
        second_member_number_digits(second_member_number_digits_value) {}

    OPERATION_SIGN sign;
    int32_t first_member_number_digits;
    int32_t second_member_number_digits;

public:

    Expression exp{0,0,0,0};

    std::string wrong_message;

    int32_t max_value(const int32_t digits)
    {
        if(digits <= 0 || digits > 9)
        {
            wrong_message = "Incorrect value of digits.";
        }
        return static_cast<int32_t>((std::pow(10,digits)-1));
    }
    int32_t operate(const int32_t x1, const int32_t x2)
    {
        switch(sign)
        {
        case OPERATION_SIGN::PLUS :         return (x1+x2);
        case OPERATION_SIGN::MINUS :    return (x1-x2);
        case OPERATION_SIGN::PRODUCT :  return (x1*x2);
        case OPERATION_SIGN::POW :    return std::pow(x1,x2);
        default :                       std::cout << "Unknown command.\n";
        }

        return 0;
    }
    void generate_expression()
    {
        try
        {
            std::srand(static_cast<unsigned int>(std::time(nullptr)));
            int32_t max_value = max_value(first_member_number_digits);
            exp.member1 = (std::rand() % max_value) + 1;
            max_value = max_value(second_member_number_digits);
            exp.member2 = (std::rand() % max_value) + 1;
            exp.computer_answer = operate(member1,member2);
        }
        catch (std::exception &e)
        {


            wrong_message = e.what();
        }

    }
    bool check_data();
    void to_zero();

};

struct Expression
{
    Expression()
    {
        int32_t member1 = 0;
        int32_t member2 = 0;
        int32_t computer_answer = 0;
        int32_t user_answer = 0;
    }
    int32_t member1;
    int32_t member2;
    int32_t computer_answer;
    int32_t user_answer;



};

// Структура для хранения данных пользователя
struct UserData
{
    std::string name = "leya";
    int32_t total_examples = 10;
    OPERATION_SIGN operation_sign = OPERATION_SIGN::PLUS;
    int32_t first_member_number_digits = 2;
    int32_t second_member_number_digits = 2;
    int32_t wrong_answers = 10;
    double best_time = 10.0;

    void set(const UserData& data) {
        name = data.name;
        total_examples = data.total_examples;
        operation_sign = data.operation_sign;
        first_member_number_digits = data.first_member_number_digits;
        second_member_number_digits = data.second_member_number_digits;
        wrong_answers = data.wrong_answers;
        best_time = data.best_time;
    }
};

// Менеджер файлов для работы с пользовательскими данными
class FileManager {
public:
    static FileManager& get_instance() {
        static FileManager instance;
        return instance;
    }

    void set_read_file(const std::string& read_file) { read_data_file = read_file; }
    void set_save_file(const std::string& save_file) { save_data_file = save_file; }

    void read_user_data(std::vector<UserData>& user_data) {
        std::ifstream ifs(read_data_file);
        if (!ifs.is_open()) {
            std::cerr << "File does not exist.\n";
            return;
        }

        std::string line;
        while (std::getline(ifs, line)) {
            UserData data;
            std::stringstream ss(line);
            int operation;
            if (ss >> data.name >> data.total_examples >> operation
                >> data.first_member_number_digits >> data.second_member_number_digits
                >> data.wrong_answers >> data.best_time) {

                data.operation_sign = static_cast<OPERATION_SIGN>(operation);
                user_data.push_back(data);
            }
        }
    }

    void save_user_data(const std::vector<UserData>& user_data) {
        std::ofstream ofs(save_data_file);
        if (!ofs.is_open()) {
            std::cerr << "Cannot open file for writing.\n";
            return;
        }

        for (const auto& data : user_data) {
            ofs << data.name << " " << data.total_examples << " "
                << static_cast<int>(data.operation_sign) << " "
                << data.first_member_number_digits << " "
                << data.second_member_number_digits << " "
                << data.wrong_answers << " " << data.best_time << "\n";
        }
    }

private:
    std::string read_data_file = "user_data.txt";
    std::string save_data_file = "user_data.txt";

    FileManager() = default;
    FileManager(const FileManager&) = delete;
    FileManager& operator=(const FileManager&) = delete;
};

// Базовый класс для игровой логики
class Game {
public:
    Game(const std::string& name_value = "leya") : current_name(name_value), file(FileManager::get_instance()) {}

    void play_game() {
        read_data();
        play();
        analyze_results();
        write_data();
    }

protected:
    virtual void read_data() = 0;
    virtual void play() = 0;
    virtual void analyze_results() = 0;
    virtual void write_data() = 0;

    FileManager& file;
    std::string current_name;
    UserData current_data {"leya", 10, OPERATION_SIGN::PLUS, 2, 2, 10, 10.0 };
    std::vector<UserData> user_data;
    std::string display_text;
    std::vector<Expression> wrong_expressions;
    double current_time;
};

// Класс для обработки пользовательского ввода (псевдокодовый пример для Input)

class Input {
public:
    void get_int_input();
    // Реализация получения данных от пользователя

    int32_t int_data;
    UserData user_data;
};

// Класс для визуального отображения данных (псевдокодовый пример для Display)

class Display {
public:
    void show();
    // Реализация визуального отображения информации

    std::string data;
};

// Класс PlayGame с интеграцией новых компонентов
class PlayGame : public Game {
public:
    PlayGame(const std::string& name = "leya") : Game(name) {}

protected:
    void read_data() override {
        file.read_user_data(user_data);
        for (const auto& data : user_data) {
            if (data.name == current_name) {
                current_data = data;
                break;
            }
        }
    }

    void play() override
    {

        display.data = std::string("Do the tasks quickly as you can. Don't fear mistakes!\n");
        display.show();
        Timer t;
        for(int32_t i=0; i<current_data.total_examples; ++i)
        {
            ExpressionOperations exp(current_data.operation_sign,
                current_data.first_member_number_digits,
                                     current_data.second_member_number_digits);

            exp.generate_expression();
            print_exp(exp);

            input.get_int_input();
            exp.exp.user_answer = input.int_data;

            if (!mind_sharp(exp, answer_user))
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

    void analyze_results() override {
        // Логика анализа результатов игры
        display.data = "Analyzing results...";
        display.show();

        display.data = "Total time for solving tasks : "
                       + std::to_string(current_time);



        if(current_time < current_data.best_time)
        {
            display.data += std::string ("You improve your solving time on ")
                            + std::to_string(current_data.best_time - current_time)
                            + std::string("\n");
            current_data.best_time = current_time;
        }
        display.data += std::string(print_result(wrong_exp));
        display.show();

    }

    void write_data() override {
        bool user_found = false;
        for (auto& data : user_data) {
            if (data.name == current_name)
            {
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


    bool mind_sharp(Expression &exp, int32_t &answer_user)
    {

        return (answer_user == exp.computer_answer);

    }

    std::string print_exp(Expression &exp) {

        std::string data = std::to_string(exp.member1) + std::string(" + ")
                           + std::to_string(exp.member2);
        return data;
    }

    std::string print_wrong_exp(Expression& wrong_exp) {

        std::string data =  std::string("Correct answer: \n") +
                            std::to_string(wrong_exp.member1) +
                            std::string(" + ") +
                            std::to_string(wrong_exp.member2) +
                            std::string (" = ") +
                            std::to_string(wrong_exp.computer_answer) +
                            std::string(" your answer is ") +
                            std::to_string(wrong_exp.user_answer);
        return data;

    }

    std::string print_result(std::vector<Expression>& wrong_exp) {
        size_t N_mistake = wrong_exp.size();

        std::string data;
        if (N_mistake == 0)
        {

            data =  std::string("Well done! You are so good in calculating!\n")
                           + std::string(" Zero mistakes\n");
        } else if (N_mistake == 1) {

            data =  std::string(" You are great just be a little more carefull!\n")
                               + std::to_string(N_mistake)
                           + std::string(" mistake:\n")
                           + std::string(print_wrong_exp(wrong_exp[0]));

        } else if (N_mistake > 1)
        {

            data = std::string("You did a good job but next time it will be better!\n")
                           + std::to_string(N_mistake)
                           + std::string(" mistake:\n");
            for (int i = 0; i < N_mistake; ++i)
            {
                display.data += std::string(print_wrong_exp(wrong_exp[i]));
            }
        }
        return data;
    }



private:
    Input input;     // Обработка ввода
    Display display; // Обработка вывода на экран
};

#include<chrono>

class Timer
{

private:
    using clock_t = std::chrono::high_resolution_clock;
    using second_t = std::chrono::duration<double, std::ratio<1> >;

    std::chrono::time_point<clock_t> m_beg;

public:
    Timer() : m_beg(clock_t::now())
    {}

    void reset();

    double elapsed() const;

};


void Timer::reset()
{

    m_beg = clock_t::now();
}

double Timer::elapsed() const
{
    return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
}

#endif // PLAYGAME_H
