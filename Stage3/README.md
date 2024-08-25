# Stage 3 - Build the Project with CMake

This stage involves the steps to create a `CMakeLists.txt` file for the CMake build system generator and using the `cmake` command to build the project.

This automates the creation of the `Makefile` from [Stage 2](../Stage2/README.md).

To understand what is being done here, see the [main README Stage 3 explanation](../README.md#stage-3---build-the-project-with-cmake).

## Prerequisites

This stage continues to use [Visual Studio Code](https://code.visualstudio.com/) from Stage 0 as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

This stage continues to use the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform from Stage 1.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

## Steps

1. Create a `CMakeLists.txt` file in the root of the project.

```
code CMakeLists.txt
```

2. Fill out the `CMakeLists.txt` file with variables, targets, dependencies, and rules.

Refer to the comments in the [`CMakeLists.txt`](./CMakeLists.txt) to understand what it is doing.

3. Execute the `cmake` command to have the CMake build system generator generate a `Makefile`.

```
cmake .
```

4. As was done in Stage 2, execute the `make` command to have the Make build system build the project using the `Makefile`.

```
mingw32-make
```
