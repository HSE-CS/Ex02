#include "task1.h"
#include "gtest/gtest.h"

TEST(task1, _average1)
{
    ASSERT_DOUBL_EQ(77.5, average(100.0, 55.0));

}

TEST(task1, _average2)
{
    ASSERT_DOUBL_EQ(83.5, average(167.0, 0.0));

}

TEST(task1, good1)
{
    ASSERT_EQ(1, good(sqrt(2.0), 2.0));

}
TEST(task1, _good2)
{
    ASSERT_EQ(1, good(sqrt(1000.0), 1000.0));

}
TEST(task1, _improve1)
{
    ASSERT_DOUBL_EQ(28.0, improve(1.0, 55.0));

}
TEST(task1, _improve2)
{
    ASSERT_DOUBL_EQ(16.0, improve(2.0, 60.0));

}
TEST(task1, _iter1)
{
    ASSERT_DOUBL_EQ(5.0, iter(5.0, 25.0));

}
TEST(task1, _iter2)
{
    ASSERT_DOUBL_EQ(7.416198, iter(28.0, 55.0));

}

TEST(task1, _calc1)
{
    ASSERT_DOUBL_EQ(5.0, calc(25.0));

}

TEST(task1, _calc2)
{
    ASSERT_DOUBL_EQ(1.732051, calc(3.0));

}