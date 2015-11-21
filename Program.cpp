//
// Created by lasse on 21.11.2015.
//

#include <fstream>
#include "Program.h"

using namespace std;

uint8_t Program::ReadByte() {
    uint8_t byte = bytecode[position++];
    return byte;
}

uint16_t Program::ReadByte16() {
    uint16_t byte = bytecode[position++];
    uint16_t byte1 = bytecode[position++];
    return (byte << 8) | byte1;
}

uint32_t Program::ReadByte32() {
    uint32_t byte = bytecode[position++];
    uint32_t byte1 = bytecode[position++];
    uint32_t byte2 = bytecode[position++];
    uint32_t byte3 = bytecode[position++];
    return (byte << 24) | (byte1 << 16) | (byte2 << 8) | byte3;
}

bool Program::CanContinue() {
    return position < programSize;
}

Program::Program(std::string fileName) {
    ifstream file(fileName, ios::binary);

    file.seekg (0, ios::end);
    programSize = (unsigned long) file.tellg();
    file.seekg (0, ios::beg);

    bytecode = new uint8_t [programSize];

    // read data as a block:
    file.read ((char *)bytecode,programSize);
    file.close();
}
