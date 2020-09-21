#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(35.0007,average(20.000743672846, 50.0007564378), 0.0001);

}

TEST(task1, test2)
{
     ASSERT_NEAR(16.01,average(10.01372345236, 22.0127453664), 0.01);
	
}





