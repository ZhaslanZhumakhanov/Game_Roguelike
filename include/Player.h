#pragma once

#include "../include/Controls.h"

class Player {
    char symbol = '@';

    const Controls &controls;
    int x_;
    int y_;
    int speed_x_ = 0;
    int speed_y_ = 0;


    void Render() const;

    void Move();

public:
    Player(const Controls &controls, int x, int y)
            : controls(controls), x_(x), y_(y) {}

    void Update();

    int GetX() const;

    int GetY() const;
};



