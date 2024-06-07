
#include "common.h"

#include "difftest.h"
#include "init.h"


#include "VysyxSoCFull.h"
#include "VysyxSoCFull__Dpi.h"
using namespace std;
struct OpcodeInfo{
    int opcode;
    char name[10];
};
const OpcodeInfo opcodeArray[] = {
    {0b01101,"LUI   "},
    {0b00101,"AUIPC "},
    {0b11011,"JAL   "},
    {0b11001,"JALR  "},
    {0b11000,"BRANCH"},
    {0b00000,"LOAD  "},
    {0b01000,"STORE "},
    {0b00100,"OP_IMM"},
    {0b01100,"OP    "},
    {0b00011,"FENCE "},
    {0b11100,"SYS   "}
};


void init_npc(int argc, char *argv[]);

