#include "task1.h"
#include "gtest/gtest.h"

TEST(task1,test1) {
    ASSERT_DOUBLE_EQ(2.0, average(0.1, 0.3));
}

TEST(task1, test_zero) {
    ASSERT_NEAR(0.0, calc(0.0), 0.00001);
}

TEST(task1, TestIsTrue){
    EXPECT_TRUE(good(0.0000000000000000001, 0.0000000000000000001));

}

TEST(task1,test4) {
    ASSERT_DOUBLE_EQ(0.316667, improve(0.3, 0.1));
}