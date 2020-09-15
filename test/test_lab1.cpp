#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, testCalc1)
{
ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, testCalc2)
{
ASSERT_NEAR(4.0, calc(16.0), 0.000001);
}

TEST(task1, testCalc3)
{
ASSERT_NEAR(1.414213562, calc(2.0), 0.000001);
}

TEST(task1, testCalc4)
{
ASSERT_NEAR(0.0, calc(0.0), 0.000001);
}

TEST(task1, testCalc5)
{
ASSERT_DOUBLE_EQ(1.0, calc(1.0));
}

TEST(task1, testGood1)
{
ASSERT_TRUE(good(7.0, 49.0));
}

TEST(task1, testGood2)
{
ASSERT_FALSE(good(5.0, 29.0));
}

TEST(task1, testGood3)
{
ASSERT_TRUE(good(12.0, 144.0));
}

TEST(task1, testAverage1)
{
ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));
}

TEST(task1, testAverage2)
{
ASSERT_NEAR(10.0, average(15.0, 5.0), 0.000001);
}

