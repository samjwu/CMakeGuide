# Stage 0 - Preparing the Project

This stage involves creating a minimal project. To understand what is being done here, see the [main README](../README.md).

Normally these files would be placed in the root directory (the CMakeGuide folder) but for simplicity these are separated out into their own directory for each stage.

## Steps

1. Create the source directory `src` and navigate to it.

```
mkdir src
cd src
```

2. Create the main source code file `main.cpp`, then open it with any text editor. This example uses Visual Studio Code.

```
touch main.cpp
code main.cpp
```

3. Fill out the `main.cpp` with content to run the program.
Refer to the comments in the [example `main.cpp`](./src/main.cpp) to understand what it is doing.

4. Create a subdirectory in the source code file to hold custom math functions and navigate to it.

```
mkdir mathfunctions
cd mathfunctions
```

5. Fill out the `mathfunctions.cpp` with content to calculate a square root.
Refer to the comments in the [example `mathfunctions.cpp`](./src/mathfunctions/mathfunctions.cpp) to understand what it is doing.

```
code mathfunctions.cpp
```
