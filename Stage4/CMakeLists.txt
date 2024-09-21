# set the minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# set the project name
project(stage4)

# set the C++ standard
# this will require the compiler to support C++ version 14 or later
set(CMAKE_CXX_STANDARD 14)

# add directories to search path for header files
# this adds the `include` folder to the search path
include_directories(include)

# list the source files
set(SRCS src/main.cpp src/math_functions/mysqrt.cpp)

# create the executable from the source files
add_executable(${PROJECT_NAME} ${SRCS})

# include ExternalProject module to build GoogleTest
# this module manages downloading and building GoogleTest
include(ExternalProject)

# fetch GoogleTest from its GitHub repository
ExternalProject_Add(googletest
    PREFIX "${CMAKE_BINARY_DIR}/lib"
    GIT_REPOSITORY "https://github.com/google/googletest.git"
    GIT_TAG "main"
    CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/lib/installed
)

# prevent building GoogleTest by default
set_target_properties(googletest PROPERTIES EXCLUDE_FROM_ALL TRUE)

# define installation directories
# this module handles defining CMAKE_INSTALL variables
# that determine where files are to be installed
include(GNUInstallDirs)

# add the directory for third-party library files to the search path for linking
link_directories(${CMAKE_BINARY_DIR}/lib/installed/${CMAKE_INSTALL_LIBDIR})

# add the directory for third-party header files to the search path for compilation
include_directories(${CMAKE_BINARY_DIR}/lib/installed/${CMAKE_INSTALL_INCLUDEDIR})

# GoogleTest requires the Threads package for thread safety, synchronization, and other threading features
find_package(Threads REQUIRED)

# create a test executable
add_executable(mysqrt_test tests/test_mysqrt.cpp src/math_functions/mysqrt.cpp)

# link Threads and GoogleTest
target_link_libraries(mysqrt_test gtest Threads::Threads)

# add googletest as a dependency of the test executable to ensure it is built before the tests
add_dependencies(mysqrt_test googletest)

# exclude the test executable from the default build
set_target_properties(mysqrt_test PROPERTIES EXCLUDE_FROM_ALL TRUE)
