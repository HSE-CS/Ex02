#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1_1)
{
    ASSERT_DOUBLE_EQ(5.0,average(4.0,6.0));
}

TEST(task1, test1_2)
{
     ASSERT_DOUBLE_EQ(2.5,average(3.0,2.0));
}

TEST(task1, test2_1)
{
     ASSERT_EQ(true,good(0.0000001,0.000000005));
}

TEST(task1, test2_2)
{
     ASSERT_EQ(false,good(0.1,0.005));
}

TEST(task1, test3_1)
{
     ASSERT_DOUBLE_EQ(2.0,improve(1.0,3.0));
}

TEST(task1, test3_2)
{
     ASSERT_DOUBLE_EQ(1.5,improve(2.0,2.0));
}

//TEST(task1, test4_1)
//{
//     ASSERT_DOUBLE_EQ(0.0000001,iter(0.0000001,0.000000005));
//}

//TEST(task1, test4_2)
//{
//     ASSERT_DOUBLE_EQ(0.0000001,iter(1.0,0.5));
//}