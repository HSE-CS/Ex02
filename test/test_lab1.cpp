#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_averag_1)
{
ASSERT_NEAR(3,average(2.0,4.0));

}
TEST(task1, test_averag_2)
{
ASSERT_NEAR(3.5,average(2.0,5.0));

}

TEST(task1, test_averag_3)
{
ASSERT_NEAR(1484.05,average(2889.0,79.0909093));

}

//TEST(task1, test_good_1)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_good_2)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_good_3)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_improve_1)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_improve_2)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_improve_2)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_improve_3)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}
//
//TEST(task1, test_calc_5)
//{
//ASSERT_EQ(3,getPrime(2));
//
//}