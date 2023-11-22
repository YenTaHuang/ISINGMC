#include <Eigen/Dense>
#include <iostream>
#include <random>

#include "ising_lattice_2d.h"

int main() {
    std::cout << "Hello sesami" << std::endl;

    IsingLattice2d lattice = IsingLattice2d(10, 20);
    lattice.SetRandom();
    lattice.PlotState();

    std::cout << "done" << std::endl;

    return 0;
}