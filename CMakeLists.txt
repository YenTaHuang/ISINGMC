cmake_minimum_required(VERSION 3.0)

project(ISINGMC)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(main ising_spin.cpp ising_lattice_2d.cpp main.cpp)
