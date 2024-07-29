#include "gtest/gtest.h"
#include "FullAdder.h"

TEST(FullAdderTest, TruthTable) {
    FullAdder fullAdder;
    bool sum, carryOut;

    fullAdder.add(0, 0, 0, sum, carryOut);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carryOut, 0);

    fullAdder.add(0, 0, 1, sum, carryOut);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carryOut, 0);

    fullAdder.add(0, 1, 0, sum, carryOut);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carryOut, 0);

    fullAdder.add(0, 1, 1, sum, carryOut);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carryOut, 1);

    fullAdder.add(1, 0, 0, sum, carryOut);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carryOut, 0);

    fullAdder.add(1, 0, 1, sum, carryOut);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carryOut, 1);

    fullAdder.add(1, 1, 0, sum, carryOut);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carryOut, 1);

    fullAdder.add(1, 1, 1, sum, carryOut);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carryOut, 1);
}
