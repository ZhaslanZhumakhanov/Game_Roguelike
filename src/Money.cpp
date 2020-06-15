#include <BearLibTerminal.h>
#include "../include/Money.h"

void Money::RenderMoney() const {
    terminal_put(x_, y_, symbol);
}

void Money::Update() const {
    RenderMoney();
}
