#include "task1.h"
#include "gtest/gtest.h"


TEST (task1, test_calc1){
    ASSERT_NEAR (19.078784,calc(364.0),0.000001)
}

TEST (task1, test_calc2){
    ASSERT_NEAR (10,calc(100.0),0.000001)
}

TEST (task1, test_calc3){
    ASSERT_NEAR (29.274562,calc(857.0),0.000001)
}

TEST (task1, test_calc4){
    ASSERT_NEAR (3.464102,calc(12.0),0.000001)
}

TEST (task1, test_calc5){
    ASSERT_NEAR (6.0,calc(36.0),0.000001)
}

TEST (task1, test_average1){
    ASSERT_DOUBLE_EQ (22.5, average(39.75, 5.25))
}

TEST (task1, test_average2){
    ASSERT_DOUBLE_EQ (355.12, average(520.4, 189.84))
}

TEST (task1, test_good1){
    ASSERT_TRUE (good(5.55, 30.8025))
}

TEST (task1, test_good2){
    ASSERT_TRUE (good(23.6, 556.96))
}

TEST (task1, test_good3){
    ASSERT_TRUE (good(85.365, 7287.183225))
}

TEST (task1, test_improve1){
    ASSERT_EQ(12.75,improve(12.5, 162.5))
}