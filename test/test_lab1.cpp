#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average1)
{
	ASSERT_NEAR(38.130000, average(40.5, 35.76), 0.000001);

}

TEST(task1, test_average2)
{
	ASSERT_NEAR(0.000000, average(0, 0), 0.000001);

}

TEST(task1, test_good1)
{
	ASSERT_DOUBLE_EQ(false, good(8.74, 67.3876));

}

TEST(task1, test_good2)
{
	ASSERT_DOUBLE_EQ(true, good(0.000003, 0));

}

TEST(task1, test_improve1)
{
	ASSERT_NEAR(7.365000, improve(2.0, 25.46), 0.000001);

}

TEST(task1, test_improve2)
{
	ASSERT_NEAR(13.53005, improve(25.0601, 50.1202), 0.000001);

}

TEST(task1, test_iter1)
{
	ASSERT_NEAR(1.000000, iter(10, 1), 0.000001);

}

TEST(task1, test_iter2)
{
	ASSERT_NEAR(0.001227, iter(20.1, 0), 0.000001);

}

TEST(task1, test_calc1)
{
	ASSERT_NEAR(3.016621, calc(9.1), 0.000001);

}

TEST(task1, test_calc2)
{
	ASSERT_NEAR(2.645751, calc(7.0), 0.000001);

}




			
