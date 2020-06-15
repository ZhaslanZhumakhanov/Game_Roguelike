#include <BearLibTerminal.h>
#include "../include/Obstacle.h"

void Obstacle::Update() const {
    terminal_put(x_, y_, symbol);
}
