# Stage 2 - Build the Project with Make

This stage involves the steps to create a `Makefile` for the Make build system to use and then executing the `make` command.

This automates the manual build commands from [Stage 1](../Stage1/README.md).

To understand what is being done here, see the [main README Stage 2 explanation](../README.md#stage-2---build-the-project-with-make).

## Prerequisites

This stage continues to use [Visual Studio Code](https://code.visualstudio.com/) from Stage 0 as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

This stage continues to use the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform from Stage 1.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

## Steps

1. Create a `Makefile` in the root of the project.

```
code Makefile
```

2. Fill out the `Makefile` file with variables, targets, dependencies, and rules.

Refer to the comments in the [`Makefile`](./Makefile) to understand what it is doing.

3. Create a `build` directory in which to build the project and navigate to the `build` directory.

```
mkdir build
cd build
```

4. Execute the `make` command to have the Make build system build the project using the `Makefile`.

```
mingw32-make -C ..
```

Note that due to how the `Makefile` is configured, this command is equivalent to the one above:

```
mingw32-make -C .. all
```
