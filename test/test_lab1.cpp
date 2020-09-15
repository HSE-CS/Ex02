#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, test2)
{
    ASSERT_DOUBLE_EQ(1.0, calc(1.0));
}

TEST(task1, test3)
{
    ASSERT_DOUBLE_EQ(6.0, calc(36.0));
}

TEST(task1, test4)
{
    ASSERT_DOUBLE_EQ(10.0, calc(100.0));
}

TEST(task1, test5)
{
    ASSERT_NEAR(1.567, calc(3), 0.001);
}

TEST(task1, test6)
{
    ASSERT_NEAR(1.321, calc(2), 0.001);
}

TEST(task1, test7)
{
    ASSERT_NEAR(2.543, calc(6), 0,001);
}

TEST(task1, test8)
{
    ASSERT_EQ(true, good(6.25, 39.0625));
}

TEST(task1, test9)
{
    ASSERT_EQ(0, good(4,3));
}

TEST(task1, test10)
{
    ASSERT_EQ(1, good(17, 289));
}