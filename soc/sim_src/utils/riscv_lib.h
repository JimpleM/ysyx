
#include "common.h"

#include "difftest.h"
#include "init.h"

using namespace std;
struct OpcodeInfo{
    int opcode;
    char name[10];
};
const OpcodeInfo opcodeArray[] = {
    {0b011011,"LUI   "},
    {0b001011,"AUIPC "},
    {0b110111,"JAL   "},
    {0b110011,"JALR  "},
    {0b110001,"BRANCH"},
    {0b000001,"LOAD  "},
    {0b010001,"STORE "},
    {0b001001,"OP_IMM"},
    {0b011001,"OP    "},
    {0b000111,"FENCE "},
    {0b111001,"SYS   "}
};


void init_npc(int argc, char *argv[]);

