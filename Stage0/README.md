# Stage 0 - Preparing the Project

This stage involves creating a minimal project. To understand what is being done here, see the [main README](../README.md).

Normally these files would be placed in the root directory (the CMakeGuide folder) but for simplicity these are separated out into their own directory for each stage.

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
code main.cpp
```

4. Open the main file with any text editor. This example uses Visual Studio Code.

```
code main.cpp
```

5. Fill out the `main.cpp` with content to run the program.
Refer to the comments in the [example `main.cpp`](./src/main.cpp) to understand what it is doing.

6. Create a subdirectory in the source code file to hold custom math functions and navigate to it. Then create a code file `mathfunctions.cpp` to hold logic for custom math functions.

```
mkdir mathfunctions
cd mathfunctions
code mathfunctions.cpp
```

7. Fill out the `mathfunctions.cpp` with content to calculate a square root.
Refer to the comments in the [example `mathfunctions.cpp`](./src/mathfunctions/mathfunctions.cpp) to understand what it is doing.

8. Return to the root directory of this stage (Stage 0) and create an include directory `include`, then navigate to it. Then create a header file `mathfunctions.h` to declare custom math functions that were implemented in `mathfunctions.cpp`.

```
cd ../..
mkdir include
cd include
code mathfunctions.h
```

9. Fill out the `mathfunctions.h` with content to declare the functions implemented in `mathfunctions.cpp`
Refer to the comments in the [example `mathfunctions.h`](./include/mathfunctions.h) to understand what it is doing.
