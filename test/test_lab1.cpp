#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_NEAR(38.130000, average(40.5, 35.76), 0.000001);

}

TEST(task1, test_average)
{
	ASSERT_NEAR(0.000000, average(0, 0), 0.000001);

}

TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(false, good(8.74, 67.3876));

}

TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(true, good(0.000003, 0));

}

TEST(task1, test_improve)
{
	ASSERT_NEAR(7.365000, improve(2.0, 25.46), 0.000001);

}

TEST(task1, test_improve)
{
	ASSERT_NEAR(13.53005, improve(25.0601, 50.1202), 0.000001);

}

TEST(task1, test_iter)
{
	ASSERT_NEAR(0.001500, iter(0.003, 0), 0.000001);

}

TEST(task1, test_iter)
{
	ASSERT_NEAR(0.001758, iter(0.09, 0), 0.000001);

}

TEST(task1, test_calc)
{
	ASSERT_NEAR(0.001953, calc(0), 0.000001);

}

TEST(task1, test_calc)
{
	ASSERT_NEAR(0.003023, calc(0.000007), 0.000001);

}




			
