class UVSimulator;  // forward declaration to avoid cyclical declarations

#include "../uvsimulator.h"
#ifndef ADD_H
#define ADD_H


/*
 * class Add
 * A class to handle the add operation in the UVSimulator.
 *
 * This class provides the functionality to add a value from a specific memory location to the accumulator of the UVSimulator.
 */

class Add {
   public:
    Add();
    void execute(UVSimulator& simulator, int operand);
};
#endif  // ADD_H
