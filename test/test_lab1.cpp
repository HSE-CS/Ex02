#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(1.732051, calc(3.0));

}

TEST(task1, test2)
{
     ASSERT_EQ(2.236068, calc(5.0));
    
}

TEST(task1, test3)
{
     ASSERT_EQ(2.345208, calc(5.5));
    
}
 
TEST(task1, test4)
 {
     ASSERT_EQ(2.489980, calc(6.2));

 }

 TEST(task1, test5)
 {
      ASSERT_EQ(2.664583, calc(7.1));
     
 }

 TEST(task1, test6)
 {
      ASSERT_EQ(3, calc(9.0));
     
 }
 
TEST(task1, test7)
 {
     ASSERT_EQ(3.316625, calc(11.0));

 }

 TEST(task1, test8)
 {
      ASSERT_EQ(5.567764, calc(31.0));
     
 }

 TEST(task1, test9)
 {
      ASSERT_EQ(10.954451, calc(120.0));
     
 }

 TEST(task1, test10)
 {
      ASSERT_EQ(14.525839, calc(211.0));
     
 }
