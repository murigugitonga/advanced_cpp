#include "memory_mechanics.h"
#include <iostream>

int main(){
    std::cout << "******" << std::endl;
    std::cout << "SANDBOX EXECUTOR" << std::endl;
    std::cout << "******" << std::endl;

    // Execute chronological modules
    MemoryMechanics::runModule();

    std::cout << "=======" << std::endl;
    return 0;
}