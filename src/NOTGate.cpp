#include "NOTGate.h"

bool NOTGate::output(bool input) {
    NANDGate nandGate;
    return nandGate.output(input, input);
}
