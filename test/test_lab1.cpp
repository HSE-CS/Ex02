#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_calc_1)
{
    ASSERT_NEAR(2.0, calc(4.0), 0.00000001);
}

TEST(task1, test_calc_2)
{
    ASSERT_NEAR(2.82842712, calc(8.0), 0.00000001);
}

TEST(task1, test_average_1)
{
    ASSERT_NEAR(1.5, average(1, 2), 0.00000001);
}

TEST(task1, test_average_2)
{
    ASSERT_NEAR(3, average(1, 5), 0.00000001);
}

TEST(task1, test_good_1)
{
	ASSERT_TRUE(good(0.000003, 0.00000000000005));
}

TEST(task1, test_good_2)
{
	ASSERT_FALSE(good(10, 1));
}

TEST(task1, test_improve_1)
{
	ASSERT_DOUBLE_EQ(2.0, improve(3.0, 3.0));
}

TEST(task1, test_improve_2)
{
	ASSERT_DOUBLE_EQ(2.5, improve(4.0, 4.0));
}

TEST(task1, test_iter_1)
{
	ASSERT_DOUBLE_EQ(0.00003, iter(0.00003, 0.000000005));

}

TEST(task1, test_iter_2)
{
	ASSERT_NEAR(2.236068, iter(10, 5), 0.000001);

}