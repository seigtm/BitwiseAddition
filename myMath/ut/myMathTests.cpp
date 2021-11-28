#include <gtest/gtest.h>

#include <myMath.hpp>

TEST(MyMathTests, Dummy)
{
    EXPECT_TRUE(1);
}

using ::testing::InitGoogleTest;

int main(int argc, char *argv[])
{
    InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
