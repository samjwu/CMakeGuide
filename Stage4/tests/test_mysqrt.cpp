#include <gtest/gtest.h>

#include "../include/math_functions/mysqrt.h"

TEST(MySqrtTest, PerfectSquares) { 
    EXPECT_EQ(0, math_functions::mysqrt(0));
    EXPECT_EQ(1, math_functions::mysqrt(1));
    EXPECT_EQ(2, math_functions::mysqrt(4));
    EXPECT_EQ(10, math_functions::mysqrt(100));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
