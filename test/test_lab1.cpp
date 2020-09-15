#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, test_calc_1) {
    ASSERT_NEAR(2.0, calc(4.0), 0.00000001);
}

TEST(task1, test_calc_2) {
    ASSERT_NEAR(2.82842712, calc(8.0), 0.00000001);
}

// average
// good
// improve
// iter
// calc