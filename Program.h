//
// Created by lasse on 21.11.2015.
//

#ifndef BXVM_PROGRAM_H
#define BXVM_PROGRAM_H

#include <string>
#include <stdint.h>

class Program {
protected:
    uint8_t *bytecode;

    unsigned long position = 0;
    unsigned long programSize = 0;

public:
    Program(std::string file);

    uint8_t ReadByte();
    uint16_t ReadByte16();
    uint32_t ReadByte32();

    bool CanContinue();
};


#endif //BXVM_PROGRAM_H
