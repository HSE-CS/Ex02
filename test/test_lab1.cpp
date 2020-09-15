#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(2,calc(4));

}

TEST(task1, test2)
{
    ASSERT_DOUBLE_EQ(1,calc(1));
	
}

TEST(task1, test3)
{
    ASSERT_DOUBLE_EQ(3,calc(9));
	
}
