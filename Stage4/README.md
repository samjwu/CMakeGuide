# Stage 4 - Add Tests with GoogleTest

This stage involves the steps to integrate a third-party library into the project using CMake.

In this example, the GoogleTest library will be added to `CMakeLists.txt` file, instructing the CMake build system generator fetch and configure the library from its repository at [https://github.com/google/googletest](https://github.com/google/googletest).

## Prerequisites

This stage continues to use [Visual Studio Code](https://code.visualstudio.com/) from Stage 0 as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

This stage continues to use the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform from Stage 1.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.
