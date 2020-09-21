#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1) 
{
    assert_float_eq(3.0, avarage(2.0, 4.0));
}
TEST(task1, test2) 
{
    assert_float_eq(1.414214, culc(2.0));
}
TEST(task1, test3) 
{
    assert_float_eq(2.0, culc(4.0));
}
TEST(task1, test4) 
{
    assert_float_eq(2.5, avarage(3.0,2.0));
}
TEST(task1, test5) 
{
    assert_float_eq(4.0, avarage(2.0,6.0));
}
TEST(task1, test6) 
{
    assert_float_eq(8.5, avarage(11.0,6.0));
}
TEST(task1, test7) 
{
    assert_float_eq(3.0, culc(9.0));
}
TEST(task1, test8) 
{
    assert_float_eq(2.236068, culc(5.0));
}
TEST(task1, test9) 
{
    assert_float_eq(4.0, culc(16.0);
}
TEST(task1, test10) 
{
    assert_float_eq(2.828427, culc(8));
}
