#include "ising_lattice_2d.h"

IsingLattice2d::IsingLattice2d(int n1, int n2) : L1(n1), L2(n2)
{
  state.resize(L1, L2);
  generator.seed(std::random_device()());
}

void IsingLattice2d::SetSpin(int i, int j, IsingSpin spin) { state(i, j) = spin; }
void IsingLattice2d::SetSpin(int i, int j, int s) { state(i, j) = SToSpin(s); }
IsingSpin IsingLattice2d::GetSpin(int i, int j) { return state(i, j); }

void IsingLattice2d::PlotState()
{
  std::cout << "start printing state:" << std::endl;
  for (int i = 0; i != state.rows(); i++)
  {
    for (int j = 0; j != state.cols(); j++)
    {
      std::cout << state(i, j);
    }
    std::cout << std::endl;
  }
  return;
}

void IsingLattice2d::SetConstSpin(IsingSpin spin) { state.setConstant(spin); }
void IsingLattice2d::SetConstSpin(int s) { state.setConstant(static_cast<IsingSpin>(s)); }
void IsingLattice2d::SetRandomSpin()
{
  for (int i = 0; i != state.rows(); i++)
    for (int j = 0; j != state.cols(); j++)
      state(i, j) = get_random_spin();
}

Real IsingLattice2d::get_random_float() { return dis_float(generator); }
IsingSpin IsingLattice2d::get_random_spin() { return SToSpin(2*dis_int(generator)-1); }