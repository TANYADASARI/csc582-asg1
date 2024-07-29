#include "gtest/gtest.h"
#include "ANDGate.h"

TEST(ANDGateTest, TruthTable) {
    ANDGate andGate;

    EXPECT_EQ(andGate.output(0, 0), 0);
    EXPECT_EQ(andGate.output(0, 1), 0);
    EXPECT_EQ(andGate.output(1, 0), 0);
    EXPECT_EQ(andGate.output(1, 1), 1);
}
