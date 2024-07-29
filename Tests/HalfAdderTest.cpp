#include "gtest/gtest.h"
#include "HalfAdder.h"

TEST(HalfAdderTest, TruthTable) {
    HalfAdder halfAdder;
    bool sum, carry;

    halfAdder.add(0, 0, sum, carry);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carry, 0);

    halfAdder.add(0, 1, sum, carry);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carry, 0);

    halfAdder.add(1, 0, sum, carry);
    EXPECT_EQ(sum, 1);
    EXPECT_EQ(carry, 0);

    halfAdder.add(1, 1, sum, carry);
    EXPECT_EQ(sum, 0);
    EXPECT_EQ(carry, 1);
}
