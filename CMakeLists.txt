cmake_minimum_required(VERSION 3.17)
project(Heap)

set(CMAKE_CXX_STANDARD 14)
set(GCC_COVERAGE_COMPILE_FLAGS "-Wall -Wextra -pedantic -std=c++14")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_COVERAGE_COMPILE_FLAGS}" )

add_executable(Heap main.cpp heap.cpp heap.hpp patient.cpp patient.hpp hospital.cpp hospital.hpp doctor.cpp doctor.hpp)