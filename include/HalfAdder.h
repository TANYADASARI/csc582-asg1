#ifndef HALFADDER_H
#define HALFADDER_H

#include "ANDGate.h"
#include "ORGate.h"
#include "NANDGate.h"
#include "NOTGate.h" // Include the NOTGate header

class HalfAdder {
public:
    void add(bool input1, bool input2, bool& sum, bool& carry);
};

#endif // HALFADDER_H
