#include "ising_lattice_2d.h"

void IsingLattice2d::SetRandom() {
    for (int i = 0; i != state.rows(); i++)
        for (int j = 0; j != state.cols(); j++)
            state(i, j).SetRandom();
}

void IsingLattice2d::PlotState() {
    for (int i = 0; i != state.rows(); i++) {
        for (int j = 0; j != state.cols(); j++) {
            std::cout << state(i, j).ToString();
        }
        std::cout << std::endl;
    }
    return;
}
