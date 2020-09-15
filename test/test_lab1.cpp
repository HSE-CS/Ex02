#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test_average1){
    ASSERT_DOUBLE_EQ(1.000000, average(1.0, 1.0));
}

TEST(task1, test_average2){
    ASSERT_DOUBLE_EQ(2.500000, average(3.0, 2.0));
}

TEST(task1, test_good1){
    ASSERT_EQ(1, good(5.0, 25.0));
}

TEST(task1, test_good2){
    ASSERT_EQ(0, good(455.0, 666.0));
}

TEST(task1, test_improve1){
    ASSERT_DOUBLE_EQ(228.231867, improve(455.0, 666.0));
}

TEST(task1, test_improve2){
    ASSERT_DOUBLE_EQ(200.250000, improve(400.0, 200.0));
}

TEST(task1, test_iter1){
    ASSERT_DOUBLE_EQ(14.142136, iter(400.0, 200.0));
}

TEST(task1, test_iter2){
    ASSERT_DOUBLE_EQ(1.414214, iter(14.0, 2.0));
}

TEST(task1, test_calc1){
    ASSERT_DOUBLE_EQ(3.741657, calc(14.0));
}

TEST(task1, test_calc2){
    ASSERT_DOUBLE_EQ(2.449490, calc(6.0));
}





