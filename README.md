# CMake Guide

*Guide to getting started with CMake*

This guide starts from an example C++ project, then progresses to building projects with CMake.

This README covers the concepts being used. For instructions on how to actually build the project, navigate to the README in each stage's directory.

## Stages

### Stage 0 - Preparing the Project

This section describes project structure. To skip the explanation and immediately start setting up the project, skip to [the Stage 0 README](./Stage0/README.md).

```
cd Stage0
```

A typical C++ project is structured to separate source files, header files, build files, and other resources.

Here is a theoretical project structure:

```
ExampleCppProject/
  ├── README.md
  ├── CMakeLists.txt # or `Makefile`
  ├── src/
  │    ├── main.cpp
  │    ├── app.cpp
  │    └── app_helpers.cpp
  ├── include/
  │    └── app/
  │         ├── app.h
  │         └── app_helpers.h
  ├── build/ # or bin/
  │    └── main.exe
  ├── lib/
  │    └── libmath.a
  ├── tests/
  │    ├── test_main.cpp
  │    └── test_app.cpp
  ├── config/
  │    └── app_config.conf
  ├── docs/
  │    ├── README.md
  │    └── user_guide.md
  ├── scripts/
  │    └── build.sh
  └── res/
       └── logo.png
```

Here is a quick explanation of each file and directory:

- `ExampleCppProject`: The folder or directory that contains our example project.
- `README.md`: A file that explains important information about the project.
- `CMakeLists.txt` or `Makefile`: A file used by CMake to build our project.
- `src`: The source directory contains source code files (for example: `.cpp`, `.cc`, `.cxx`) that the project uses to function.
- `include`: The include directory contains header files (for example: `.h`, `.hpp`, `.hh`) that declare functions and classes for the source code files. It may have subdirectories (app in this example) to reflect how the project is organized.
- `build` or `bin`: The build or binary directory contains the output of the build process (for example: `.exe`, `.bin`, `.out`, `.o`).
- `lib`: The library directory contains third-party libraries or custom libraries (for example: `.a`, `.lib`, `.so`, `.dll`) that the project depends on.
- `tests`: The test directory contains tests for the project to check that it works correctly.
- `config`: The configuration directory contains configuration files (for example: `.conf`, `.ini`) with settings for the project.
- `docs`: The documentation directory contains documentation files (for example: `.md`, `.rst`, `.txt`) with information on the project.
- `scripts`: The scripts directory contains script files (for example: `.sh`, `.py`) to automate tasks.
- `res`: The resources directory contains non-code resource files (for example: `.png`, `.csv`, `.mp3`) used by the project.

### Stage 1 - Build the Project Manually

This section describes building the project manually. To skip the explanation and immediately start building the project, skip to [the Stage 1 README](./Stage1/README.md).

```
cd Stage1
```

This section involves manually compiling the source code into object files and then linking those object files into an executable.

As mentioned in Stage 0, source code is a file that contains the commands written in some higher level programming language that the project uses to function.

Compilation is the process of converting source code into intermediate code or machine code known as an object file.

Object files are intermediate files containing compiled machine code made by the compiler during the build process.

Object files need to be linked to create an executable.

The full process involved in compilation includes preprocessing, compilation, assembly, and linking:

- Preprocessing: Handling of directives (special instructions for the compiler's preprocessor) and macros (code snippets or constants reused in the source code) and inclusion of header files into source code.
- Compilation: Converts preprocessed source code into assembly language.
- Assembly: Converts assembly language into machine code that results in an object file.
- Linking: Combines object files into an executable.

### Stage 2 - Build the Project with Make

This section describes building the project with Make. To skip the explanation and immediately start building with Make, skip to [the Stage 2 README](./Stage2/README.md).

```
cd Stage2
```

This section involves creating a `Makefile`, a special configuration file that defines directives or instructions for the Make build system or toolset.

The Make toolset is a build automation system usually used for compiling and linking programs from source code. It can also be used to automate tasks that have dependencies and require a set of actions to be taken. Some examples include building documentation, packaging an application into other formats for distribution and installation (for example: `.zip`, `.tar.gz`, `.deb`, `.rpm`), and running tests.

The `Makefile` will define how the compilation and linking steps will be handled. After it is created, users will be able to build the project by running the `make` command, which automatically uses the `Makefile` as an input to manage the build process.

Key components of the `Makefile` include variables, targets, dependencies, and rules:

- Variables: A value that can be reused in the `Makefile` (for example: file lists).
- Targets: Files that the Make build system will create or update (for example: an executable).
- Dependencies: Files or components that need to be included to build the target (for example: a header file).
- Rules: The set of actions or commands that must be taken to build the target from its dependencies.

### Stage 3 - Build the Project with CMake

This section describes building the project with CMake. To skip the explanation and immediately start building with CMake, skip to [the Stage 3 README](./Stage3/README.md).

```
cd Stage3
```
