#include "common.h"

#define A1798_B D_800B3B38->unk0
#define A1798_PAD(i) (D_8008ED68->pad[i].unk0)
#define A1798_N(i, k) (D_800B3B38->unk10[i][k])
#define A1798_P(i, k) (D_800B3B70[i][k])
#define A1798_Q(i) (D_800B3B90[i])

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
