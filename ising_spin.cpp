#include "ising_spin.h"

#include <random>

#include "numerics.h"

std::mt19937 generator = []() {
    std::mt19937 tmp;
    tmp.seed(std::random_device()());
    return tmp;
}();

std::uniform_int_distribution<int> dis_int{0, 1};
std::uniform_real_distribution<Real> dis_float{0.0, 1.0};

void IsingSpin::SetRandom() {
    SetValue(2 * dis_int(generator) - 1);
}