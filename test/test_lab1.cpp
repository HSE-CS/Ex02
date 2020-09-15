#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test_avr_1){
  ASSERT_DOUBLE_EQ(5.0, average(4.0, 6.0));
}

TEST(task1, test_avr_2){
  ASSERT_DOUBLE_EQ(5.5, average(5.0, 6.0));
}

TEST(task1, test_calc_1){
  ASSERT_DOUBLE_EQ(2.449490, calc(6.0));
}


TEST(task1, test_calc_2){
  ASSERT_DOUBLE_EQ(3.162278, calc(10.0));
}

TEST(task1, test_calc_3){
  ASSERT_DOUBLE_EQ(10.0, calc(100.0));
}

TEST(task1, test_calc_4){
  ASSERT_DOUBLE_EQ(3.162278, calc(10.0));
}


TEST(task1, test_calc_5){
  ASSERT_DOUBLE_EQ(2.645751, calc(7.0));
}

TEST(task1, test_calc_6){
  ASSERT_DOUBLE_EQ(88.983144, calc(7918.0));
}

TEST(task1, test_calc_7){
  ASSERT_DOUBLE_EQ(1.732051, calc(3.0));
}

TEST(task1, test_calc_8){
  ASSERT_DOUBLE_EQ(112.933609, calc(12754.0));
}

TEST(task1, test_calc_9){
  ASSERT_DOUBLE_EQ(3.481810, calc(12.123));
}



