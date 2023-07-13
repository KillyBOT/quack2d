#pragma once

#include "quack2d_prereqs.hpp"

#include "SDL.h"

#include "quack2d_window.hpp"

class QGame
{
public:
    QGame();
    virtual ~QGame();
    
    void Run();
    void Exit();
private:

    bool is_running_ = true;

    std::unique_ptr<QWindow> window_;
};