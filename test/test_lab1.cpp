#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(30.0,average(10.0, 50.0));
}

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(10.75,average(15.5, 6.0));
}

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(false , good(10.0,15.0));
}
TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(false , good(11.0,15.0));
}

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(5.75, improve(10.0,15.0));
}

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(6.625, improve(12.0,15.0));
}

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(1.414214, iter(14.0,2.0));
}
TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(14.142136, iter(400.0,200.0));
}
TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(3.741657, calc(14.0));
}
TEST{
    ASSERT_DOUBLE_EQ(2.449490, calc(6.0));
}