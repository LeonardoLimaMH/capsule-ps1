#include "ghidra.h"
#include "matching.h"
#include "common.h"








void func_800A74D8(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3)
{
    typedef struct {
        u8 pad0[0x18];
        u32 unk_18;
        u32 unk_1C;
        u8 pad20[0x4];
        u8 unk_24;
        u8 pad25[0x53];
        s32 unk_78;
    } ObjA74D8;
    extern int func_800C5A74();
    extern int func_800C5B00();
    int new_var;
    u32 sp18;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_v1;
    u32 var_s5;
    s32 var_v0;
    ObjA74D8 *temp_s0;
    u32 mask = 0x10000;
    temp_s6 = arg0;
    temp_s6 = temp_s6 + 0x5D0;
    new_var = arg2 * 0x2E8 + 0x18;
    temp_s0 = (ObjA74D8 *)((temp_s6 + new_var) + arg3 * 0x7C);
    var_s5 = 0;
    sp18 = temp_s0->unk_18;
    temp_s7 = temp_s0->unk_1C & mask;
    do {
        if ((sp18 >> var_s5) & 1) {
                switch (var_s5) {
                case 0:
                    if (temp_s7 != 0) {
                        func_800B9248(temp_s6, temp_s0);
                        func_800C47B8(arg0, arg1, arg2, arg3, 1);
                    } else {
                        func_80034AB0(0x65);
                        func_800C47B8(arg0, arg1, arg2, arg3, 0);
                        func_800C471C(arg0, arg1, arg2, arg3);
                    }
                    temp_s0->unk_18 ^= 1;
                    break;
                case 1:
                    if (temp_s7 != 0) {
                        func_800B9248(temp_s6, temp_s0);
                    } else {
                        func_80034AB0(0x65);
                        func_800C471C(arg0, arg1, arg2, arg3);
                    }
                    temp_s0->unk_18 ^= 2;
                    break;
                case 2:
                    func_800C4B40(arg0, arg1, arg2, arg3);
                    func_800C471C(arg0, arg1, arg2, arg3);
                    temp_s0->unk_18 ^= 4;
                    break;
                case 3:
                    func_800ED9CC(arg0, arg1, arg2, arg3);
                    temp_s0->unk_18 ^= 8;
                    break;
                case 4:
                    func_800EDC1C(arg0, arg1, arg2, arg3);
                    temp_s0->unk_18 ^= 0x10;
                    break;
                case 5:
                    func_800EDD8C(arg0, arg1, arg2, arg3);
                    temp_s0->unk_18 ^= 0x20;
                    break;
                case 24:
                    func_800C4D88(arg0, arg1, arg2, arg3);
                    temp_s0->unk_18 ^= 0x01000000;
                    break;
                case 15:
                    var_v0 = func_800AACAC(arg0, arg1, temp_s0->unk_24, 2, temp_s0, &func_800C5A74);
                    var_v1 = temp_s0->unk_18 ^ 0x8000;
                    temp_s0->unk_78 = var_v0;
                    temp_s0->unk_18 = var_v1;
                    break;
                case 16: {
                    var_v0 = func_800AACAC(arg0, arg1, temp_s0->unk_24, 0, temp_s0, &func_800C5B00);
                    var_v1 = temp_s0->unk_18 ^ mask;
                    temp_s0->unk_78 = var_v0;
                    temp_s0->unk_18 = var_v1;
                    break;
                }
                case 17:
                    temp_s0->unk_78 = func_800AACAC(arg0, arg1, temp_s0->unk_24, 1, temp_s0, &func_800C5B00);
                    temp_s0->unk_18 ^= 0x20000;
                    break;
                }
        }
        var_s5 += 1;
    } while ((s32) var_s5 < 0x20);
}

