#include "common.h"

typedef struct { u32 unk0; u32 unk4; u32 unk8; u8 pad[0x30]; } D63940_t;

void func_800CB844(s32 arg0) {
    func_8001A998(arg0 + 0x10, 0x10);
    func_8001A998(arg0 + 0x28, 8);
    func_8001A998(arg0 + 0x40, 0x10);
    func_8001A998(arg0 + 0x58, 8);
}

s32 func_800CB898(s32 arg0) {
    return (arg0 & 0xC0) != 0;
}

s16 func_800CB8A4(s16 arg0, s16 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 var_v0;
    s32 var_v0_2;

    if (arg4 == 0) {
        var_v0 = arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    } else {
        var_v0_2 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
        if (var_v0_2 < 0) {
            var_v0_2 += 0xFFF;
        }
        var_v0 = arg0 + (var_v0_2 >> 0xC);
    }
    return var_v0;
}

s32 func_800CB960(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 var_v0;

    if (arg4 == 0) {
        return arg0 + ((s32) ((arg1 - arg0) * arg2) / arg3);
    }
    var_v0 = (arg1 - arg0) * rsin((s32) (arg2 << 0xC) / (s32) (arg3 * 4));
    if (var_v0 < 0) {
        var_v0 += 0xFFF;
    }
    return arg0 + (var_v0 >> 0xC);
}

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

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CBA14);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CBAA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CBBB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CBD28);

void func_800CBFF8(void) {

}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CC000);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CC5DC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CC7BC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CC99C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CCC0C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CCDE4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD014);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD188);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD200);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD564);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD658);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD6AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD768);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD85C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD950);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CD9F0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CDA94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CDB30);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CDF4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CE330);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CE73C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CE9E4);

#include "common.h"

void func_800CEC5C(s32 unused_arg0, void *arg1, M2C_UNK arg2) {
    s32 temp_v1;

    PushMatrix();
    func_8002CEC0(arg1);
    temp_v1 = M2C_FIELD(arg1, s32 *, 8);
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_8002AF9C(arg1, arg2);
        break;
    case 1:
        func_800CE73C(arg1, arg2);
        break;
    case 2:
        func_800CE9E4(arg1, arg2);
        break;
    case 3:
        func_8002B4D0(arg1, arg2);
        break;
    }
    PopMatrix();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CED20);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CEFA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CF220);

void SsQuit(void) {
    func_800FF700();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CF2C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CF450);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CF720);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CF960);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CFB1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CFC9C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CFE1C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800CFFF8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D00B0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0270);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0360);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0884);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D08FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D09D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0B4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0BDC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D0F60);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D10A0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D113C);

u32 func_800D2340(u32 arg0) {
    extern u8 D_80085994[];
    extern u8 D_80063940[];
    u8 *p = D_80085994 + (((arg0 & 0xFF) >> 7) * 0x2E8 + (arg0 & 0x7F) * 0x7C);
    s16 v;
    if (p[0] == 0x63) {
        v = *(s16 *)(*(u8 **)(p + 0x70) + 0x64);
        if (v == -1) {
            return 2;
        }
        if (v >= 0) {
            return 1;
        }
        if (v == -2) {
            return 0;
        }
        return 1;
    }
    return (*(u32 *)(D_80063940 + p[0] * 0x3C + 8) >> 12) & 3;
}

s16 func_800D23F0(u32 arg0, u32 arg1, u32 arg2) {
    extern u16 D_800859F4;
    s32 v = ((arg1 & 0xFF) - (arg2 & 0xFF) + 0x28) / 2 + 10;
    u32 m = (D_800859F4 & 0x7000) >> 12;
    arg0 &= 0xFF;
    if (m == 0) {
        if (arg0 == 0) {
            v = v + v / 5;
        } else {
            v = v - v / 5;
        }
    } else if (m == 2) {
        if (arg0 == 1) {
            v = v + v / 5;
        } else {
            v = v - v / 5;
        }
    }
    if (v <= 0) {
        return 1;
    }
    if (v < 0x100) {
        return v;
    }
    return 0xFF;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D24B4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D28C0);

#include "ghidra.h"
undefined1 func_800D2C9C(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;

  if (((param_2 & 0xff) < 0xd) && ((param_3 & 0xff) < 0xd)) {
    uVar1 = *(undefined1 *)((param_2 & 0xff) * 0xd + param_1 + (param_3 & 0xff));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

u8 func_800D2CE4(u32 arg0, u32 arg1) {
    extern u8 D_80085428[];
    u8 *a = D_80085428 + (((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8);
    u8 *b = D_80085428 + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    s32 dx = a[0x5FD] - b[0x5FD];
    s32 dy;
    if (dx < 0) {
        dx = b[0x5FD] - a[0x5FD];
    }
    dy = a[0x5FE] - b[0x5FE];
    if (dy < 0) {
        dy = b[0x5FE] - a[0x5FE];
    }
    return dx + dy;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D2DA8);

void func_800D2EEC(u32 arg0, u8 arg1, u8 arg2) {
    extern u8 D_80085428[];
    extern u8 *D_80118C18[];
    s32 i = ((arg0 & 0x7F) - 1) * 0x7C + ((arg0 & 0xFF) >> 7) * 0x2E8;
    u8 *q = D_80085428 + i;
    u8 b1 = q[0x5FD];
    u8 b2 = q[0x5FE];
    q[0x5FD] = arg1;
    q[0x5FE] = arg2;
    D_80118C18[0][b1 * 0x34 + b2 * 4 + 3] = 0;
    D_80118C18[0][arg1 * 0x34 + arg2 * 4 + 3] = arg0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D2FA0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3128);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3274);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D33B0);

void func_800D3408(s32 arg0) {
    extern u8 D_80118C25[];
    u8 temp_a0;
    register s32 step __asm__("$4");
    void *temp_s0;
    void *temp_s1;

    temp_s1 = ((arg0 & 0xFF) * 0xB4) + D_80118C25;
    func_8001A998(temp_s1, 0xB4);
    temp_s0 = D_80118C25 - 0xD;
    temp_a0 = M2C_FIELD(temp_s0, u8 *, 0xC);
    if ((temp_a0 != 0) && (M2C_FIELD(temp_s0, u8 *, 0xA) == 0)) {
        step = (temp_a0 & 0x7F) - 1;

        M2C_FIELD(temp_s1, s8 *, 5) = 5;
        M2C_FIELD(temp_s1, s8 *, 6) = (s8) (((step & 0xFF) + 1) % 6);
        return;
    }
    M2C_FIELD(temp_s1, s8 *, 6) = func_800202A4(6);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D34D4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3698);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3A2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3D2C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D3F7C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D4100);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D449C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D46D0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D497C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D4C20);

void func_800D4EEC(s32 arg0) {
    extern u8 D_80085428[];
    extern u8 *D_80118C18[];
    extern void func_800CFE1C();
    extern void func_800D497C();
    u8 *p = D_80085428;
    u8 *q = p + p[0xBCA] * 2;
    u8 v = D_80118C18[0][q[0xBD1] * 0x34 + q[0xBD2] * 4 + 3];
    func_800CFE1C();
    func_800D497C(v, arg0);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D4F74);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D543C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D5544);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D56AC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D595C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D5DAC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D68A8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D6A4C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D6DA4);

u8 func_800D72CC(u8 arg0, void *arg1) {
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    func_8001A998(arg1, 0xA9);
    (*D_80119658) = 0;
    (*D_80119659) = 0;
    func_800D6DA4(arg0 & 0xFF, arg1);
    return (*D_80119659);
}

u8 func_800D7328(u8 arg0, void *arg1) {
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    func_8001A998(arg1, 0xC);
    (*D_80119658) = 1;
    (*D_80119659) = 0;
    func_800D6DA4(arg0 & 0xFF, arg1);
    return (*D_80119659);
}

u8 func_800D7388(u8 *arg0, s32 arg1) {
    extern u8 D_80119658[];
    extern u8 D_80119659[];
    extern u8 *D_80118C18[];
    u8 v = D_80118C18[0][arg0[0x15] * 0x34 + arg0[0x16] * 4 + 3];
    func_8001A998(arg1, 0xC);
    D_80119658[0] = 1;
    D_80119659[0] = 0;
    func_800D6DA4(v, arg1);
    return D_80119659[0];
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D741C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D76D8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D783C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D79A4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D7B80);

s32 func_800D7CC4(s16 arg0) {
    return func_800202A4(0x64) < arg0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D7CFC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D7E94);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D7F64);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D80F8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D82A0);

s32 func_800D8490(u8 arg0, u32 arg1) {
    extern u8 D_80085428[];
    u8 *base = D_80085428;
    u8 *p = base + (((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8);
    u8 r = func_800D7B80(arg0 & 0xFF, p[0x5F7]);
    return r - p[0x5F7];
}

s32 func_800D8508(u8 arg0, u32 arg1) {
    extern u8 D_80085428[];
    extern u32 func_800D7B80();
    s32 i = ((arg1 & 0x7F) - 1) * 0x7C + ((arg1 & 0xFF) >> 7) * 0x2E8;
    u8 *q = D_80085428 + i;
    u32 r = func_800D7B80(arg0, q[0x5F8]);
    return (r & 0xFF) - q[0x5F8];
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8580);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D862C);

s32 func_800D888C(void) {
    return 0;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8894);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8B6C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8D48);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8EB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D8FC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D90C0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D9268);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D943C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D9688);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D9798);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D9BB4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800D9EB0);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DA0C8);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DA46C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DA678);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DA930);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DAB58);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DAE28);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DAF10);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DB14C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DB3FC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DB568);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DB804);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DB95C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DBBC4);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DBCCC);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DBF60);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DC06C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DC28C);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DC494);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DC750);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DC874);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CB844", func_800DCA2C);
