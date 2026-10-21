#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4ECC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C4FC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C523C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5300);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C553C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5748);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5928);

void func_800C5A74(void *arg0) {
    s32 temp_a1;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x84) == 1) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
                func_800185F8(arg0, temp_a1, arg0);
                return;
            }
            func_800C5C34(arg0, temp_a1, arg0);
        } else {
            return;
        }
        break;
    }
}

void func_800C5B00(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u16 *, 0x7A);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x40);
    switch (temp_v1) {                              /* irregular */
    case 0:
        if (M2C_FIELD(arg0, s32 *, 0x84) == 1) {
            M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) & ~1);
            M2C_FIELD(arg0, u16 *, 0x7A) = (u16) (M2C_FIELD(arg0, u16 *, 0x7A) + 1);
        case 1:
            if (M2C_FIELD(arg0, s32 *, 0x84) == 2) {
                func_800185F8(arg0);
                return;
            }
            if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
                temp_a1 = M2C_FIELD(arg0, s32 *, 0x8C);
                if (temp_a1 != 0) {
                    func_80015CD0(arg0 + 0x14, temp_a1, 0);
                    M2C_FIELD(arg0, s32 *, 0x8C) = 0;
                }
            }
            func_800C5C34(arg0, temp_s1);
        } else {
            return;
        }
        break;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5BCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5C34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5DE8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C5FA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C61F4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C6330);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C63AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C64C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C656C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C65EC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C6F80);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C71D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C768C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C77A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7864);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7B30);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7D84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7DD8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", __udivdi3);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7F74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C7FDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8368);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8528);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C867C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C87C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8A48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8BF4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8DE0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C8EF0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9254);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9338);

s32 func_800C9414(void) {
    extern s32 D_80069C4C[];
    return (*D_80069C4C) == 5;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C942C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9484);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C94DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9534);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9560);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9648);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9A34);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9B78);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9C38);

s32 func_800C9C90(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x40;
}

s32 func_800C9C9C(void *arg0) {
    return M2C_FIELD(arg0, u16 *, 0x5CC) & 0x80;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9CA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9D18);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800C9F98);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA00C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA268);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA2C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA35C);

s32 func_800CA3DC(s32 arg0) {
    s32 var_v1;

    var_v1 = 8;
loop_1:
    if (M2C_FIELD((var_v1 + arg0), u8 *, -1) == 0) {
        var_v1 -= 1;
        if (var_v1 > 0) {
            goto loop_1;
        }
    }
    return var_v1;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA408);

s32 func_800CA474(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5D9) + 0x29;
}

s32 func_800CA480(void *arg0) {
    return M2C_FIELD(arg0, u8 *, 0x5D9) + 0x34;
}

s32 func_800CA48C(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
    var_a2 = -1;
    if (temp_v1 != 0xFF) {
        var_a2 = temp_v1 + 0x10;
    }
    return var_a2;
}

s32 func_800CA4AC(s32 arg0, s32 arg1) {
    s32 var_a2;
    u8 temp_v1;

    temp_v1 = M2C_FIELD((arg0 + arg1), u8 *, 0x5E4);
    var_a2 = -1;
    if (temp_v1 != 0xFF) {
        var_a2 = temp_v1 + 0x18;
    }
    return var_a2;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA4CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA574);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA664);

u32 func_800CA69C(void *arg0) {
    return (u32) (M2C_FIELD(arg0, u8 *, 0xBE1) & 6) >> 1;
}

s32 func_800CA6B0(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA6B8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA730);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA7B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CA87C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAA44);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAA6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAABC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CABDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAC50);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CACC4);

void func_800CAD74(s32 arg0) {
    s32 temp_s4;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    u8 temp_v0;
    void *var_s0;

    temp_s4 = arg0 + 0x5D0;
    var_s2 = 0;
    var_s3 = 0x18;
    do {
        var_s1 = 0;
        var_s0 = temp_s4 + var_s3;
loop_2:
        if (func_800A8E34(temp_s4, var_s2, var_s1) == 0) {
            temp_v0 = M2C_FIELD(var_s0, u8 *, 0x28);
            if (temp_v0 != 0) {
                M2C_FIELD(var_s0, u8 *, 0x28) = (u8) (temp_v0 - 1);
            }
        }
        var_s1 += 1;
        var_s0 += 0x7C;
        if (var_s1 < 6) {
            goto loop_2;
        }
        var_s2 += 1;
        var_s3 += 0x2E8;
    } while (var_s2 < 2);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAE14);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAE6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAECC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CAF74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB10C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB24C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB400);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB540);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB588);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB6A0);

void func_800CB844(s32 arg0) {
    func_8001A998(arg0 + 0x10, 0x10);
    func_8001A998(arg0 + 0x28, 8);
    func_8001A998(arg0 + 0x40, 0x10);
    func_8001A998(arg0 + 0x58, 8);
}

s32 func_800CB898(s32 arg0) {
    return (arg0 & 0xC0) != 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB8A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CB960);

void func_800CB9F4(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s16 *, 0x71C) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E) = arg1;
    M2C_FIELD(arg0, s8 *, 0x71F) = arg2;
}

void func_800CBA04(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x71C) = 0;
    M2C_FIELD(arg0, s8 *, 0x71E) = 0;
    M2C_FIELD(arg0, s8 *, 0x71F) = 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CBA14);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CBAA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CBBB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CBD28);

void func_800CBFF8(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CC000);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CC5DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CC7BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CC99C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CCC0C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CCDE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD014);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD188);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD200);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD564);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD658);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD6AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD768);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD85C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD950);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CD9F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CDA94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CDB30);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CDF4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CE330);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CE73C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CE9E4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CEC5C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CED20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CEFA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CF220);

void SsQuit(void) {
    func_800FF700();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CF2C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CF450);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CF720);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CF960);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CFB1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CFC9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CFE1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800CFFF8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D00B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0270);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0360);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0884);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D08FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D09D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0B4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0BDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D0F60);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D10A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D113C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2340);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D23F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D24B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D28C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2C9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2CE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2DA8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2EEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D2FA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3128);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3274);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D33B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3408);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D34D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3698);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3A2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3D2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D3F7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D4100);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D449C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D46D0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D497C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D4C20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D4EEC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D4F74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D543C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D5544);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D56AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D595C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D5DAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D68A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D6A4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D6DA4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D72CC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7328);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7388);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D741C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D76D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D783C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D79A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7B80);

s32 func_800D7CC4(s16 arg0) {
    return func_800202A4(0x64) < arg0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7CFC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7E94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D7F64);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D80F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D82A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8490);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8508);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8580);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D862C);

s32 func_800D888C(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8894);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8B6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8D48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8EB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D8FC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D90C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D9268);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D943C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D9688);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D9798);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D9BB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800D9EB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DA0C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DA46C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DA678);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DA930);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DAB58);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DAE28);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DAF10);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DB14C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DB3FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DB568);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DB804);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DB95C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DBBC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DBCCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DBF60);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DC06C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DC28C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DC494);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DC750);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DC874);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCA2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCC28);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCC84);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCD20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCDE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC", func_800DCE48);
