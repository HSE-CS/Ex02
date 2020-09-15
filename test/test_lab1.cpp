#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(2.236067977, calc(5), 0.0001);
}

TEST(task1, test2)
{
    ASSERT_NEAR(3.0, average(2.0, 4.0), 0.0001);
}

TEST(task1, test3)
{
    ASSERT_EQ(1, good(2.0, 4.0));
}

TEST(task1, test4)
{
    ASSERT_EQ(0, good(90.0, 4.0));
}

TEST(task1, test5)
{
    ASSERT_NEAR(3.0, calc(9), 0.0001);
}

TEST(task1, test6)
{
    ASSERT_NE(56.0, calc(45.0));
}

TEST(task1, test7)
{
    ASSERT_NEAR(2.645751, calc(7), 0.0001);
}

TEST(task1, test8)
{
    ASSERT_DOUBLE_EQ(3.0, calc(9.0));
}

TEST(task1, test9)
{
    ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, test10)
{
    ASSERT_EQ(1, good(3.0, 9.0));
}