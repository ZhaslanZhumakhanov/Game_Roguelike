#include <BearLibTerminal.h>
#include <string>

#include "../include/MoneyManager.h"


void MoneyManager::Update() {
    PrintCountCoins();
    int i = 0;
    for (auto &m : money) {
        if ((player_.GetX() == m.x_) && (player_.GetY() == m.y_)) {
            count_coins_++;
            money.erase(money.begin() + i);
        }
        m.Update();
        i++;
    }
}

void MoneyManager::PrintCountCoins() const {
    terminal_print(0, 0, "Coins");
    char str[10];
    snprintf(str, sizeof(str), "%d", count_coins_);
    terminal_print(6, 0, str);
}
