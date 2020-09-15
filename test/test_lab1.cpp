#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_NEAR(58.38, average(40.5, 35.76));

}

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(0, average(0, 0));

}

TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(false, good(8.74, 67.3876));

}

TEST(task1, test_good)
{
	ASSERT_NEAR(true, good(0.000000003, 0));

}

TEST(task1, test_improve)
{
	ASSERT_NEAR(7.365, improve(2.0, 25.46));

}

TEST(task1, test_improve)
{
	ASSERT_NEAR(13.53005, improve(25.0601, 50.1202));

}

TEST(task1, test_iter)
{
	ASSERT_NEAR(0.000000003, iter(0.000000003, 0));

}

TEST(task1, test_iter)
{
	ASSERT_DOUBLE_EQ(0.0000000000000045, iter(0.000000000000009,0));

}

TEST(task1, test_calc)
{
	ASSERT_DOUBLE_EQ(3, calc(2));

}




			
