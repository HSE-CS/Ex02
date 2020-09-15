#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(1.732051,getPrime(3.0));

}

TEST(task1, test2)
{
     ASSERT_EQ(2.236068,getPrime(5.0));
    
}

TEST(task1, test3)
{
     ASSERT_EQ(2.345208,getPrime(5.5));
    
}
 
TEST(task1, test4)
 {
     ASSERT_EQ(2.489980,getPrime(6.2));

 }

 TEST(task1, test5)
 {
      ASSERT_EQ(2.664583,getPrime(7.1));
     
 }

 TEST(task1, test6)
 {
      ASSERT_EQ(3,getPrime(9.0));
     
 }
 
TEST(task1, test7)
 {
     ASSERT_EQ(3.316625,getPrime(11.0));

 }

 TEST(task1, test8)
 {
      ASSERT_EQ(5.567764,getPrime(31.0));
     
 }

 TEST(task1, test9)
 {
      ASSERT_EQ(10.954451,getPrime(120.0));
     
 }

 TEST(task1, test10)
 {
      ASSERT_EQ(14.525839,getPrime(211.0));
     
 }
