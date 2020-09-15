#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, test2)
{
	ASSERT_DOUBLE_EQ(4.0, calc(16.0));
}

TEST(task1, test_zero)
{
	ASSERT_NEAR(0.0, calc(0.0), 0.00001);
}

TEST(task1, test_one)
{
	ASSERT_DOUBLE_EQ(1.0, calc(1.0));
}

TEST(task1, test3)
{
	ASSERT_DOUBLE_EQ(9.0, calc(81.0));
}

TEST(task1, test_4)
{
	ASSERT_NEAR(2.0, calc(4.0), 0.00001);
}

TEST(task1, test_5)
{
	ASSERT_NEAR(8.0, calc(64.0), 0.00001);
}

TEST(task1, test_6)
{
	ASSERT_NEAR(5.0, calc(25.0), 0.00001);
}

TEST(task1, test7)
{
	ASSERT_NEAR(10.0, calc(100.0), 0.00001);
}

TEST(task1, test8)
{
	ASSERT_NEAR(7.0, calc(49.0), 0.00001);
}