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
	ASSERT_DOUBLE_EQ(0.0, calc(0.0));
}

TEST(task1, test_one)
{
	ASSERT_DOUBLE_EQ(1.0, calc(1.0));
}

TEST(task1, test3)
{
	ASSERT_DOUBLE_EQ(9.0, calc(81.0));
}
