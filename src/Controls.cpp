#include <BearLibTerminal.h>
#include "../include/Controls.h"

bool Controls::IsUp() const { return is_up_; }

bool Controls::IsExit() const { return is_exit_; }

bool Controls::IsRight() const { return is_right_; }

bool Controls::IsLeft() const { return is_left_; }

bool Controls::IsDown() const { return is_down_; }

void Controls::Update() {
    is_up_ = false;
    is_exit_ = false;
    is_left_ = false;
    is_right_ = false;
    is_down_ = false;
    Render();
    while (terminal_has_input()) {
        auto key = terminal_read();
        if (key == TK_UP) {
            is_up_ = true;
            count_steps_++;
        }
        if (key == TK_CLOSE) {
            is_exit_ = true;
            count_steps_++;
        }
        if (key == TK_RIGHT) {
            is_right_ = true;
            count_steps_++;
        }
        if (key == TK_LEFT) {
            is_left_ = true;
            count_steps_++;
        }
        if (key == TK_DOWN) {
            is_down_ = true;
            count_steps_++;
        }
    }
}

void Controls::PrintCountSteps() const {
    char str[10];
    snprintf(str, sizeof(str), "%d", count_steps_);
    terminal_print(6, 1, str);
}

void Controls::Render() const {
    terminal_print(0, 1, "Steps");
    PrintCountSteps();
}
