#ifndef ISINGLATTICE2D_H
#define ISINGLATTICE2D_H

#include <Eigen/Dense>
#include <iostream>
#include <random>

#include "ising_spin.h"
#include "numerics.h"

// TODO: make it into class template -> square lattice with arbitrary spin
class IsingLattice2d {
   public:
    IsingLattice2d(int n1, int n2) : n1(n1), n2(n2) { state.resize(n1, n2); }

    inline void SetValue(int i, int j, int value) { state(i, j).SetValue(value); }
    inline int GetValue(int i, int j) const { return state(i, j).GetValue(); }
    inline std::vector<int> GetShape() const { return std::move(std::vector<int>{n1, n2}); }

    void SetRandom();

    void PlotState();

   private:
    int n1, n2;
    Eigen::Array<IsingSpin, Eigen::Dynamic, Eigen::Dynamic> state;
};

#endif  // ISINGLATTICE2D_H