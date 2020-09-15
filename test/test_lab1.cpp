#include "task1.h"

TEST(task1, test_1){
    ASSERT_DOUBLE_EQ(2.0, calc(4.0));
}

TEST(task1, test_2){
    ASSERT_DOUBLE_EQ(16.0, calc(256.0));
}

TEST(task1, test_3){
    ASSERT_DOUBLE_EQ(0, calc(0.0));
}

#include "gtest/gtest.h"