#include "common.h"

#include "ghidra.h"

void func_800ABEA0(void) {
    typedef struct {
        u8 id;
        u8 unk1[8];
        u8 unk9[5];
    } Entry14;
    typedef struct {
        u8 id;
        u8 unk1[8];
        u8 unk9[5];
        u8 padE[0x2B - 0xE];
        u8 unk2B;
        u8 unk2C;
        u8 pad2D[0x7C - 0x2D];
    } Unit7C;
    typedef struct {
        u8 pad0[4];
        u8 unk4[2];
        u8 pad6[0x50 - 6];
        Entry14 entries[2][50];
        u8 pad5C8[0x5D0 - (0x50 + 100 * 14)];
        u8 unk5D0;
        u8 pad5D1[0x5DC - 0x5D1];
        u8 unk5DC;
        u8 unk5DD;
        u8 pad5DE[0x5E8 - 0x5DE];
        Unit7C units[2][6];
    } S_80085428;
    typedef struct {
        u8 pad0[0x14];
        u32 unk14;
        u8 pad18[0x3C - 0x18];
    } Entry3C;
    extern S_80085428 D_80085428[];
    extern Entry3C D_80063940[];
    extern u8 D_800B3D18[][4];
    extern u8 D_800B3D46[];
    extern u8 D_800B3D48[];

    S_80085428 *d = D_80085428;
    s32 i;
    s32 j;
    s32 n;
    u8 idx;
    u32 bit;

    D_800B3D48[1] = 0;
    D_800B3D48[0] = 0;
    D_800B3D46[1] = 0;
    D_800B3D46[0] = 0;
    for (i = 0; i < 4; i++) {
        D_800B3D18[1][i] = 0x7F;
        D_800B3D18[0][i] = 0x7F;
    }

    if (d->unk5DC != 0) {
        n = 0;
        for (i = 0; i < 5; i++) {
            if (d->units[0][i].unk2B == 1) {
                D_800B3D46[0] = 1;
                D_800B3D48[0]++;
                D_800B3D18[0][n++] = d->units[0][i].unk2C;
            } else if (d->units[0][i].unk2B == 2) {
                D_800B3D46[0] = 1;
                idx = d->units[0][i].unk2C;
                d->entries[0][idx].id = d->units[0][i].id;
                for (j = 0; j < 8; j++) {
                    d->entries[0][idx].unk1[j] = d->units[0][i].unk1[j];
                }
                for (j = 0; j < 5; j++) {
                    d->entries[0][idx].unk9[j] = d->units[0][i].unk9[j];
                }
                bit = (D_80063940[d->entries[0][idx].id].unk14 >> 5) & 1;
                if (bit != 1) {
                    d->unk4[0]++;
                }
                D_80063940[d->entries[0][idx].id].unk14 |= 0x20;
            }
        }
    }

    if (D_80085428->unk5D0 == 2 && D_80085428->unk5DD != 0) {
        n = 0;
        for (i = 0; i < 5; i++) {
            if (d->units[1][i].unk2B == 1) {
                D_800B3D46[1] = 1;
                D_800B3D48[1]++;
                D_800B3D18[1][n++] = d->units[1][i].unk2C;
            } else if (d->units[1][i].unk2B == 2) {
                D_800B3D46[1] = 1;
                idx = d->units[1][i].unk2C;
                d->entries[1][idx].id = d->units[1][i].id;
                for (j = 0; j < 8; j++) {
                    d->entries[1][idx].unk1[j] = d->units[1][i].unk1[j];
                }
                for (j = 0; j < 5; j++) {
                    d->entries[1][idx].unk9[j] = d->units[1][i].unk9[j];
                }
                bit = (D_80063940[d->entries[1][idx].id].unk14 >> 6) & 1;
                if (bit != 1) {
                    d->unk4[1]++;
                }
                D_80063940[d->entries[1][idx].id].unk14 |= 0x40;
            }
        }
    }
}

