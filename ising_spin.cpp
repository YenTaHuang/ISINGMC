#include <iostream>
#include <cassert>

#include "ising_spin.h"

int SpinToS(IsingSpin spin)
{
  return static_cast<int>(spin);
}

IsingSpin SToSpin(int s)
{
  assert(s == 1 || s == -1);
  return static_cast<IsingSpin>(s);
}

std::ostream &operator<<(std::ostream &os, IsingSpin spin)
{
  return (os << (spin == IsingSpin::UP ? "+" : "-"));
}