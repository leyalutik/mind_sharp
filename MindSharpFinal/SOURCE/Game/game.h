#ifndef GAME_H
#define GAME_H

#include <string>
#include <vector>
#include "filemanager.h"
#include "expression.h"
#include "userdata.h"
#include "timer.h"
#include "input.h" // Предполагается, что класс Input будет в отдельном файле
#include "output.h" // Предполагается, что класс Display будет в отдельном файле

class Game {
public:
Game(const std::string& name_user = "leya", Input input_value = Input(), Output output_value = Output(),
         FileManager file = FileManager());

    Game(const std::string& name_value = "leya");
    void play_game();


    Input input; // Обработка ввода
    Output output; // Обработка вывода на экран
    FileManager& file;

protected:
    virtual void read_data() = 0;
    virtual void play() = 0;
    virtual void analyze_results() = 0;
    virtual void write_data() = 0;


    std::string current_name;
    UserData current_data;
    std::vector<UserData> user_data;
    std::string display_text;
    std::vector<Expression> wrong_expressions;
    double current_time;
};

class PlayGame : public Game {
public:
    PlayGame(const std::string& name = "leya");
    Input input; // Обработка ввода
    Output output; // Обработка вывода на экран
    FileManager& file;


protected:
    void read_data() override;
    void play() override;
    void analyze_results() override;
    void write_data() override;

private:
    bool mind_sharp(Expression &exp, int32_t &answer_user);
    std::string print_exp(Expression &exp);
    std::string print_wrong_exp(Expression& wrong_exp);
    std::string print_result(std::vector<Expression>& wrong_exp);

};

#endif // GAME_H
#ifndef PLAYGAME_H
#define PLAYGAME_H

#include <string>
#include <vector>
#include "filemanager.h"
#include "expression.h"
#include "userdata.h"
#include "timer.h"
#include "input.h" // Предполагается, что класс Input будет в отдельном файле
#include "output.h" // Предполагается, что класс Display будет в отдельном файле

class PlayGame : public Game {
public:
    PlayGame(const std::string& name = "leya");
PlayGame(const std::string& name = "leya", Input input_value = Input(), Output output_value = Output(), FileManager file = FileManager());

protected:
    void read_data() override;
    void play() override;
    void analyze_results() override;
    void write_data() override;

private:
    Input input;
    Output  output;

    bool mind_sharp(Expression& exp, int32_t& answer_user);
    std::string print_exp(Expression& exp, OPERATION_SIGN operation);
    std::string print_wrong_exp(Expression& wrong_exp);
    std::string print_result(std::vector<Expression>& wrong_exp);

 FileManager file; // Добавляем FileManager как член класса
};

#endif // PLAYGAME_H

