#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 unk_00[0x54];
    s32 unk_54;
    s32 unk_58;
} ChessUnk69E4C;

void func_8009B948(u8 *arg0, s32 arg1) {
    extern s32 D_801010B0[][13];
    extern ChessUnk69E4C D_80069E4C[];
    extern u8 D_80090528[];
    extern u8 D_80018600[];
    extern s32 func_800CA474();
    extern u8 *func_80015B3C();
    extern void func_8001602C();
    extern void func_8002CBDC();
    extern void func_800CE330();
    extern void func_800CED20();
    extern void func_800CEFA0();
    s32 *table;
    s32 *entry;
    u8 *obj;
    s32 value;
    void (*setup)();

    table = (s32 *)D_801010B0[arg0[0x5D9]][1];
    if (table[arg1 * 13] != -1) {
        value = func_800CA474(arg0);
        if (arg1 == 2) {
            setup = func_800CED20;
        } else {
            setup = func_800CEFA0;
        }
        obj = func_80015B3C(setup, D_80018600, 1);
        func_8001602C(obj);
        D_80069E4C->unk_54 = arg1 != 1;
        entry = (s32 *)(arg1 * 0x34 + (u32)table);
        D_80069E4C->unk_58 = entry[2] * 2 + D_80069E4C->unk_54;
        *(u8 **)(obj + 0x18) = D_80090528 + arg1 * 0xBC;
        func_8002CBDC(obj);
        *(s32 *)(*(u8 **)(obj + 0x18) + 0x10) = 0x1000;
        *(s32 *)(*(u8 **)(obj + 0x18) + 0x14) = 0x1000;
        *(s32 *)(*(u8 **)(obj + 0x18) + 0x18) = 0x1000;
        func_800CE330(value, entry[0], arg1, *(u8 **)(obj + 0x18), 0, arg1 + 6);
        entry[12] = (s32)obj;
        *(u32 *)(obj + 0x50) &= ~1;
    }
}
