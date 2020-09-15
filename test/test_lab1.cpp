#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average)
{
    ASSERT_EQ(5.0, average(10000.0, 2000.0));
}

TEST(task1, test_average1)
{
    ASSERT_EQ(2000.0, average(2000.0, 2000.0));
}

TEST(task1, test_average2)
{
    ASSERT_EQ(10.0, average(13.0, 7.0));
}

TEST(task1, test_good)
{
    ASSERT_FALSE(good(0.001, 0.0001));
}

TEST(task1, test_good1)
{
    ASSERT_TRUE(good(0.000001, 0.00000000000001));
}

TEST(task1, test_good2)
{
    ASSERT_FALSE(good(10.0, 5.0));
}

TEST(task1, test_iter)
{
    ASSERT_EQ(0.0001, iter(0.0001, 0.00000001));
}

TEST(task1, test_calc)
{
    ASSERT_EQ(4, calc(16));
}

TEST(task1, test_calc)
{
    ASSERT_EQ(12, calc(144));
}