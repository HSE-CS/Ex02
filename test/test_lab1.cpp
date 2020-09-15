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
    ASSERT_NEAR(7.76666666, improve(15.0, 8.0), 0.00000001);
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
    ASSERT_NEAR(1.41421356, iter(1.0, 2.0), 0.00000001);
}

TEST(calc, test1)
{
    ASSERT_NEAR(39.6106046, calc(1569.0), 0.00000001);
}

TEST(calc, test2)
{
    ASSERT_NEAR(1.0, calc(1.0), 0.00000001);
}

TEST(calc, test3)
{
    ASSERT_NEAR(1.58113883, calc(2.5), 0.00000001);
}

TEST(calc, test4)
{
    ASSERT_NEAR(3.0, calc(9.0), 0.00000001);
}