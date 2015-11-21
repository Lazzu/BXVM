//
// Created by lasse on 21.11.2015.
//

#include <iostream>

#include "Instruction.h"

Instruction::Instruction(uint32_t bytecode, VM *virtualMachine) {
    vm = virtualMachine;

    if (vm == nullptr)
        return;

    std::cout << "Registered " << bytecode << " with the VM" << std::endl;

    vm->RegisterFunction(bytecode, this);
}

void Instruction::Call(Program *program) {
    std::cout << "Undefined instruction!" << std::endl;
    exit(1);
}
