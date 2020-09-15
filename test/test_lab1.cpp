#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, average1
){
ASSERT_NEAR(69.1919, average(83.838383, 54.545454), 0.0001);
}
TEST(task1, average2
){
ASSERT_NEAR(3.0,average(2.0, 4.0), 0.0001);
}
TEST(task1, good1
){
ASSERT_EQ(1,good(5.5, 30.25));
}
TEST(task1, good2
){
ASSERT_EQ(0,good(342.123, 234.123));
}
TEST(task1, improve1
){
ASSERT_NEAR(5.32475,improve(10.1, 5.55), 0.0001);
}
TEST(task1, improve2
){
ASSERT_NEAR(22.2632,improve(44.404, 5.4321), 0.0001);
}
TEST(task1, iter1
){
ASSERT_NEAR(2.33069,iter(44.404, 5.4321), 0.0001);

}
TEST(task1, iter2
){
ASSERT_NEAR(72.2664,iter(8321.1234, 5222.4321), 0.0001);

}
TEST(task1, calc1
){
ASSERT_NEAR(1.414214,calc(2.0), 0.0001);

}
TEST(task1, calc2
){
ASSERT_NEAR(1.732051,calc(3.0), 0.0001);

}
