# C++ Interceptor Simulation

CPP_Interceptor_Simulation is a compact C/C++ interceptor simulation project used to practice guidance, navigation, and control (GNC) concepts and to exercise build tooling (Make/CMake).

## Features

- Interceptor-target simulation implemented in C/C++
- Makefile-based build and optional CMake support
- Example guidance laws and simple sensor noise models

## Requirements

- A C/C++ compiler (g++, clang)
- make (for Makefile-based build)
- cmake (optional, for CMake-based build)

## Build (Makefile)

From the repository root:

   make

This should produce the simulation executable (check the Makefile for the target name, often `sim` or `interceptor_sim`).

## Build (CMake)

If the project includes CMakeLists.txt:

   mkdir -p build
   cd build
   cmake ..
   cmake --build .

## Run

After building, run the produced executable. Example:

   ./interceptor_sim

Or specify any runtime arguments documented in the code or Makefile.

## Project Structure (example)

- `src/` - C/C++ source files
- `include/` - header files
- `Makefile` - top-level Makefile
- `CMakeLists.txt` - optional CMake configuration
- `bin/` or `build/` - build outputs

Adjust structure details to match the repository layout.

## Contributing

Improvements and bug fixes are welcome. Please open an issue to discuss larger changes before submitting a pull request.

## License

Include a LICENSE file or add license text here.

## Author

jahausma
