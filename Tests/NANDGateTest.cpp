#include "gtest/gtest.h"
#include "NANDGate.h"

TEST(NANDGateTest, TruthTable) {
    NANDGate nandGate;

    EXPECT_EQ(nandGate.output(0, 0), 1);
    EXPECT_EQ(nandGate.output(0, 1), 1);
    EXPECT_EQ(nandGate.output(1, 0), 1);
    EXPECT_EQ(nandGate.output(1, 1), 0);
}
