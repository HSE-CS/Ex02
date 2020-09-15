#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(1,calc(1), 0.00001);

}

TEST(task1, test2)
{
    ASSERT_NEAR(2,calc(4), 0.00001);
	
}

TEST(task1, test3)
{
    ASSERT_NEAR(0,calc(0), 0.00001);
	
}

//TEST(task1, test4)
//{
//    ASSERT_NEAR(1.73205, calc(3), 0.0001);
//
//}

TEST(task1, test5)
{
    ASSERT_NEAR(1.41421,calc(2), 0.0001);
	
}

TEST(task1, test6)
{
    ASSERT_NEAR(3,calc(9), 0.0001);
	
}

TEST(task1, test7)
{
    ASSERT_NEAR(10,calc(100), 0.0001);

}

TEST(task1, test8)
{
    ASSERT_NEAR(5, calc(25), 0.0001);
	
}

TEST(task1, test9)
{
    ASSERT_NEAR(5.83095,calc(34), 0.0001);
	
}

TEST(task1, tes10)
{
    ASSERT_NEAR(8.36660,calc(70), 0.0001);
	
}