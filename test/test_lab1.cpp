#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(1.73205, calc(3.0), 0.0001);

}

TEST(task1, test2)
{
     ASSERT_NEAR(2.23607, calc(5.0), 0.0001);
    
}

TEST(task1, test3)
{
     ASSERT_NEAR(2.34521, calc(5.5), 0.0001);
    
}
 
TEST(task1, test4)
 {
     ASSERT_NEAR(2.48998, calc(6.2), 0.0001);

 }

 TEST(task1, test5)
 {
      ASSERT_NEAR(2.66458, calc(7.1), 0.0001);
     
 }

 TEST(task1, test6)
 {
      ASSERT_NEAR(3, calc(9.0), 0.0001);
     
 }
 
TEST(task1, test7)
 {
     ASSERT_NEAR(3.31662, calc(11.0), 0.0001);

 }

 TEST(task1, test8)
 {
      ASSERT_NEAR(5.56776, calc(31.0), 0.0001);
     
 }

 TEST(task1, test9)
 {
      ASSERT_NEAR(5.83095, calc(34), 0.0001);
     
 }

 TEST(task1, test10)
 {
      ASSERT_NEAR(14.5258, calc(211.0));
     
 }
