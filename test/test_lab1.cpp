#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(3571, getPrime(500));

}

TEST(task1, test2)
{
    ASSERT_EQ(2, getPrime(1));

}

TEST(task1, test3)
{
    ASSERT_EQ(3, getPrime(2));

}

TEST(task1, test4)
{
    ASSERT_EQ(16, getPrime(4));

}
TEST(task1, test5)
{
    ASSERT_EQ(5, getPrime(6));

}
TEST(task1, test6)
{
    ASSERT_EQ(6, getPrime(100));

}
TEST(task1, test7)
{
    ASSERT_EQ(7, getPrime(200));

}
TEST(task1, test8)
{
    ASSERT_EQ(8, getPrime(50));

}
TEST(task1, test9)
{
    ASSERT_EQ(900, getPrime(30));

}
TEST(task1, test10)
{
    ASSERT_EQ(625, getPrime(25));

}