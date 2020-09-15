#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_DOUBLE_EQ(1.4142135, calc(2.0));
}

TEST(task1, test2)
{
	ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, test3)
{
	ASSERT_DOUBLE_EQ(4.58257569, calc(21.0));
}

TEST(task1, test4)
{
	ASSERT_DOUBLE_EQ(20.0, calc(400));
}

TEST(task1, test5)
{
	ASSERT_DOUBLE_EQ(7.5, average(10.0, 5.0));
}

TEST(task1, test6)
{
	ASSERT_GT(4, calc(15.0));
}

TEST(task1, test7)
{
	ASSERT_TRUE(good(5.0, 25.0));
}

TEST(task1, test8)
{
	ASSERT_TRUE(good(10.0, 100.0));
}

TEST(task1, test9)
{
	ASSERT_TRUE(good(23.0, 529.0));
}

TEST(task1, test10)
{
	ASSERT_TRUE(good(21.5, 462.25));
}
