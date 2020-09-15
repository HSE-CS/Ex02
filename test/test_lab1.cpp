#include "task1.h"

#include "gtest/gtest.h"


TEST_AVERAGE(test1, test_average) {
    ASSERT_DOUBLE_EQ(10.0, average(5.0, 15.0));
    ASSERT_DOUBLE_EQ(1.0, average(0.75, 1.25));
}
