
#include "task1.h"
#include "gtest/gtest.h"


TEST (task1, test1) {
ASSERT_EQ(2.0, average(1.0, 3.0) )
}

TEST (task1, test2) {
ASSERT_EQ(1.485, average(6.47, -3.5) )
}

TEST (task1, test3) {
ASSERT_EQ(0.0, average(-50.0, 50.0 ))
}

TEST (task1, test4) {
ASSERT_EQ(1.414214, calc(2.0) )
}

TEST (task1, test5) {
ASSERT_EQ(1.732050, calc(3.0))
}