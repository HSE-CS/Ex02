#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(3.16227766, calc(10));
}

TEST(task1, test2)
{
ASSERT_EQ(2.82842712, calc(8));
}

TEST(task1, test3)
{
    ASSERT_EQ(1.4167, improve(1.5, 2));
}

TEST(task1, test4)
{
ASSERT_EQ(1.4142, improve(1.4167, 2));
}

TEST(task1, test5)
{
    ASSERT_EQ(false, good(1, 2));
}

TEST(task1, test6)
{
    
    ASSERT_EQ(true, good(2.82842712, 8));
}
TEST(task1, test7)
{
    ASSERT_EQ(2.0, average(2, 2));
}
TEST(task1, test8)
{
    ASSERT_EQ(3.0, average(3, 3));
}
TEST(task1, test9)
{
    ASSERT_EQ(4.0, average(4, 4));
}
TEST(task1, test10)
{
    ASSERT_EQ(3.31662479, calc(11));
}