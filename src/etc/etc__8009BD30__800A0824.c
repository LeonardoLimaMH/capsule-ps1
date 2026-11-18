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

#include "common.h"

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

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A150C);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A1798);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30__800A0824", func_800A225C);

void func_800A2588(s16 arg0) {
    s32 value;
    s32 i;
    s32 x;
    u32 id;
    register s32 mask asm("s4");
    id = arg0 + 0x1EU;
    i = 0;
    mask = 0x20000;
    x = 0x2400000;
    do {
        value = func_80019F30(0x2001D, i);
        func_80012A20(value, 2, x >> 16, 0x100);
        value = func_80019F30(id | mask, i);
        func_80012A20(value, 2, x >> 16, 0x100);
        {
            register s32 step asm("v0") = 0x400000;
            x += step;
        }
        i++;
    } while (i < 3);
    i = 0;
    do {
        value = func_80019F30(id | 0x20000, i + 3);
        func_80012A20(value, 1, 0, 0);
        i++;
    } while (i < 2);
}

void func_800A2678(void *arg0) {
    typedef struct {
        u8 unk0;
        u8 unk1[8];
        u8 unk9[5];
    } Entry14; /* sizeof 0xE */

    typedef struct {
        /* 0x00 */ u8 unk0;
        /* 0x01 */ u8 unk1[8];
        /* 0x09 */ u8 unk9[5];
        /* 0x0E */ u8 unkE[5];
        /* 0x13 */ s8 unk13;
        /* 0x14 */ u8 pad14[0x18];
        /* 0x2C */ u8 unk2C;
        /* 0x2D */ u8 pad2D[0x4F];
    } Unit7C; /* sizeof 0x7C */

    typedef struct {
        /* 0x00 */ u8 unk0;
        /* 0x01 */ u8 pad1[0x7];
        /* 0x08 */ u8 unk8;
        /* 0x09 */ u8 unk9;
        /* 0x0A */ u8 padA[0x2];
        /* 0x0C */ u8 unkC[2];
        /* 0x0E */ u8 padE[0x7];
        /* 0x15 */ u8 unk15;
        /* 0x16 */ u8 pad16[0x2];
        /* 0x18 */ Unit7C units[2][6];
    } Block5D0;

    typedef struct {
        u8 pad00[0x50];
        Entry14 unk50[2][50];
    } State50;

    typedef struct {
        u8 pad0[0x13];
        u8 unk13;
        u8 pad14[0x44];
    } Mon88; /* sizeof 0x58 */

    typedef struct {
        u8 pad0[4];
        s16 unk4[2];
    } B3B38;

    extern Entry14 D_8006B1FC[];
    extern Mon88 D_8006B2A4[];
    extern Entry14 D_8006DB34[][6];
    extern Entry14 D_8006DDD4[];
    extern B3B38 D_800B3B38[];
    extern s16 D_800B3B70[][6];

    Block5D0 *b = (Block5D0 *)((u8 *)arg0 + 0x5D0);
    s32 side;

    for (side = 0; side < 2; side++) {
        s32 i;
        for (i = 0; i < 6; i++) {
            Entry14 *src;
            s32 idx = i;
            s32 j;

            if (side == 0 || b->unk0 == 2) {
                if (b->unkC[side] == 0) {
                    if (i == 5) {
                        src = &D_8006B1FC[D_800B3B38->unk4[side]];
                    } else {
                        if (i >= D_800B3B38->unk4[side]) {
                            idx = i + 1;
                        }
                        src = &D_8006B1FC[idx];
                    }
                    b->units[side][i].unk2C = 0;
                } else if (i == 5) {
                    src = &((State50 *)arg0)->unk50[side][D_800B3B70[side][D_800B3B38->unk4[side]]];
                    {
                        s32 off5 = side * 0x2E8 + 0x26C;
                        ((Block5D0 *)((u8 *)b + off5))->units[0][0].unk2C = D_800B3B70[side][D_800B3B38->unk4[side]];
                    }
                } else {
                    if (i >= D_800B3B38->unk4[side]) {
                        idx = i + 1;
                    }
                    src = &((State50 *)arg0)->unk50[side][D_800B3B70[side][idx]];
                    b->units[side][i].unk2C = D_800B3B70[side][idx];
                }
            } else {
                src = &D_8006DB34[b->unk15][i];
                if (b->unk0 == 0) {
                    if (b->unk15 == 7 && i == 1 && (b->unk8 % 3) == 2) {
                        src = D_8006DDD4;
                    }
                } else if (b->unk0 == 1) {
                    if (b->unk9 == 10 && i == 1) {
                        src = D_8006DDD4;
                    }
                }
                b->units[side][idx].unk2C = 0;
            }

            b->units[side][i].unk0 = src->unk0;
            for (j = 0; j < 8; j++) {
                b->units[side][i].unk1[j] = src->unk1[j];
            }
            for (j = 0; j < 5; j++) {
                b->units[side][i].unk9[j] = src->unk9[j];
                b->units[side][i].unkE[j] = src->unk9[j];
            }
            switch (D_8006B2A4[b->units[side][i].unk0].unk13 & 3) {
            case 0:
                b->units[side][i].unk13 = -1;
                break;
            case 1:
                b->units[side][i].unk13 = 1;
                break;
            case 2:
                b->units[side][i].unk13 = b->units[side][i].unk9[4];
                break;
            }
        }
    }
}
