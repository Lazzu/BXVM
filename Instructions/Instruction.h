//
// Created by lasse on 21.11.2015.
//

#ifndef INTERPRETER_INSTRUCTION_H
#define INTERPRETER_INSTRUCTION_H

class Instruction;

#include "../VM.h"
#include "../Program.h"

class Instruction {
protected:
    VM *vm;
public:
    Instruction(uint32_t bytecode, VM *virtualMachine);

    virtual void Call(Program *program);
};


#endif //INTERPRETER_INSTRUCTION_H
