#include "task1.h"

#include "gtest/gtest.h"


TEST(task1, test_average1) {
    ASSERT_DOUBLE_EQ(10.0, average(5.0, 15.0));
}

TEST(task1, test_average2) {
    ASSERT_DOUBLE_EQ(1.0, average(0.75, 1.25));
}

TEST(task1, test_average3) {
    ASSERT_DOUBLE_EQ(1.25, average(2.49, 0.01));
}

TEST(task1, test_good1) {
    ASSERT_EQ(1, good(5.0, 24.9999999999));
}

TEST(task1, test_good2) {
    ASSERT_EQ(0, good(12, 143.9999888));
}

