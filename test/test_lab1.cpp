#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_calc1)
{
	ASSERT_NEAR(1.0, calc(1.0), 0.000001);
}

TEST(task1, test_calc2)
{
	ASSERT_NEAR(6.082763, calc(37.0), 0.000001);
}

TEST(task1, test_calc3)
{
	ASSERT_NEAR(9.0, calc(81.0), 0.000001);
}

TEST(task1, test_average1)
{
	ASSERT_NEAR(11.0, average(3, 19), 0.000001);
}

TEST(task1, test_average2)
{
	ASSERT_NEAR(5.5, average(5.25, 5.75), 0.000001);
}

TEST(task1, test_good1)
{
	ASSERT_FALSE(good(2, 1));
}

TEST(task1, test_good2)
{
	ASSERT_TRUE(good(0.5, 0.25));
}

TEST(task1, test_improve1)
{
	ASSERT_NEAR(2.7, improve(5.0, 2.0), 0.000001);
}

TEST(task1, test_improve2)
{
	ASSERT_NEAR(5.5, improve(10.0, 10.0), 0.000001);
}

TEST(task1, test_iter1)
{
	ASSERT_NEAR(7.0, iter(7.0, 49.0), 0.000001);
}

TEST(task1, test_iter2)
{
	ASSERT_NEAR(3.24037, iter(5.0, 10.5), 0.000001);
}


