#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(1.5, average(1.0, 2.0));

}
TEST(task1, test_average2)
{
	ASSERT_DOUBLE_EQ(3.0, average(1.0, 5.0));

}
TEST(task1, test_good)
{
	ASSERT_DOUBLE_EQ(false, good(10,1));

}
TEST(task1, test_good1)
{
	ASSERT_DOUBLE_EQ(true, good(0.000003, 0.00000000000005));

}

TEST(task1, test_improve)
{
	ASSERT_DOUBLE_EQ(2.0, improve(3.0,3.0));

}

TEST(task1, test_iter)
{
	ASSERT_DOUBLE_EQ(0.00003, iter(0.00003, 0.000000005));

}
TEST(task1, test_iter2)
{
	ASSERT_DOUBLE_EQ(2.236068, iter(10, 5));

}
TEST(task1, test_calc)
{
	ASSERT_DOUBLE_EQ(2.0, calc(4.0));

}
TEST(task1, test_calc)
{
	ASSERT_DOUBLE_EQ(2.0, calc(4.0));

}
TEST(task1, test_calc2)
{
	ASSERT_DOUBLE_EQ(2.828427, calc(8.0));

}
TEST(task1, test_calc3)
{
	ASSERT_DOUBLE_EQ(3.0, calc(9.0));

}