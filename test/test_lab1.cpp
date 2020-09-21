#include "task1.h"


#include "gtest/gtest.h"



TEST(task1, test1)
{
    ASSERT_NEAR(1.414214, calc(2.0), 0.000001);
}

TEST(task1, test2)
{
    ASSERT_NEAR(2.000000, calc(4.0), 0.000001);
}

TEST(task1, test3)
{
    ASSERT_NEAR(5.000000, average(4.0, 6.0), 0.000001);
}

TEST(task1, test4)
{
    ASSERT_NEAR(2.500000, average(2.0, 3.0), 0.000001);
}

TEST(task1, test5)
{
    ASSERT_NEAR(0.000000, good(1.0, 3.0), 0.000001);
}

TEST(task1, test6)
{
    ASSERT_NEAR(1.000000, good(4.0, 16.0), 0.000001);
}

TEST(task1, test7)
{
    ASSERT_NEAR(2.250000, improve(2.0, 5.0), 0.000001);
}

TEST(task1, test8)
{
    ASSERT_NEAR(5.450000, improve(10.0, 9.0), 0.000001);
}

TEST(task1, test9)
{
    ASSERT_NEAR(2.645751, iter(3.0, 7.0), 0.000001);
}

TEST(task1, test10)
{
    ASSERT_NEAR(1.414214, iter(9.0, 2.0), 0.000001);
}

