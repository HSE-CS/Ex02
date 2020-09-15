#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
	ASSERT_NEAR(1.73205080, calc(3.0), 0.00000001);

}

TEST(task1, test2)
{
	ASSERT_NEAR(1.41421356, calc(2.0), 0.00000001);

}

TEST(task1, test3)
{
	ASSERT_NEAR(6.73795221, calc(45.4), 0.00000001);

}

TEST(task1, test4)
{
	ASSERT_NEAR(10.0, calc(100.0), 0.00000001);

}

TEST(task1, test5)
{
	ASSERT_NEAR(2.79821371, calc(7.83) , 0.00000001);

}

TEST(task1, test6)
{
	ASSERT_TRUE(good(3.0, 9.0));

}

TEST(task1, test7)
{
	ASSERT_TRUE(good(4.03732584, 16.3));

}

TEST(task1, test8)
{
	ASSERT_TRUE(good(7.0, 49.0));

}

TEST(task1, test9)
{
	ASSERT_DOUBLE_EQ(40.0, calc(1600));

}

TEST(task1, test10)
{
	ASSERT_DOUBLE_EQ(9.0, calc(81));

}

