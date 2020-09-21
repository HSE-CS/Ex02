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
    ASSERT_DOUBLE_EQ(1.00000000, improve(1.0, 1.0));
}

TEST(task1, test_improve2){
    ASSERT_DOUBLE_EQ(1.50000000, improve(1.0, 2.0));
}

TEST(task1, test_iter1){
    ASSERT_DOUBLE_EQ(1.00000000, iter(1.0, 1.0));
}

TEST(task1, test_iter2){
    ASSERT_DOUBLE_EQ(1.00000000, iter(2.0, 1.0));
}

TEST(task1, test_calc1){
    ASSERT_DOUBLE_EQ(1.00000000, calc(1.0));
}

TEST(task1, test_calc2){
    ASSERT_DOUBLE_EQ(2.00000000, calc(4.0));
}





