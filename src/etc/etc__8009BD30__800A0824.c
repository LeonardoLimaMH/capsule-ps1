#include "common.h"

void func_800A0824(u8 *arg0) {
    extern s16 D_800B3B3C[];
    extern s16 D_800B3B70[];
    extern u8 D_8006B1FC[];
    extern void func_80020844();
    extern void func_800A225C();
    extern void func_800A150C();

    func_80020844(-0x90, arg0[0x5D0] == 2 ? -0x58 : -0x38, 0x120, 0x38, 0, 0, 0, 0, 5);
    func_800A225C(arg0, 0);
    if (arg0[0x5D0] == 2) {
        func_80020844(-0x90, 0x28, 0x120, 0x38, 0, 0, 0, 0, 5);
        func_800A225C(arg0, 1);
    } else if (arg0[0x5DC] == 0) {
        func_800A150C(D_8006B1FC, 0, D_800B3B3C[0], -0x40, 0x20);
    } else {
        s16 *t = D_800B3B70;
        func_800A150C(arg0 + 0x50, 0, t[D_800B3B3C[0]], -0x40, 0x20);
    }
}

void func_800A0944(void) {
    extern M2C_UNK D_8002E38C[];
    extern s32 D_8008F780[];
    extern M2C_UNK D_800B3B38[];
    s16 temp_v0;

    func_8001611C(M2C_GFIELD(D_800B3B38, s16, 8));
    temp_v0 = (u16) M2C_GFIELD(D_800B3B38, s16, 8) - 0x80;
    M2C_GFIELD(D_800B3B38, s16, 8) = temp_v0;
    if ((temp_v0 << 0x10) <= 0) {
        (*D_8008F780) = 0;
        func_80012200(D_8002E38C);
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A09A4);

void func_800A1250(void) {
    extern int func_80012508();
    func_8001A464(0x12, 0x8011C400);
    func_8001A464(0x13, 0x8011EDF4);
    func_8001A464(0x14, 0x8013B9B4);
    func_8001A464(0x10, 0x8014E298);
    func_8001A464(0x1D, 0x8016CF00);
    func_8001A464(0x1E, 0x801840FC);
    func_8001A464(0x1F, 0x801891A0);
    func_8001A464(0x20, 0x8018E048);
    func_8001A464(0x21, 0x80194728);
    func_8001A464(0x22, 0x80199B34);
    func_8001A464(0x23, 0x8019E904);
    func_8001A464(0x24, 0x801A4664);
    func_8001A464(0x25, 0x801A9560);
    func_8001A464(0x26, 0x801AF324);
    func_8001A464(0x27, 0x801B49C0);
    func_8001A464(0x28, 0x801BBC64);
    func_8001A480(0xE, 0x8011C400);
    func_80019F30(0x12000E, func_80012508);
    func_80012508();
}

void func_800A1394(u8 *arg0) {
    extern u8 D_8008ED68[];
    u8 *ed = D_8008ED68;
    *(u16 *)(arg0 + 0xC) += ed[0x103] < 2 ? 1 : ed[0x103];
    func_80018F90(*(u16 *)(arg0 + 0xC), 4);
}

void func_800A13E8(void) {
    extern u16 D_8008EE48[];
    extern void func_8001A49C();
    extern void func_80012578();
    extern void func_80012508();
    s32 addr;

    switch (D_8008EE48[0]) {
    case 0:
        func_8001A49C(0x8011C400);
        addr = 0x8011EDF4;
        goto load;
    case 1:
        addr = 0x8013B9B4;
        goto load;
    case 2:
        addr = 0x8014E298;
        goto load;
    case 3:
        addr = 0x8016CF00;
        goto load;
    case 4:
        addr = 0x801840FC;
        goto load;
    case 5:
        addr = 0x801891A0;
        goto load;
    case 6:
        addr = 0x8018E048;
        goto load;
    case 7:
        addr = 0x80194728;
        goto load;
    case 8:
        addr = 0x80199B34;
        goto load;
    case 9:
        addr = 0x8019E904;
        goto load;
    case 10:
        addr = 0x801A4664;
        goto load;
    case 11:
        addr = 0x801A9560;
        goto load;
    case 12:
        addr = 0x801AF324;
        goto load;
    case 13:
        addr = 0x801B49C0;
        goto load;
    case 14:
        addr = 0x801BBC64;
    load:
        func_8001A49C(addr);
        func_80012578();
        break;
    default:
        func_80012508();
        break;
    }
}

void func_800A150C(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    typedef struct {
        u8 id;
        u8 name[8];
        u8 unk9;
        u8 unkA;
        u8 unkB;
        u8 unkC;
        u8 unkD;
    } Entry14_A150C;
    typedef struct {
        u8 pad0[8];
        u32 pad8_0 : 12;
        u32 unk8_12 : 2;
        u32 pad8_14 : 18;
        u8 padC[0x3C - 0xC];
    } Entry63940;
    extern Entry63940 D_80063940[];
    extern void func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
    extern void func_80018EF4(s32, s32, s32, s32, s32);
    extern void func_800188F0(s32, s32, s32, s32, s32);
    extern void func_8001F35C(s32, s32, s32, s32, s32, s32, s32, s32);

    Entry14_A150C *u;
    s32 x0;
    s16 y0, y1, x1, x2, y2, y3, x3;

    arg3 += 5;
    x0 = (s16)arg3;
    u = &((Entry14_A150C *)arg0)[arg2];
    arg4 += 7;
    y0 = arg4;
    func_8001F1A8(x0, y0, 0, 0, 0, u->name, 0, 8, 3);
    y1 = arg4 + 0xC;
    func_80018EF4((s16)(arg3 + 0x20), y1, D_80063940[u->id].unk8_12, 0, 3);
    x1 = arg3 + 0x36;
    func_800188F0(x1, y1, 0, 0, 3);
    x2 = arg3 + 3;
    y2 = arg4 + 0x19;
    func_800188F0(x2, y2, 1, 0, 3);
    func_800188F0(x1, y2, 2, 0, 3);
    y3 = arg4 + 0x26;
    func_800188F0(x2, y3, 3, 0, 3);
    func_8001F35C((s16)(arg3 + 0x62), y0, 2, 0, 0, u->unkD, 1, 3);
    func_8001F35C((s16)(arg3 + 0x44), y1, 2, 0, 0, u->unkA, 3, 3);
    x3 = arg3 + 0xF;
    func_8001F35C(x3, y2, 2, 0, 0, u->unkB, 3, 3);
    func_8001F35C((s16)(arg3 + 0x4E), y2, 2, 0, 0, u->unkC, 1, 3);
    func_8001F35C(x3, y3, 2, 0, 0, u->unk9, 3, 3);
}

#define A1798_B D_800B3B38->unk0
#define A1798_PAD(i) (D_8008ED68->pad[i].unk0)
#define A1798_N(i, k) (D_800B3B38->unk10[i][k])
#define A1798_P(i, k) (D_800B3B70[i][k])
#define A1798_Q(i) (D_800B3B90[i])
