//
// Created by lasse on 21.11.2015.
//

#ifndef INTERPRETER_VM_H
#define INTERPRETER_VM_H

class VM;

#include <map>
#include "Instructions/Instruction.h"
#include "Program.h"

class VM {
protected:
    std::map<uint32_t, Instruction *> instructions;



    Instruction *defaultInstruction;
public:
    VM();

    void RegisterFunction(uint32_t bytecode, Instruction *instruction);

    void Run(Program *program);
};


#endif //INTERPRETER_VM_H
