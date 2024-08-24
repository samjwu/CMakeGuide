# Stage 2 - Build the Project with make

This stage involves the steps to create a `Makefile` for the `make` build system to use and then executing the `make` command.

This automates the manual build commands from [Stage 1](../Stage1/README.md).

To understand what is being done here, see the [main README Stage 2 explanation](../README.md#stage-2---build-the-project-with-make).

## Prerequisites

This stage continues to use the [MinGW](https://sourceforge.net/projects/mingw/) toolchain to build the project on a Windows platform from Stage 1.

Use the [GCC](https://gcc.gnu.org/) toolchain on a Linux platform or the [Clang](https://clang.llvm.org/) toolchain for cross-platform capability.

## Steps

1. Create a `Makefile` in the root of the project.

```
code Makefile
```

2. Fill out the `Makefile` code file with variables, targets, dependencies, and rules.

Refer to the comments in the [`Makefile`](./Makefile) to understand what it is doing.

3. Execute the `make` command to have the `make` build system build the project using the `Makefile`.

```
mingw32-make
```

Note that due to how the `Makefile` is configured, this command is equivalent to the one above:

```
mingw32-make all
```
