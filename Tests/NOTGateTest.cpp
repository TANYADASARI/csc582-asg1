#include "gtest/gtest.h"
#include "NOTGate.h"

TEST(NOTGateTest, TruthTable) {
    NOTGate notGate;

    EXPECT_EQ(notGate.output(0), 1);
    EXPECT_EQ(notGate.output(1), 0);
}
