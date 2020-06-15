#include <Player.h>
#include <BearLibTerminal.h>

void Player::Render() const { terminal_put(x_, y_, symbol); }

void Player::Move() {
    if (controls.IsRight()) {
        speed_x_ = 1;
    }
    if (controls.IsLeft()) {
        speed_x_ = -1;
    }
    if (controls.IsUp()) {
        speed_y_ = -1;
    }
    if (controls.IsDown()) {
        speed_y_ = +1;
    }
    x_ += speed_x_;
    speed_x_ = 0;
    y_ += speed_y_;
    speed_y_ = 0;
}

void Player::Update() {
    Move();
    Render();
}

int Player::GetX() const { return x_; }

int Player::GetY() const { return y_; }
