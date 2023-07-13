#include "quack2d_prereqs.hpp"

#include "SDL.h"

#include "quack2d_window.hpp"

QWindow::QWindow(QGame* game)
{

    SetGame(game);

    if (SDL_InitSubSystem( SDL_INIT_VIDEO ) < 0)
    {
        //TODO: Add error checking
    }

    window_ = SDL_CreateWindow("Quack2D Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, kInitWindowWidth, kInitWindowHeight, SDL_WINDOW_SHOWN);
    if (window_ == NULL)
    {
        //TODO: Add error checking
    }

    window_surface_ = SDL_GetWindowSurface(window_);
    if (window_surface_ == NULL)
    {
        //TODO: Add error checking
    }
}
QWindow::~QWindow()
{
    SDL_FreeSurface( window_surface_ );
	window_surface_ = NULL;

	//Destroy window
	SDL_DestroyWindow( window_ );
	window_ = NULL;

	//Quit SDL subsystems
	SDL_QuitSubSystem(SDL_INIT_VIDEO);
}

QGame* QWindow::GetGame()
{
    return this->game_;
}

void QWindow::SetGame(QGame* game)
{
    this->game_ = game;
}