#include <BearLibTerminal.h>

#include "../include/Player.h"
#include "../include/Controls.h"
#include "../include/MoneyManager.h"
#include "../include/ObstaclesManager.h"

int main() {
    terminal_open();
    terminal_refresh();

    Controls controls;
    Player player{controls, 2, 12};
    ObstaclesManager obstacles{player};
    MoneyManager money{player};


    // Ждем, пока пользователь не закроет окно
    while (true) {
        terminal_clear();

        controls.Update();
        if (controls.IsExit()) {
            break;
        }

        if (obstacles.GetGameOver()) {
            terminal_clear();
            terminal_print(1, 1, "Game Over!");
            terminal_refresh();
            continue;
        }

        obstacles.Update();
        player.Update();
        money.Update();

        terminal_refresh();
    }
    terminal_close();
}



