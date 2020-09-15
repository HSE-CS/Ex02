#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(2.00,calc(4));

}

TEST(task1, test2)
{
    ASSERT_EQ(1.00,calc(1));
	
}

TEST(task1, test3)
{
    ASSERT_EQ(3.00,calc(9));
	
}
