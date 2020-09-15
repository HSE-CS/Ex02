#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1Average)
{
	ASSERT_NEAR(1.5, average(1.0, 2.0), 0.00001);

}

TEST(task1, test1Good)
{
	ASSERT_EQ(true, good(10, 1));

}

TEST(task1, test2Good)
{
	ASSERT_DOUBLE_EQ(false, good(0.000002, 0.0000000000001));

}
TEST(task1, test1Improve)
{
	ASSERT_NEAR(5.25, improve(10, 5), 0.00001);

}
TEST(task1, test2Improve)
{
	ASSERT_NEAR(3.857143, improve(7, 5), 0.00001);

}
TEST(task1, test1Iter)
{
	ASSERT_DOUBLE_EQ(10, iter(10, 1));

}
TEST(task1, test2Iter)
{
	ASSERT_NEAR(0.000548, iter(0.000001, 0.0000003), 0.00001);

}
TEST(task1, test1Calc)
{
	ASSERT_NEAR(2.645751, calc(7), 0.00001);

}
TEST(task1, test2Calc)
{
	ASSERT_NEAR(0.910055, calc(0.8282), 0.00001);

}
TEST(task1, test3Calc)
{
	ASSERT_NEAR(0.999995, calc(0.99999), 0.00001);

}
