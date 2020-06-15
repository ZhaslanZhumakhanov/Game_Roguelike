#pragma once

class Controls {
    bool is_up_ = false;
    bool is_exit_ = false;
    bool is_right_ = false;
    bool is_left_ = false;
    bool is_down_ = false;
    int count_steps_ = 0;

public:
    bool IsUp() const;

    bool IsExit() const;

    bool IsRight() const;

    bool IsLeft() const;

    bool IsDown() const;

    void Update();

    void Render() const;

    void PrintCountSteps() const;
};
