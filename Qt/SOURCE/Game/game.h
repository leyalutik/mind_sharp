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
#include <QWidget>



class Game : public QWidget
{

Q_OBJECT

public:
Game(const std::string& name_user,
           Input* input_value,
           Output* output_value,
           FileManager* file_value,
               QWidget* parent = nullptr);


    void play_game()
    {
        read_data();
        play();
        analyze_results();
        write_data();
    }

    std::string current_name;
    Input* input; // Обработка ввода
    Output* output; // Обработка вывода на экран
    FileManager* file;

protected:
    virtual void read_data() = 0;
    virtual void play() = 0;
    virtual void analyze_results() = 0;
    virtual void write_data() = 0;



    UserData current_data;
    std::vector<UserData> user_data;
    std::string display_text;
    std::vector<Expression> wrong_expressions;
    double current_time;
};

class PlayGame : public Game {

    Q_OBJECT
public:
    PlayGame(const std::string& name,
             Input* input_value,
             Output* output_value,
             FileManager* file_value,
             QWidget* parent = nullptr);



protected:
    void read_data() override;
    void play() override;
    void analyze_results() override;
    void write_data() override;

private:
    bool mind_sharp(const Expression &exp, int32_t &answer_user);
    std::string print_exp(const Expression &exp,
                          const OPERATION_SIGN operation);
    std::string print_wrong_exp(const Expression& wrong_exp,
                                const OPERATION_SIGN operation);

    std::string print_result(const std::vector<Expression>& wrong_exp,
                             const OPERATION_SIGN operation);

};

#endif // GAME_H

