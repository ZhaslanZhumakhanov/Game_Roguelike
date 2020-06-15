#pragma once

#include <string>
#include <vector>
#include "../include/Player.h"
#include "../include/Money.h"

class MoneyManager {
    const Player &player_;
    int count_coins_ = 0;
    std::vector<Money> money{
            {20, 20},
            {45, 10},
            {60, 5}};
public:
    explicit MoneyManager(const Player &player)
            : player_(player) {}

    void Update();

    void PrintCountCoins() const;
};



