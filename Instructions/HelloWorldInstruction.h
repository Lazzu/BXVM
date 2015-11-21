//
// Created by lasse on 21.11.2015.
//

#ifndef INTERPRETER_HELLOWORLDINSTRUCTION_H
#define INTERPRETER_HELLOWORLDINSTRUCTION_H


#include "Instruction.h"

class HelloWorldInstruction : public Instruction {
public:
    HelloWorldInstruction(uint32_t bytecode, VM *virtualMachine) : Instruction(bytecode, virtualMachine) { }

    void Call(Program *program);
};


#endif //INTERPRETER_HELLOWORLDINSTRUCTION_H
