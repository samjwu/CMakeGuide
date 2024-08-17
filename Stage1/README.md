# Stage 1 - Build the Project Manually

This stage involves the steps to build the project manually, which will be automated in later stages.

This builds the project that was set up in [Stage 0](../Stage0/README.md).

To understand what is being done here, see the [main README Stage 1 explanation](../README.md#stage-1---build-the-project-manually).

## Prerequisites

This stage uses the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

## Steps

1. Compile `mysqrt`, the custom library with logic for calculating a square root, into an object file `mysqrt.o`.

```
g++ -c src/math_functions/mysqrt.cpp -Iinclude
```

2. Compile `main`, the main source code, into an object file `main.o`.

```
g++ -c src/main.cpp -Iinclude
```

3. Link both the resulting object files `mysqrt.o` and `main.o`

```
g++ -o stage1 mysqrt.o main.o
```
