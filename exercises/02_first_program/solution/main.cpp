#include <Kokkos_Core.hpp>
#include <iostream>

int main(int argc, char* argv[]) {

    Kokkos::initialize(argc, argv);
    {
        // Print the configuration of the execution space
        Kokkos::print_configuration(std::cout);
    }
    
    Kokkos::finalize();
    
    return 0;
}