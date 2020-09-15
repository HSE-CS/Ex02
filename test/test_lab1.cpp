//
// Created by nikita on 15.09.2020.
//

#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test7) {
    ASSERT_NEAR(57.035088, improve(114.0, 8.0), 0.00001);
}
TEST(task1, test1) {
    ASSERT_NEAR(2.449490, calc(6.0), 0.00001);
}
TEST(task1, test8) {
    ASSERT_NEAR(7.428571, improve(14.0, 12.0), 0.00001);
}
TEST(task1, test9) {
    ASSERT_NEAR(6.538462, improve(13.0, 1.0), 0.00001);
}
TEST(task1, test10) {
    ASSERT_NEAR(1.000000, improve(1.0, 1.0), 0.00001);
}
TEST(task1, test5) {
    ASSERT_NEAR(20.500000, average(26.0, 15.0), 0.00001);
}
TEST(task1, test6) {
    ASSERT_NEAR(45.500000, average(45.0, 46.0), 0.00001);
}
TEST(task1, test2) {
    ASSERT_NEAR(1.414214, calc(2.0), 0.00001);
}
TEST(task1, test3) {
    ASSERT_NEAR(7.000000, calc(49.0), 0.00001);
}
TEST(task1, test4) {
    ASSERT_NEAR(14.000000, average(16.0, 12.0), 0.00001);
}


