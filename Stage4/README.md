# Stage 4 - Integrating a Third Party Library (GoogleTest) into the Project

This stage involves the steps to integrate a third-party library, GoogleTest, into the project using CMake.

To understand what is being done here, see the [main README Stage 4 explanation](../README.md#stage-4---integrating-a-third-party-library-googletest-into-the-project).

## Prerequisites

This stage continues to use [Visual Studio Code](https://code.visualstudio.com/) from Stage 0 as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

This stage continues to use the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform from Stage 1.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

This stage contiues to use the [CMake](https://cmake.org/download/) build system generator from Stage 3.

## Steps

1. Create a directory for tests and navigate to the test directory.

```
mkdir tests
cd tests
```

2. Create a `test_mysqrt.cpp` test file to write the tests in.

```
code test_mysqrt.cpp
```

3. Fill out `CMakeLists.txt` file with unit tests to validate the functionality of the project.

Refer to the comments in the [`test_mysqrt.cpp`](./tests/test_mysqrt.cpp) file to understand what it is doing.


4. Create a `build` directory in which to build the project and navigate to the `build` directory.

```
mkdir build
cd build
```

5. Execute the `cmake` command to have the CMake build system generator generate a `Makefile`.

```
cmake .. -G "MinGW Makefiles"
```

6. Execute the `make` command to have the Make build system build the project using the `Makefile`.

```
mingw32-make
```

7. Execute the `make` command to have the Make build system build the test executable using the `Makefile`.

```
mingw32-make mysqrt_test
```
