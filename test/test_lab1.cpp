#include "gtest/gtest.h"
#include "task1.h"

TEST(task1, test_for_4){
    ASSERT_NEAR(2.0, calc(4.0), 0.00001);
}

TEST(task1, test_for_81){
    ASSERT_NEAR(9.0, calc(81.0), 0.00001);
}

TEST(task1, test_for_1){
    ASSERT_NEAR(1.0, calc(1.0), 0.00001);
}

TEST(task1, good_compare1){
    ASSERT_FALSE(good(2.0, 5.0));
}

TEST(task1, good_compare2){
    ASSERT_TRUE(good(1.0, 1.0));
}

TEST(task1, test_average1){
    ASSERT_NEAR(11.0, average(12.0, 10.0), 0.00001);
}

TEST(task1, test_average2){
    ASSERT_NEAR(-5.0, average(0.0, -10.0), 0.00001);
}

TEST(task1, test_improve){
    ASSERT_NEAR(1.5, improve(1.0, 2.0), 0.00001);
}

TEST(task1, modulo1){
    ASSERT_EQ(1.0, abs(-1.0));
}

TEST(task1, modulo2){
    ASSERT_EQ(1.0, abs(1.0));
}

TEST(task1, iter_test){
    ASSERT_NEAR(3.0, iter(1.0, 9.0), 0.00001);
}
