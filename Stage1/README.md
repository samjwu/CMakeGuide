# Stage 1 - Build the Project Manually

This stage involves the steps to build the project manually, which will be automated in later stages.

This builds the project that was set up in [Stage 0](../Stage0/README.md).

To understand what is being done here, see the [main README Stage 1 explanation](../README.md#stage-1---build-the-project-manually).

## Prerequisites

This stage continues to use [Visual Studio Code](https://code.visualstudio.com/) from Stage 0 as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

This stage uses the [MinGW](https://sourceforge.net/projects/mingw/) build tool or toolchain to build the project on a Windows platform.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

## Steps

1. Create a `build` directory in which to build the project and navigate to the `build` directory.

```
mkdir build
cd build
```

The `build` directory is good practice for keeping outputs of the build process separate from the source files. Keeping these separate has several benefits, including easier cleanup, allowing for multiple build configurations, and a consistent standard for different build environments.

2. Compile `mysqrt.cpp`, the custom library source code with logic for calculating a square root, into an object file `mysqrt.o`.

```
g++ -c ../src/math_functions/mysqrt.cpp -I../include -o mysqrt.o
```

The `g++` command uses the GNU C++ Compiler to compile the source code.

The `-c` option tells `g++` to compile the source files into object files without linking.

The `-I` option tells `g++` the directory where the header files are located (the `include` directory in this example).

The `mysqrt.o` file is an object file that is generated from the `mysqrt.cpp` source file.

3. Compile `main.cpp`, the main source code, into an object file `main.o`.

```
g++ -c ../src/main.cpp -I../include -o main.o
```

4. Link both the resulting object files `mysqrt.o` and `main.o`.

```
g++ -o stage1 mysqrt.o main.o
```

Linking combines object files into a single executable file.

Normally using `g++` without specifying the `-c` option will do linking automatically.

The compile and link steps can be done in one command:

```
g++ ../src/main.cpp ../src/math_functions/mysqrt.cpp -I../include -o stage1
```
