// Runs unit tests for custom square root function using GoogleTest framework

// include the GoogleTest framework
#include <gtest/gtest.h>

// include the header file for this project's custom math functions
#include "../include/math_functions/mysqrt.h"

// define a test suite named MySqrtTest, with a test case named PerfectSquares
TEST(MySqrtTest, PerfectSquares) { 
    EXPECT_EQ(0, math_functions::mysqrt(0));
    EXPECT_EQ(1, math_functions::mysqrt(1));
    EXPECT_EQ(2, math_functions::mysqrt(4));
    EXPECT_EQ(10, math_functions::mysqrt(100));
}

int main(int argc, char* argv[])
{
    // initialize GoogleTest
    ::testing::InitGoogleTest(&argc, argv);

    // run all test cases across all test suites
    return RUN_ALL_TESTS();
}
