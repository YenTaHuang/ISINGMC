#ifndef ISINGSPIN_H
#define ISINGSPIN_H

#include <random>
#include <string>

class IsingSpin {
   public:
    IsingSpin() : state(State::UP){};
    IsingSpin(int value) : state(value > 0 ? State::UP : State::DOWN){};

    // Get the value in +1(UP) or -1(DOWN)
    inline int GetValue() const {
        return (state == State::UP) ? +1 : -1;
    }

    inline void SetValue(int value) {
        state = value > 0 ? State::UP : State::DOWN;
    }

    void SetRandom();

    inline std::string ToString() const {
        return state == State::UP ? "+" : "-";
    }

   private:
    enum State {
        UP,
        DOWN,
    } state;
};

#endif  // ISINGSPIN_H