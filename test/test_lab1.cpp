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
	ASSERT_NEAR(0.0, calc(0.0), 0.01);
}

TEST(task1, test_for_one)
{
	ASSERT_NEAR(1.0, calc(1.0), 0.00001);
}

TEST(task1, test_for_2)
{
	ASSERT_NEAR(1.41421, calc(2.0), 0.00001);
}

TEST(task1, test1)
{
	ASSERT_NEAR(4.0, average(5.0, 3.0), 0.1);
}

TEST(task1, test2)
{
	ASSERT_NEAR(1.5, average(1.0, 2.0), 0.1);
}

TEST(task1, test3)
{
	ASSERT_TRUE(good(1.0, 1.0));
}

TEST(task1, test4)
{
	ASSERT_FALSE(good(1.0, 0.0));
}

TEST(task1, test5)
{
	ASSERT_NEAR(2.25, improve(4.0, 2.0), 0.01);
}

TEST(task1, test6)
{
	ASSERT_NEAR(5.1, improve(4.0, 2.0), 0.1);
}

TEST(task1, test7)
{
	ASSERT_NEAR(1.41421, iter(3.0, 2.0), 0.00001);
}

TEST(task1, test8)
{
	ASSERT_NEAR(3.162278, iter(3.0, 10.0), 0.000001);
}