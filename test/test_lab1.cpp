#include "task1.h"
#include "gtest/gtest.h"


TEST(test_for_calc_function, test_for_4)
{
	ASSERT_NEAR(2.0, calc(4.0), 0.00001);
}

TEST(test_for_calc_function, test_for_16)
{
	ASSERT_NEAR(4.0, calc(16.0), 0.00001);
}

TEST(test_for_calc_function, test_zero)
{
	ASSERT_NEAR(0.0, calc(0.0), 0.01);
}

TEST(test_for_calc_function, test_for_one)
{
	ASSERT_NEAR(1.0, calc(1.0), 0.00001);
}

TEST(test_for_calc_function, test_for_2)
{
	ASSERT_NEAR(1.41421, calc(2.0), 0.00001);
}

TEST(test_for_average_function, test1)
{
	ASSER_NEAR(4.0, average(5.0, 3.0), 0.1);
}

TEST(test_for_average_function, test2)
{
	ASSER_NEAR(1.5, average(1.0, 2.0), 0.1);
}

TEST(test_for_good_function, test1)
{
	ASSERT_TRUE(good(1.0, 1.0));
}

TEST(test_for_good_function, test2)
{
	ASSERT_FALSE(good(1.0, 1.0));
}

TEST(test_for_improve_function, test2)
{
	ASSERT_NEAR(2.25, improve(4.0, 2.0), 0.01);
}

TEST(test_for_improve_function, test2)
{
	ASSERT_NEAR(5.1, improve(4.0, 2.0), 0.01);
}

TEST(test_for_iter_function, test2)
{
	ASSERT_NEAR(1.41421, iter(3.0, 2.0), 0.00001);
}

TEST(test_for_iter_function, test2)
{
	ASSERT_NEAR(3.162278, iter(3.0, 10.0), 0.000001);
}