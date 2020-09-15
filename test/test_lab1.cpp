#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(2.5, average(3.0, 2.0));
}
TEST(task1, test_average2)
{
	ASSERT_DOUBLE_EQ(3.5, average(2.0, 5.0));
}
TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(true, good(0.000002, 0.0000000000003));
}
TEST(task1, test_good1)
{
	ASSERT_DOUBLE_EQ(false, good(3, 1));
}

TEST(task1, test_improve)
{
	ASSERT_DOUBLE_EQ(3.0, improve(5.0, 5.0));
}

TEST(task1, test_iter)
{
	ASSERT_DOUBLE_EQ(0.00002, iter(0.00002, 0.000000004));
}
TEST(task1, test_iter2)
{
	ASSERT_NEAR(2.449490, iter(9, 6), 0.000001);
}

TEST(task1, test_calc1)
{
	ASSERT_NEAR(3.0, calc(9.0), 0.000001);
}
TEST(task1, test_calc2)
{
	ASSERT_NEAR(4.0, calc(16.0), 0.0000001);
}
TEST(task1, test_calc3)
{
	ASSERT_NEAR(5.0, calc(25.0), 0.000001);
}