#include "NANDGate.h"

bool NANDGate::output(bool input1, bool input2) {
    return !(input1 && input2);
}
