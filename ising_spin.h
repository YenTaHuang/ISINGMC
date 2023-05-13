#ifndef ISINGSPIN_H
#define ISINGSPIN_H

enum class IsingSpin
{
  UP = 1,
  DOWN = -1
};

int SpinToS(IsingSpin spin);
IsingSpin SToSpin(int s);

std::ostream &operator<<(std::ostream &os, IsingSpin spin);

#endif // ISINGSPIN_H