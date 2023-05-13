#ifndef ISINGLATTICE2D_H
#define ISINGLATTICE2D_H

#include <iostream>
#include <Eigen/Dense>
#include <random>

#include "ising_spin.h"
#include "numerics.h"

enum class BoundaryCondition
{
  PERIODIC,
  OPEN
};

// TODO: make it into class template -> square lattice with arbitrary spin
class IsingLattice2d
{
public:
  IsingLattice2d(int n1, int n2);

  void SetSpin(int i, int j, IsingSpin spin);
  void SetSpin(int i, int j, int s);
  IsingSpin GetSpin(int i, int j);

  void SetConstSpin(IsingSpin spin);
  void SetConstSpin(int s);
  void SetRandomSpin();

  void PlotState();

private:
  int L1, L2;
  Eigen::Array<IsingSpin, Eigen::Dynamic, Eigen::Dynamic> state;

  std::mt19937 generator;
  std::uniform_int_distribution<int> dis_int{0, 1};
  std::uniform_real_distribution<Real> dis_float{0.0, 1.0};

  Real get_random_float();
  IsingSpin get_random_spin();
};

#endif // ISINGLATTICE2D_H