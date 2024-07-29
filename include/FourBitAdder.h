#ifndef FOURBITADDER_H
#define FOURBITADDER_H

#include "FullAdder.h"

class FourBitAdder {
public:
    void add(bool a[4], bool b[4], bool carryIn, bool sum[4], bool& carryOut);
};

#endif // FOURBITADDER_H
