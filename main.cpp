#include <iostream>
#include <fstream>
#include "VM.h"
#include "Instructions/HelloWorldInstruction.h"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        return 0;
    }

    VM *vm = new VM;

    HelloWorldInstruction *hwInstr = new HelloWorldInstruction(0x00000001, vm);

    Program *program = new Program(argv[1]);

    vm->Run(program);

    delete hwInstr;
    delete vm;

    return 0;
}
