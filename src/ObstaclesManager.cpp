#include "../include/ObstaclesManager.h"

void ObstaclesManager::Update() {
    for (auto &o : obstacles) {
        if ((player_.GetX() == o.x_) && (player_.GetY() == o.y_)) {
            game_over_ = true;
        }
        o.Update();
    }
}

bool ObstaclesManager::GetGameOver() const {
    return game_over_;
}
