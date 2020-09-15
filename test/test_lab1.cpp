//#include "task1.h"
#include "../include/task1.h"

#include "gtest/gtest.h"


TEST(calc, test1)
{
    ASSERT_FLOAT_EQ(4.0, calc(16.0));
}

TEST(calc, test2)
{
    ASSERT_FLOAT_EQ(1.4142135, calc(2.0));
}

TEST(calc, test3)
{
    ASSERT_FLOAT_EQ(8.0, calc(64.0));
}

TEST(calc, test4)
{
    ASSERT_FLOAT_EQ(2.345208, calc(5.5));
}

TEST(average, test1)
{
    ASSERT_FLOAT_EQ(4.0, average(2.0, 6.0));
}

TEST(average, test2)
{
    ASSERT_FLOAT_EQ(6.5, average(4.5, 8.5));
}

TEST(improve, test1)
{
    ASSERT_DOUBLE_EQ(1.750000, improve(3.0, 1.5));
}

TEST(improve, test2)
{
    ASSERT_NEAR(2.320238, improve(4.2, 1.85), 0.00001);
}

TEST(iter, test1)
{
    ASSERT_NEAR(4.0, iter(1.0, 16.0), 0.0000000001);
}

TEST(iter, test2)
{
    ASSERT_NEAR(2.828427, iter(2.0, 8.0), 0.000001);
}


