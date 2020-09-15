#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test1){
    ASSERT_NEAR(2.0, calc(4.0), 0.000001);
}

TEST(task1, test2){
    ASSERT_NEAR(1.41421356, calc(2.0), 0.00000001);
}

TEST(task1, test3){
    ASSERT_NEAR(2.23606798, calc(5.0), 0.00000001);
}

TEST(task1, test4){
    ASSERT_NEAR(3.16227766, calc(10.0), 0.00000001);
}

TEST(task1, test5){
    ASSERT_NEAR(100.0, calc(10000.0), 0.00000001);
}

TEST(task1, test6){
    ASSERT_NEAR(31.6227766, calc(1000.0), 0.00000001);
}

TEST(task1, test7){
    ASSERT_NEAR(9.94987437, calc(99.0), 0.00000001);
}

TEST(task1, test8){
    ASSERT_NEAR(2.82842712, calc(8.0), 0.00000001);
}

TEST(task1, test9){
    ASSERT_NEAR(8.06225775, calc(65.0), 0.00000001);
}

TEST(task1, test10){
    ASSERT_NEAR(15.09966, calc(228.0), 0.000001);
}