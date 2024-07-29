#include "gtest/gtest.h"
#include "FourBitAdder.h"

TEST(FourBitAdderTest, BasicAddition) {
    FourBitAdder adder;
    bool a[4] = {1, 0, 1, 1}; // 11 in binary
    bool b[4] = {1, 1, 0, 1}; // 13 in binary
    bool sum[4];
    bool carryOut;

    adder.add(a, b, 0, sum, carryOut);

   
    bool expectedSum[4] = {0, 0, 0, 1}; 
    bool expectedCarryOut = 1;

    for (int i = 0; i < 4; ++i) {
        EXPECT_EQ(sum[i], expectedSum[i]);
    }
    EXPECT_EQ(carryOut, expectedCarryOut);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
