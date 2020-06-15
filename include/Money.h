#pragma once

class Money {
    char symbol = '$';
public:
    int x_;
    int y_;

    Money(int x, int y) : x_(x), y_(y) {}

    void Update() const;

    void RenderMoney() const;
};



