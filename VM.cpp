//
// Created by lasse on 21.11.2015.
//

#include <iostream>

#include "VM.h"
#include "Program.h"

VM::VM() {
    defaultInstruction = new Instruction(0x00000000, this);
}

void VM::RegisterFunction(uint32_t bytecode, Instruction *instruction) {
    instructions[bytecode] = instruction;
}




void VM::Run(Program *program) {

    std::cout << std::endl << "Running program" << std::endl << std::endl;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wmissing-noreturn"
    while(program->CanContinue())
    {
        uint32_t byte = program->ReadByte32();

        Instruction *instruction = instructions[byte];

        if (instruction == nullptr)
            instruction = defaultInstruction;

        instruction->Call(program);
    }
#pragma clang diagnostic pop

}
