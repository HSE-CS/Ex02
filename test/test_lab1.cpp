#include "task1.h"
#include "gtest/gtest.h"

double eps = 0.00000001;

TEST(task1, test_average_01)
{
	ASSERT_NEAR(average(0.0, 0.0), 0.0, eps);
}

TEST(task1, test_average_02)
{
	ASSERT_NEAR(average(5.022, 1.43), 3.226, eps);
}

TEST(task1, test_average_03)
{
	ASSERT_NEAR(average(-1.453, 1.453), 0.0, eps);
}

TEST(task1, test_good_01)
{
    ASSERT_EQ(good(0.0, 0.0), true);
}

TEST(task1, test_good_02)
{
    ASSERT_EQ(good(3.1, 9.61), true);
}

TEST(task1, test_good_03)
{
    ASSERT_EQ(good(5, 25.0001), false);
}

TEST(task1, test_calc_01)
{
	ASSERT_NEAR(calc(1.0), 1.0, eps);
}

TEST(task1, test_calc_02)
{
	ASSERT_NEAR(calc(64.0), 8.0, eps);
}

TEST(task1, test_calc_03)
{
	ASSERT_NEAR(calc(55.2049), 7.43, eps);
}
