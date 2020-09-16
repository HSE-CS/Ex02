#include "task1.h"
#include "gtest/gtest.h"

// to test average
TEST(task1,check_average) {
    ASSERT_DOUBLE_EQ(0.20000000000000001, average(0.1, 0.3));
}

TEST(task1,check_average_zero) {
    ASSERT_DOUBLE_EQ(0.0, average(0.0, 0.0));
}

TEST(task1, check_average_accuracy) {
    ASSERT_NEAR(0.0, average(0.0,0.0), 0.00001);     //?
}

// to test good
TEST(task1, TestIsFalse){
    ASSERT_FALSE(good(0.0000000000000000001, 0.0000000000000000001));
}

TEST(task1, TestIsTrue){
    ASSERT_TRUE(good(0.00000000000000000001, 0.00000000000000000001));
}

// to test improve
TEST(task1,test_improve1) {
    ASSERT_DOUBLE_EQ(5.5, improve(10.0, 10.0));
}

TEST(task1,test_improve2) {
    ASSERT_DOUBLE_EQ(5.0, improve(10.0, 0.0));
}

TEST(task1,test_improve3) {
    ASSERT_DOUBLE_EQ(2.35, improve(0.2, 0.9));
}

// to test iter
TEST(task1,test_iter1) {
    ASSERT_DOUBLE_EQ(4.0, iter(64.0,16.0));
}

TEST(task1,test_iter_zero) {
    ASSERT_DOUBLE_EQ(0.0, iter(0.0,0.0));
}

TEST(task1, test_iter_accuracy) {
    ASSERT_NEAR(0.0, iter(0.0,0.0), 0.00001);
}

// to test calc
TEST(task1, test_calc) {
    ASSERT_DOUBLE_EQ(0.5, calc(0.25));
}

TEST(task1, test_calc_accuracy) {
    ASSERT_NEAR(0.5, calc(0.25), 0.00001);
}