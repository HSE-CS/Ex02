#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_DOUBLE_EQ(1.73205, calc(3.0));

}

TEST(task1, test2)
{
     ASSERT_DOUBLE_EQ(2.23607, calc(5.0));
    
}

TEST(task1, test3)
{
     ASSERT_DOUBLE_EQ(2.34521, calc(5.5));
    
}
 
TEST(task1, test4)
 {
     ASSERT_DOUBLE_EQ(2.48998, calc(6.2));

 }

 TEST(task1, test5)
 {
      ASSERT_DOUBLE_EQ(2.66458, calc(7.1));
     
 }

 TEST(task1, test6)
 {
      ASSERT_DOUBLE_EQ(3, calc(9.0));
     
 }
 
TEST(task1, test7)
 {
     ASSERT_DOUBLE_EQ(3.31662, calc(11.0));

 }

 TEST(task1, test8)
 {
      ASSERT_DOUBLE_EQ(5.56776, calc(31.0));
     
 }

 TEST(task1, test9)
 {
      ASSERT_DOUBLE_EQ(10.9545, calc(120.0));
     
 }

 TEST(task1, test10)
 {
      ASSERT_DOUBLE_EQ(14.5258, calc(211.0));
     
 }
