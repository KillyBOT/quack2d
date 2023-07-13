#include <iostream>

#include "quack2d.hpp"

class MyGame : public QGame
{
public:
    MyGame()
    {

    }
    ~MyGame()
    {

    }
};

int main()
{
    MyGame game;

    game.Run();

    return 0;
}