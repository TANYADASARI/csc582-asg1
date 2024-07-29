#include "HalfAdder.h"

void HalfAdder::add(bool input1, bool input2, bool& sum, bool& carry) {
    ANDGate andGate;
    ORGate orGate;
    NANDGate nandGate;
    NOTGate notGate; // Ensure NOTGate is declared
    
    bool temp1 = nandGate.output(input1, input2);
    bool temp2 = nandGate.output(input1, temp1);
    bool temp3 = nandGate.output(temp1, input2);
    sum = nandGate.output(temp2, temp3);
    carry = andGate.output(input1, input2);
}
