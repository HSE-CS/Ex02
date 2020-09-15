#include "task1.h"

#include "gtest/gtest.h"

TEST(average, test1)
{
    ASSERT_DOUBLE_EQ(31.5, average(15.0, 48.0));
}

TEST(average, test2)
{
    ASSERT_DOUBLE_EQ(35.0, average(35.0, 35.0));
}

TEST(improve, test1)
{
    ASSERT_DOUBLE_EQ(7.7666666666666666, improve(15.0, 8.0));
}

TEST(improve, test2)
{
    ASSERT_DOUBLE_EQ(3.0, improve(1.0, 5.0));
}

TEST(iter, test1)
{
    ASSERT_DOUBLE_EQ(7.79, iter(7.79, 60.6841));
}

TEST(iter, test2)
{
    ASSERT_DOUBLE_EQ(7.79, iter(1.0, 2.0));
}