#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(2.23607, calc(5.0), 0.00001);
}

TEST(task1, test2)
{
    ASSERT_NEAR(2.64575, calc(7.0), 0.00001);
}

TEST(task1, test3)
{
    ASSERT_NEAR(7.500000, average(3.0, 12.0), 0.000001);
}

TEST(task1, test4)
{
    ASSERT_NEAR(6.500000, average(5.0, 8.0), 0.000001);
}

TEST(task1, test5)
{
    ASSERT_NEAR(0.000000, good(4.0, 7.0), 0.000001);
}

TEST(task1, test6)
{
    ASSERT_NEAR(1.000000, good(6.0, 36.0), 0.000001);
}

TEST(task1, test7)
{
    ASSERT_NEAR(2.66667, improve(3.0, 7.0), 0.00001);
}

TEST(task1, test8)
{
    ASSERT_NEAR(5.400000, improve(10.0, 8.0), 0.000001);
}

TEST(task1, test9)
{
    ASSERT_NEAR(1.73205, iter(6.0, 3.0), 0.000001);
}

TEST(task1, test10)
{
    ASSERT_NEAR(1.41421, iter(5.0, 2.0), 0.00001);
}