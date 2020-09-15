#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(22.3607,calc(500));

}

TEST(task1, test2)
{
     ASSERT_EQ(1,calc(1));
	
}

TEST(task1, test3)
{
     ASSERT_EQ(1.41421,calc(2));
	
}

TEST(task1, test4)
{
    ASSERT_EQ(70.7107,calc(5000));

}

TEST(task1, test5)
{
    ASSERT_EQ(31.607,calc(999));

}

TEST(task1, test6)
{
    ASSERT_EQ(300,calc(90000));

}

TEST(task1, test7)
{
    ASSERT_EQ(12,calc(144));

}

TEST(task1, test8)
{
    ASSERT_EQ(19.2094,calc(369));

}

TEST(task1, test9)
{
    ASSERT_EQ(29.7993,calc(888));

}

TEST(task1, test10)
{
    ASSERT_EQ(351.363,calc(123456));

}
