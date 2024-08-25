# set the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# set the project name
project(stage3)

# set the C++ standard
# this will require the compiler to support C++ version 11 or later
set(CMAKE_CXX_STANDARD 11)

# add directories to search path for header files
# this adds the `include` folder to the search path
include_directories(include)

# list the source files
set(SRCS src/main.cpp src/math_functions/mysqrt.cpp)

# create the executable from the source files
add_executable(${PROJECT_NAME} ${SRCS})

# add a target to clean the directory
# include the executable when cleaning the directory
set_directory_properties(PROPERTIES ADDITIONAL_MAKE_CLEAN_FILES "${PROJECT_BINARY_DIR}/${PROJECT_NAME}")
