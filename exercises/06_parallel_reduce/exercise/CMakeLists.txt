cmake_minimum_required (VERSION 3.22)

project(05ParallelReduceExercise LANGUAGES CXX)

include(../../../cmake/SetUpKokkos.cmake)

add_executable(exe06 main.cpp)
target_link_libraries(exe06 Kokkos::kokkos)
