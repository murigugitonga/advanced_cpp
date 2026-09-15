// ** Memory & Perfomance Mechanics **

/**
 * Stack vs Heap
 * Running a function creates a stack frame in a super-fast location called a stack
 * Any variable held in that particular function lives in that stack frame.
 * The stack frame is destroyed once the function completes its run.
 *  //\\
 * Objects that dynamically grow (std::string, std::vector) allocate their actual data
 * in larger slower regions called heaps where a tiny pointer points to that heap location
 * 
 * Pass-by-value vs pass-by-reference
 * pass-by-value: C++ takes the argument passed and makes an identical copy of it into the new function's call stack framework bit by bit
 * pass-by-reference - Adding the ampersand (&), the compiler is directed to pass the memory address of the original variable instead.
 * No data is copied. The function works directly on the original item.
 */

#ifndef MEMORY_MECHANICS_H
#define MEMORY_MECHANICS_H

#include <string>

namespace MemoryMechanics{
    // Pass-by-value: Duplicates data in memory
    void processByValue(std::string data);

    // Pass by const reference: Safe, high performance reference
    void processByConstRef(const std::string &data);

    // Inline function: Replaces function call with
    inline int fastCube(int num){
        return num * num * num;
    }

    // Orchestrator to run this module's tests
    void runModule();
}

#endif