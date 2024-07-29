#ifndef FULLADDER_H
#define FULLADDER_H

#include "HalfAdder.h"

class FullAdder {
public:
    void add(bool input1, bool input2, bool carryIn, bool& sum, bool& carryOut);
};

#endif // FULLADDER_H
