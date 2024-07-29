#include "gtest/gtest.h"
#include "ORGate.h"

TEST(ORGateTest, TruthTable) {
    ORGate orGate;

    EXPECT_EQ(orGate.output(0, 0), 0);
    EXPECT_EQ(orGate.output(0, 1), 1);
    EXPECT_EQ(orGate.output(1, 0), 1);
    EXPECT_EQ(orGate.output(1, 1), 1);
}
