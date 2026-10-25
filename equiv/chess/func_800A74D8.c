#include "common.h"

void func_800A74D8(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    extern int func_800C5A74();
    extern int func_800C5B00();
    u32 sp18;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_v1;
    u32 var_s5;
    u32 var_v0;
    void *temp_s0;

    temp_s6 = arg0 + 0x5D0;
    temp_s0 = temp_s6 + ((arg2 * 0x2E8) + 0x18) + (arg3 * 0x7C);
    var_s5 = 0;
    sp18 = M2C_FIELD(temp_s0, u32 *, 0x18);
    temp_s7 = M2C_FIELD(temp_s0, s32 *, 0x1C) & 0x10000;
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
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 1;
block_21:
                M2C_FIELD(temp_s0, u32 *, 0x18) = var_v0;
                break;
            case 1:
                if (temp_s7 != 0) {
                    func_800B9248(temp_s6, temp_s0);
                } else {
                    func_80034AB0(0x65);
                    func_800C471C(arg0, arg1, arg2, arg3);
                }
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 2;
                goto block_21;
            case 2:
                func_800C4B40(arg0, arg1, arg2, arg3);
                func_800C471C(arg0, arg1, arg2, arg3);
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 4;
                goto block_21;
            case 3:
                func_800ED9CC(arg0, arg1, arg2, arg3);
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 8;
                goto block_21;
            case 4:
                func_800EDC1C(arg0, arg1, arg2, arg3);
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 0x10;
                goto block_21;
            case 5:
                func_800EDD8C(arg0, arg1, arg2, arg3);
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ 0x20;
                goto block_21;
            case 24:
                func_800C4D88(arg0, arg1, arg2, arg3);
                var_v1 = 0x01000000;
block_20:
                var_v0 = M2C_FIELD(temp_s0, u32 *, 0x18) ^ var_v1;
                goto block_21;
            case 15:
                M2C_FIELD(temp_s0, s32 *, 0x78) = func_800AACAC(arg0, arg1, M2C_FIELD(temp_s0, u8 *, 0x24), 2, temp_s0, &func_800C5A74);
                M2C_FIELD(temp_s0, u32 *, 0x18) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x18) ^ 0x8000);
                break;
            case 16:
                M2C_FIELD(temp_s0, s32 *, 0x78) = func_800AACAC(arg0, arg1, M2C_FIELD(temp_s0, u8 *, 0x24), 0, temp_s0, &func_800C5B00);
                M2C_FIELD(temp_s0, u32 *, 0x18) = (u32) (M2C_FIELD(temp_s0, u32 *, 0x18) ^ 0x10000);
                break;
            case 17:
                M2C_FIELD(temp_s0, s32 *, 0x78) = func_800AACAC(arg0, arg1, M2C_FIELD(temp_s0, u8 *, 0x24), 1, temp_s0, &func_800C5B00);
                var_v1 = 0x20000;
                goto block_20;
            }
        }
        var_s5 += 1;
    } while ((s32) var_s5 < 0x20);
}
