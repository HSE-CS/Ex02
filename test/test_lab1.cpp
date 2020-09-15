#include "task1.h"
#include "gtest/gtest.h"


TEST(task1, test_for_4)
{
	ASSERT_NEAR(2.0, calc(4.0), 0.00001);
}

TEST(task1, test_for_16)
{
	ASSERT_NEAR(4.0, calc(16.0), 0.00001);
}

TEST(task1, test_zero)
{
	ASSERT_NEAR(0.0, calc(0.0), 0.00001);
}

TEST(task1, test_for_one)
{
	ASSERT_NEAR(1.0, calc(1.0), 0.00001);
}

TEST(task1, test_for_2)
{
	ASSERT_NEAR(1.41421, calc(2.0), 0.00001);
}