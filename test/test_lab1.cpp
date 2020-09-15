#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average1)
{
    ASSERT_DOUBLE_EQ(2000.0, average(2000.0, 2000.0));
}

TEST(task1, test_average2)
{
    ASSERT_DOUBLE_EQ(10.0, average(13.0, 7.0));
}

TEST(task1, test_average3)
{
    ASSERT_DOUBLE_EQ(16.5, average(26.0, 7.0));
}

TEST(task1, test_average4)
{
    ASSERT_DOUBLE_EQ(54.0, average(100.0, 8.0));
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
    ASSERT_DOUBLE_EQ(0.0001, iter(0.0001, 0.00000001));
}

TEST(task1, test_calc1)
{
    ASSERT_DOUBLE_EQ(12.0, calc(144.0));
}

TEST(task1, test_calc2)
{
    ASSERT_DOUBLE_EQ(13.0, calc(169.0));
}

