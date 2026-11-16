#include "ghidra.h"
#include "matching.h"
#include "common.h"




void func_800A4900(int param_1, int param_2, int param_3, int param_4)
{
    extern u8 D_801010B0[];
    int iVar1;
    short *psVar2;
    uint uVar3;
    s32 upper;
    s32 lower;
    uVar3 = 0;
    upper = (param_4 + 1) * 100 - 600;
    lower = param_4 * 100 - 600;
    iVar1 = *(int *)(D_801010B0 + *(u8 *)(param_1 + 0x5D9) * 0x34);
    do {
        psVar2 = (short *)((uVar3 ^ 1) * 8 + param_2);
        *psVar2 = (param_3 + ((ushort)uVar3 & 1)) * 100 - 600;
        psVar2[1] = ((ushort)((uint)*(u32 *)(param_4 * 4 + (param_3 * 0x34 + iVar1)) >> 19) & 7) * -50;
        if ((int)uVar3 >= 2) {
            psVar2[2] = upper;
        } else {
            psVar2[2] = lower;
        }
        uVar3++;
    } while ((int)uVar3 < 4);
}





