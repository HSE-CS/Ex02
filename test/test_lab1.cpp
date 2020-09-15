#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, testCalc)
{
	ASSERT_DOUBLE_EQ(2.0, calc(4.0));
	ASSERT_DOUBLE_EQ(3.0, calc(9.0));
}
TEST(task1, testAverage)
{
	ASSERT_DOUBLE_EQ(3.5, average(1.0, 6.0));
	ASSERT_DOUBLE_EQ(8.25, average(1.0, 15.5));
}
TEST(task1, testGood)
{
	ASSERT_TRUE(good(0.25, 0.62499999));
	ASSERT_FALSE(good(100.0, 1.0));
}
TEST(task1, testImprove)
{
	ASSERT_DOUBLE_EQ(8.5, improve(1.0, 16.0));
	ASSERT_DOUBLE_EQ(11.0, improve(1.0, 21.0));
}
TEST(task1, testIter) {
	ASSERT_DOUBLE_EQ(5.0, iter(5.0, 25.0));
	ASSERT_DOUBLE_EQ(5.1961524227066320, iter(6.0, 27.0));
}