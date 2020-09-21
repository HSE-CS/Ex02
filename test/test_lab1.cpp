#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test1)
{
    ASSERT_NEAR(1.414214, calc(2.0), 0.000001);
}

TEST(task1, test2)
{
    ASSERT_FLOAT_EQ(8.602325, iter(84.0, 74.0));
}

TEST(task1, test3)
{
    ASSERT_EQ(0.000000, good(0.5, 0.2));
}

TEST(task1, test4)
{
    ASSERT_NEAR(12.062500, improve(24.0, 3.0), 0.000001);
}

TEST(task1, test5)
{
    ASSERT_EQ(0.000000, good(7.0, 2.0));
}

TEST(task1, test6)
{
    ASSERT_NEAR(1.5, average(0.0, 3.0), 0.000001);
}

TEST(task1, test7)
{
    ASSERT_NEAR(1.8333333, improve(3.0, 2.0), 0.000001);
}

TEST(task1, test8)
{
    ASSERT_NEAR(4.0, calc(16.0), 0.000001);

}
TEST(task1, test9)
{
    ASSERT_NEAR(10.0, average(5.0, 15.0), 0.000001);
}

TEST(task1, test10)
{
    ASSERT_NEAR(2.236068, iter(1.0, 5.0), 0.000001);
}

