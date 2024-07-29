#include "FourBitAdder.h"

void FourBitAdder::add(bool a[4], bool b[4], bool carryIn, bool sum[4], bool& carryOut) {
    FullAdder fullAdder;
    bool carry = carryIn;
    
    for (int i = 0; i < 4; ++i) {
        fullAdder.add(a[i], b[i], carry, sum[i], carry);
    }
    
    carryOut = carry;
}
