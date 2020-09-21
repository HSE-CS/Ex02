#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(2.5,average(2.0, 3.0));

}

TEST(task1, test2)
{
     ASSERT_DOUBLE_EQ(true,good(1.0, 1.0));

}

TEST(task1, test3)
{
     ASSERT_DOUBLE_EQ(1.0,improve(1.0, 1.0));

}

TEST (task1, test4)
{
    ASSERT_DOUBLE_EQ(1.41421,calc(2.0));
}
