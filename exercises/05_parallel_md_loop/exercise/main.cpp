#include <iostream>

#include <Kokkos_Core.hpp>

int main(int argc, char* argv[]) {

    Kokkos::initialize(argc, argv);
    {

        // Parameters

        int Nx = 128;
        int Ny = 128;

        // _____________________________________________________
        // Read Nx, Ny from the command line

        if (argc >= 3) {
            Nx = std::atoi(argv[1]);
            Ny = std::atoi(argv[2]);
        }

        // _____________________________________________________
        // Create two 2D View of size Nx x Ny

        std::cout << "Creation of two 2D Views of size " << Nx << " x " << Ny << std::endl;

        // ...

        // _____________________________________________________
        // Initialize "T_new" field with -1.0

        // ...

        // _____________________________________________________
        // Initialize "T" field

        Kokkos::parallel_for("Initialization", Kokkos::RangePolicy<>(0, Nx),
        KOKKOS_LAMBDA(const int i) {
            // ...
        });

        // ...

        // _____________________________________________________
        // Jacobi Update

        Kokkos::parallel_for("Jacobi", Kokkos::RangePolicy<>(1, Nx - 1),
        KOKKOS_LAMBDA(const int i) {
            // ...
        });

        // ...

        // _____________________________________________________
        // Copy the result to a Host accessible View

        // ...

        // _____________________________________________________
        // Check the result

        double error = 0.0;
        for (int i = 1; i < Nx - 1; i++) {
            for (int j = 1; j < Ny - 1; j++) {
                error += std::abs(1.5 /* - ... */);
            }
        }

        std::cout << "Error: " << error << std::endl;

    }
    Kokkos::finalize();

    return 0;
}
