# Stage 0 - Preparing the Project

This stage involves creating a minimal project, which will then be built in later stages.

To understand what is being done here, see the [main README Stage 0 explanation](../README.md#stage-0---preparing-the-project).

Normally these files would be placed in the root directory (the CMakeGuide folder) but for simplicity these are separated out into their own directory for each stage.

## Prerequisites

This stage uses [Visual Studio Code](https://code.visualstudio.com/) as a text editor, though any text editor can be used, such as Notepad, Notepad++, Vim, Emacs, Atom, etc.

## Steps

1. Create the source directory `src`.

```
mkdir src
```

2. Navigate to the source directory.

```
cd src
```

3. Create the main source code file `main.cpp`.

```
touch main.cpp
```

4. Open the main file with any text editor. This example uses [Visual Studio Code](https://code.visualstudio.com/).

```
code main.cpp
```

5. Fill out the `main.cpp` code file with content to run the program.

Refer to the comments in the [example `main.cpp`](./src/main.cpp) to understand what it is doing.

6. Create a subdirectory in the source code directory to hold custom math functions and navigate to it.

Then create a code file `mysqrt.cpp` to hold logic for a custom square root function.

```
mkdir math_functions
cd math_functions
code mysqrt.cpp
```

7. Fill out the `mysqrt.cpp` code file with content to calculate a square root.

Refer to the comments in the [example `mysqrt.cpp`](./src/math_functions/mysqrt.cpp) to understand what it is doing.

8. Return to the root directory of this stage (Stage 0) and create an include directory `include`, then navigate to it.

Then create a subdirectory in the include directory to match the structure of the source code directory and navigate to it.

Then create a header file `mysqrt.h` to declare custom math functions that were implemented in `mysqrt.cpp`.

```
cd ../..
mkdir include
cd include
code mysqrt.h
```

9. Fill out the `mysqrt.h` header file with content to declare the functions implemented in `mysqrt.cpp`

Refer to the comments in the [example `mysqrt.h`](./include/math_functions/mysqrt.h) to understand what it is doing.

## Project Structure

This is what the project structure looks like for Stage 0:

```
Stage0/
  ├── README.md
  ├── src/
  │    ├── main.cpp
  │    └── math_functions/
  │         └── mysqrt.cpp
  └── include/
       └── math_functions/
            └── mysqrt.h
```
### Explanation

Here is an explanation of the project structure:

`README.md`: This file. Provides information on Stage 0.
`src`: The source directory. Contains source code for the project to function.
`src/main.cpp`: The main code file. Runs the project.
`src/math_functions`: A subdirectory in the source code directory. Used to group similar functionality. In this example, there is only one code file in it but more can be added (for example: `myexponent.cpp`, `mylogarithm.cpp`).
`src/math_functions/mysqrt.cpp`: A code file. Implements custom logic to calculate a square root. This one uses [Newton's method](https://en.wikipedia.org/wiki/Newton's_method) but the details are not important.
`include`: The include directory. Contains the header file where the custom square root function is declared.
`include/math_functions`: A subdirectory in the include code directory. Used to group similar functionality. In this example, there is only one header file in it but more can be added (for example: `myexponent.h`, `mylogarithm.h`).
`include/math_functions/mysqrt.h`: A header file. Declares the custom square root function.
