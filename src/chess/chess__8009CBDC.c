#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009CBDC(void) {
    s32 i;
     s32 z;
     i=0;
     do {
    if(i==0) z=i;
     else z=0;
     func_80012A20(func_80019F30(0x20013,i+0x18),1,z,z);
    i++;

}while(i<2);

}

void func_8009CC34(void) {
    s32 i;
     s32 z;
     i=0;
     do {
    if(i==0) z=i;
     else z=0;
     func_80012A20(func_80019F30(0x20013,i+0x1B),1,z,z);
    i++;

}while(i<2);

}

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009CBDC", func_8009CC8C);
