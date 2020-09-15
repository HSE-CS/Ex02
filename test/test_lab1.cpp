#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_DOUBLE_EQ(20.0000,average(10.0,30.0);
}

TEST(task1, test2)
{
	ASSERT_DOUBLE_EQ(433.60803,average(859.366,7.85006);
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
	ASSERT_DOUBLE_EQ(0,impove(0,0));
}

TEST(task1, test6)
{
	ASSERT_DOUBLE_EQ(0,improve(0,0));
}

TEST(task1, test7)
{
	ASSERT_DOUBLE_EQ(1.0,iter(1.0,1.0));
}

TEST(task1, test8)
{
	ASSERT_DOUBLE_EQ(0.0,iter(0.0,0.0));
}

TEST(task1, test9)
{
	ASSERT_DOUBLE_EQ(925.724041,calc(856.965));
}

TEST(task1, test10)
{
	ASSERT_DOUBLE_EQ(7.00499822,calc(49.07));
}

