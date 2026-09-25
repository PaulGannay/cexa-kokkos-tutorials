cmake_minimum_required (VERSION 3.22)

project(05ParallelReduceSolution LANGUAGES CXX)

include(../../../cmake/SetUpKokkos.cmake)

add_executable(exe06solution main.cpp)
target_link_libraries(exe06solution Kokkos::kokkos)
add_test(
    NAME exe06solution
    COMMAND exe06solution
)
