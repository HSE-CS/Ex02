#include "task1.h"
//#include "gtest/gtest.h"

TEST(task1, test_calc_1)
{
    ASSERT_NEAR(4.0, calc(16.0), 0.00000001);
}

TEST(task1, test_calc_2) 
{
    ASSERT_NEAR(2.23606798, calc(5.0), 0.00000001);
}

TEST(task1, test_average_1)
{
    ASSERT_NEAR(2.0, average(1, 3), 0.00000001);
}

TEST(task1, test_average_2)
{
    ASSERT_NEAR(2.5, average(2, 3), 0.00000001);
}

TEST(task1, test_good_1)
{
	  ASSERT_TRUE(good(0.000005, 0.00000000000005));
}

TEST(task1, test_good_2)
{
	  ASSERT_FALSE(good(5, 2));
}

TEST(task1, test_iter_1)
{
    ASSERT_DOUBLE_EQ(0.00002, iter(0.00002, 0.000000007));
}

TEST(task1, test_iter_2)
{
    ASSERT_NEAR(2.236068, iter(10, 1), 0.00000001);
}

	
