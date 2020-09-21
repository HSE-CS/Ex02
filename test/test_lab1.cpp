#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_NEAR(2.5,average(2.0, 3.0),0.00000001);

}

TEST(task1, test2)
{
    ASSERT_NEAR(1.71275,average(1.4357, 1.9898),0.00000001);

}

TEST(task1, test3)
{
    ASSERT_NEAR(2.996705,average(0.18514, 5.80827),0.00000001);

}

TEST(task1, test4)
{
     ASSERT_NEAR(true,good(1.414213, 2.0),0.00000001);

}

TEST(task1, test5)
{
     ASSERT_NEAR(true,good(0.5, 0.25),0.00000001);

}

TEST(task1, test6)
{
     ASSERT_NEAR(false,good(1.10906, 1.23),0.00000001);

}

TEST(task1, test7)
{
     ASSERT_NEAR(1.0,improve(1.0, 1.0),0.00000001);

}

TEST(task1, test8)
{
     ASSERT_NEAR(5.50025904,improve(10.8156, 2.0),0.00000001);

}

TEST(task1, test9)
{
     ASSERT_NEAR(0.15,improve(1.3, -1.3),0.00000001);

}

TEST(task1, test10)
{
    ASSERT_NEAR(1.18921,iter(2.0, 1.41421),0.00000001);
}

TEST(task1, test11)
{
    ASSERT_NEAR(1.19025,iter(3.15, 1.4167),0.00000001);
}

TEST(task1, test12)
{
    ASSERT_NEAR(2.27596133535,iter(2.27596133535, 5.18),0.00000001);
}

TEST(task1, test13)
{
    ASSERT_NEAR(1.0,calc(1.0),0.00000001);
}

TEST(task1, test14)
{
    ASSERT_NEAR(1.41421,calc(2.0),0.00000001);
}

TEST(task1, test15)
{
    ASSERT_NEAR(1.79388,calc(3.218),0.00000001);
}


