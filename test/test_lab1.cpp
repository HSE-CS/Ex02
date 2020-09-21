#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(3571,average(20.0, 50.0), 5);

}

TEST(task1, test2)
{
     ASSERT_NEAR(2,good(30.0, 15.0), 5);
	
}

TEST(task1, test3)
{
     ASSERT_NEAR(3,improve(25.0, 13.0), 5);
	
}

TEST(task1, test3)
{
     ASSERT_NEAR(5,iter(10.0, 13.0), 5);
	
}

TEST(task1, test3)
{
     ASSERT_NEAR(10,calc(40.0, 53.0), 5);
	
}





