#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1
) {
ASSERT_NEAR(1,calc(1), 0.0001);
}

TEST(task1, test2
) {
ASSERT_NEAR(6, calc(36), 0.0001);
}

TEST(task1, test3
) {
ASSERT_NEAR(5, calc(25), 0.0001);
}

TEST(task1, test4
){
ASSERT_NEAR(4, calc(16), 0.0001);
}

TEST(task1, test5
){
ASSERT_NEAR(100.0, calc(10000.0), 0.0001);
}

TEST(task1, test6
){
ASSERT_NEAR(0, calc(0), 0.0001);
}

TEST(task1, test7
){
ASSERT_NEAR(3, calc(9), 0.0001);
}

TEST(task1, test8
){
ASSERT_NEAR(2, calc(4), 0.0001);
}

TEST(task1, test9
){
ASSERT_NEAR(8, calc(64), 0.0001);
}

TEST(task1, test10
){
ASSERT_NEAR(9, calc(81), 0.0001);
}