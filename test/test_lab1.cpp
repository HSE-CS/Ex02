#include "gtest/gtest.h"

TEST(task1, TestZero){
    ASSERT_DOUBLE_EQ(calc(0.0), 0.0);
}

TEST(task1, TestTwo){
    ASSERT_DOUBLE_EQ(calc(2.0), 1.4142135623746898698);
}

TEST(task1, TestBig){
    ASSERT_DOUBLE_EQ(calc(7777777.0), 2788.8666156702438456705);
}

TEST(task1, TestSquare){
    ASSERT_DOUBLE_EQ(calc(10000.0), 100.0);
}

TEST(task1, TestSmall){
    ASSERT_DOUBLE_EQ(calc(0.1), 0.3162277665175674546);

}
TEST(task1, TestAverage){
    ASSERT_DOUBLE_EQ(average(1.0, 2.0), 1.5);
}

TEST(task1, TestAverageZero){
    ASSERT_DOUBLE_EQ(average(0.0, 0.0), 0.0);
}

TEST(task1, TestAverageBig){
    ASSERT_DOUBLE_EQ(average(10000000.0, 20.0), 5000010.0);
}

TEST(task1, TestGoodTrue){
    ASSERT_EQ(good(3.0, 9.0), true);
}

TEST(task1, TestGoodTFalse){
    ASSERT_EQ(good(3.000001, 9.0), false);
}

TEST(task1, TestImprove){
    ASSERT_DOUBLE_EQ(improve(1.0, 2.0), 1.5);
}