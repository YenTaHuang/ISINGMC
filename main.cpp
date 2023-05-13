#include <iostream>
#include "ising_lattice_2d.h"

using namespace std;

int main()
{
  cout << "Hello sesami" << endl;

  IsingLattice2d lattice = IsingLattice2d(10, 20);
  lattice.SetRandomSpin();

  lattice.PlotState();

  return 0;
}