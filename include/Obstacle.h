#pragma once

class Obstacle {
    char symbol = '#';

public:
    int x_;
    int y_;

    Obstacle(int x, int y) : x_(x), y_(y) {}

    void Update() const;
};




