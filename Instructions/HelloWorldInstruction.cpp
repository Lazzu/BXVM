//
// Created by lasse on 21.11.2015.
//

#include <iostream>

#include "HelloWorldInstruction.h"

void HelloWorldInstruction::Call(Program *program)
{
    std::cout << "Hello World!" << std::endl;
}
