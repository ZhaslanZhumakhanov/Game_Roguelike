#pragma once

#include <vector>
#include "../include/Obstacle.h"
#include "../include/Player.h"

class ObstaclesManager {
    const Player &player_;
    bool game_over_ = false;
    std::vector<Obstacle> obstacles{
            {30, 15},
            {55, 10},
            {70, 5}};

public:
    explicit ObstaclesManager(const Player &player)
            : player_(player) {}

    void Update();

    bool GetGameOver() const;
};



