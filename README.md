# C++ Core Architecture & Functional Mastery Reference

A sandbox project purposely developed to unpack and analyze advanced C++ features.

## Project Architecture

The repository is modularly structured to mimic production-level C++ architectures:
*   `/include`: Contains the class specifications, function declarations, and interface contracts (`.h`).
*   `/src`: Houses the translation units and compiled logic execution (`.cpp`).
*   `/build`: Isolated directory containing compilation objects (`.o`) and final binaries.

## Chronological Learning Index

### Module 1: Memory & Performance Mechanics
*   **Pass-by-Value vs. Pass-by-Reference (`&`)**: Analyzing Stack frame replication overhead vs. raw memory access.
*   **Constant Contracts (`const &`)**: Protecting referenced data boundaries from mutable manipulation within function scopes.
*   **Inlining (`inline`)**: Forcing inline code substitution at the compiler level to bypass function call jump overhead.

### Module 2: The Power of `std::` and Generics
*   **Compile-time Templates (`template <typename T>`)**: Engineering type-agnostic algorithms compiled statically.
*   **First-Class Functions (`std::function`)**: Wrapping callables, lambdas and function pointers into assignable wrappers.
*   **Move Semantics (`std::move`)**: Transferring pointer ownership of resource blocks across scopes to eliminate deep-copying.

### Module 3: Advanced OOP Architecture
*   **Abstract Classes & Interfaces**: Building uninstantiable base contracts using pure virtual functions (`= 0`).
*   **Virtual Table Mechanics (`virtual`)**: Investigating runtime performance layout and dynamic late-binding.
*   **Memory Safety & Smart Pointers (`std::unique_ptr`)**: Implementing explicit scope-bound memory allocation to completely rule out manual `delete` leakage risks.

## Getting Started in GitHub Codespaces

This project is pre-configured with a development container that handles toolchain assembly instantly.

### 1. Project compilation
To collect all compilation units and build the unified binary app, run:
```bash
make
```

### 2. Running the program
Execute the compiled binary from the isolated build tree:
```bash
./build/cpp_master_app
```

### 3. Resetting the build space
To erase all object allocations and reset your active build space:
```bash
make clean
```