#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_DOUBLE_EQ(20.0,average(10.0,30.0));
}

TEST(task1, test2)
{
	ASSERT_DOUBLE_EQ(48.403,average(89.0,7.806));
}

TEST(task1, test3)
{
	ASSERT_TRUE(good(5.0,25.000000000001));
}

TEST(task1, test4)
{
	ASSERT_FALSE(good(3.7,13.02347));
}

TEST(task1, test5)
{
	ASSERT_DOUBLE_EQ(15.2575,improve(30.0,15.45));
}

TEST(task1, test6)
{
	ASSERT_DOUBLE_EQ(450.003,improve(900.0,5.1));
}

TEST(task1, test7)
{
	ASSERT_DOUBLE_EQ(3.87298,iter(1.0,15.0));
}

TEST(task1, test8)
{
	ASSERT_DOUBLE_EQ(1.58114,iter(11.0,2.5));
}

TEST(task1, test9)
{
	ASSERT_DOUBLE_EQ(29.274,calc(856.965));
}

TEST(task1, test10)
{
	ASSERT_DOUBLE_EQ(7.005,calc(49.07));
}

