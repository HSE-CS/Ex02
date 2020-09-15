#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(2.449490, calc(6.0), 0.00001);
}

TEST(task1, test2)
{
    ASSERT_NEAR(2.000000, calc(4.0), 0.00001);
}

TEST(task1, test3)
{
    ASSERT_NEAR(3.000000, calc(9.0), 0.00001);
}

TEST(task1, test4)
{
    ASSERT_NEAR(1.000000, average(1.0,1.0), 0.00001);
}


