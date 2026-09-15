#include "memory_mechanics.h"
#include <iostream>

namespace MemoryMechanics{
    void processByValue(std::string data){
        // Modifying this copy does not affect the original variable
        data = "Modified inside function";
        std::cout << "[Inside pass-by-value]";
    }

    void processByConstRef(const std::string &data){
        // Try uncommenting the below line
        //data = "Try to change me [heads up, it's gonna raise an error]";

        std::cout << "[inside pass-by-const-ref] original string";
    }

    void runModule(){
        std::cout << "\n >>> [Module 1: Memory management and performance mechananics] <<<" << std::endl;
        std:: string originalData = "Important Algorithm Dataset Block";
        std::cout << "[Main Scope] Original string memory address: " << &originalData;

        // 1. Test Pass-By-Value
        std::cout << "\n Executing Pass-by-Value..." <<std::endl;
        processByValue(originalData);
        std::cout << "Value in Main after call: " << originalData << "'(Unchanged)" <<std::endl;
        
        //2. Test Pass-By-Const-Reference
        std::cout << "\n Executing Pass-by-Const-Reference..." << std::endl;
        int value = 4;
        // The compiler replaces the libe below int result = 4 * 4 * 4;
        int result = fastCube(value);
        std::cout << " Cube of " << value << "is: " <<result << std::endl;
    }
}