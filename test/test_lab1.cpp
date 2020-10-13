#include "task1.h"
#include "gtest/gtest.h"


TEST (task1, test_calc1){
    ASSERT_NEAR (10.078784,calc(100.0),0.000001);
}

TEST (task1, test_calc2){
    ASSERT_NEAR (31.6228,calc(1000.0),0.000001);
}

TEST (task1, test_calc3){
    ASSERT_NEAR (44.7214,calc(2000.0),0.000001);
}

TEST (task1, test_calc4){
    ASSERT_NEAR (50,calc(2500.0),0.000001);
}

TEST (task1, test_average1){
    ASSERT_DOUBLE_EQ (95.0, average(90.0, 100.0));
}

TEST (task1, test_average2){
    ASSERT_DOUBLE_EQ (19.675, average(27.45, 11.90));
}

TEST (task1, test_good1){
    ASSERT_TRUE (good(21.90, 123.9));
}

TEST (task1, test_good2){
    ASSERT_TRUE (good(23.6543, 89.3882));
}

TEST (task1, test_good3){
    ASSERT_TRUE (good(232.9090, 76.987));
}

TEST (task1, test_improve1){
    ASSERT_EQ(64.8113,improve(122.33, 892.099));
}
