#include "quack2d_prereqs.hpp"

#include "SDL.h"

#include "quack2d_game.hpp"

QGame::QGame()
{
    window_ = std::make_unique<QWindow>(this);
}

QGame::~QGame()
{
}

void QGame::Run()
{
    while (is_running_)
    {
        SDL_Event e;
        
        while( SDL_PollEvent( &e ) )
        {
            if( e.type == SDL_QUIT )
                is_running_ = false; 
        } 
    }
}

void QGame::Exit()
{
}