#include "FullAdder.h"

void FullAdder::add(bool input1, bool input2, bool carryIn, bool& sum, bool& carryOut) {
    HalfAdder halfAdder1, halfAdder2;
    bool sum1, carry1, carry2;
    
    halfAdder1.add(input1, input2, sum1, carry1);
    halfAdder2.add(sum1, carryIn, sum, carry2);
    carryOut = carry1 || carry2;
}
