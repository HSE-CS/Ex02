#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(5.0, calc(25.0));

}

TEST(task1, test2)
{
    ASSERT_DOUBLE_EQ(6.324555, calc(40.0));

}

TEST(task1, test3)
{
    ASSERT_DOUBLE_EQ(0.0, average(0.0));

}
 Test(task1,test4){
      ASSERT_TRUE(good(1.0,1.0))

}
 Test(task1, test5) {
     ASSERT_FALSE(good(1.0, 1.1))

 }
 Test(task1, test6) {
     ASSERT_DOUBLE_EQ(7.5, average(10.0, 5.0));
 }
