#include "task1.h"

#include "gtest/gtest.h"

TEST(ex02, test1)
{
    double result = average(1.0, 2.0);
    EXPECT_EQ(1.5, result);
}
TEST(ex02, test2)
{
    double result = average(0.12345678, 8.7654321);
    EXPECT_EQ(4.44444444, result);
}
TEST(ex02, test3)
{
    bool result = good(2.0000000000000022, 4);
    EXPECT_EQ(true, result);
}
TEST(ex02, test4)
{
    double result = improve(114.0, 8.0);
    EXPECT_EQ(57.0351, result);
}
TEST(ex02, test5)
{
    double result = improve(14.0, 12.0);
    EXPECT_EQ(7.42857, result);
}
TEST(ex02, test6)
{
    double result = iter(1.0, 4.0);
    EXPECT_EQ(2, result);
}
TEST(ex02, test7)
{
    double result = calc(9.0);
    EXPECT_EQ(3, result);
}
TEST(ex02, test8)
{
    double result = calc(2.0);
    EXPECT_EQ(1.41421, result);
}
TEST(ex02, test9)
{
    double result = average(2.0, 4.0);
    EXPECT_EQ(3.0, result);
}
TEST(ex02, test10)
{
    bool result = good(1, 2);
    EXPECT_EQ(false, result);
}