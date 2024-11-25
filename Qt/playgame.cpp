#include "playgame.h"

#include <iostream>
#include<fstream>
#include<sstream>

class MyGame : public Game
{
public:
    MyGame();
};

MyGame::MyGame(const std::string& name_value) : Game(name_value)
{}

MyGame::MyGame() : Game()
{}

MyGame::read_data()
{


    file.read_data_file(user_data);
    for(size_t i=0; i<user_data.size(); ++i)
    {
        if(current_name == user_data[i].name)
        {
            current_data.set(user_data[i]);
        }
    }

}

MyGame::play()
{
    for(int32_t i=0; i<current_data.total_examples; ++i)
    {
        Expression e;
        e.generate();




    }


}


