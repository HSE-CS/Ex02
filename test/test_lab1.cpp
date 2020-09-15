#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{
	ASSERT_DOUBLE_EQ(1.5, average(1.0, 2.0));

}

TEST(task1, test_good_1)
{
	ASSERT_DOUBLE_EQ(false, good(1.5, 1));

}

TEST(task1, test_good_2)
{
	ASSERT_BOOL_EQ(true, good(0.00008, 0.00000000000001));

}

TEST(task1, test_improve)
{
	ASSERT_DOUBLE_EQ(2.25, improve(4.0, 2.0));

}
TEST(task1, test_iter_1)
{
	ASSERT_NEAR(0.000000000000409599987, iter(0.0008, 0.00000000000001), 0.00001);

}

TEST(task1, test_iter_2)
{
	ASSERT_NEAR(0.0003, iter(0.00003, 0.0000000001), 0.00001);

}


TEST(task1, test_calc_1)
{
	ASSERT_NEAR(2.0, calc(4.0), 0.00001);

}

TEST(task1, test_calc_3)
{
	ASSERT_NEAR(4.0, calc(16.0), 0.00001);

}

TEST(task1, test_calc_4)
{
	ASSERT_NEAR(5.0, calc(25.0), 0.00001);

}

TEST(task1, test_calc_2)
{
	ASSERT_NEAR(1.414214, calc(9.0), 0.00001);

}

