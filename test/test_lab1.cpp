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
    ASSERT_NEAR(15.0997, calc(228.0), 0.0001);
}

TEST(task1, testAverage1){
    ASSERT_NEAR(1.5, average(1.0, 2.0), 0.1);
}

TEST(task1, testAverage2){
    ASSERT_NEAR(55.0, average(10.0, 100.0), 0.1);
}

TEST(task1, testGood1){
    ASSERT_EQ(1, good(1.0, 0.999999));
}

TEST(task1, testGood2){
    ASSERT_EQ(0, good(1.0, 12));
}

TEST(task1, testImprove1){
    ASSERT_NEAR(1.5, improve(1.0, 2.0), 0.1);
}

TEST(task1, testImprove2){
    ASSERT_NEAR(51.0, improve(100.0, 200.0), 0.1);
}

TEST(task1, testIter1){
    ASSERT_NEAR(5.0, iter(1.0, 25.0), 0.1);
}

TEST(task1, testIter2){
    ASSERT_NEAR(31.60, iter(1.0, 999), 0.01)
}