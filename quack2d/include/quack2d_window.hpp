#pragma once

#include "quack2d_prereqs.hpp"
#include "SDL.h"

const int kInitWindowWidth = 640;
const int kInitWindowHeight = 480;

class QWindow
{
public:
    QWindow(QGame *game);
    ~QWindow();

    QGame* GetGame();

    void SetGame(QGame *game);

private:

    QGame* game_;

    SDL_Window* window_;
    SDL_Surface* window_surface_;
};