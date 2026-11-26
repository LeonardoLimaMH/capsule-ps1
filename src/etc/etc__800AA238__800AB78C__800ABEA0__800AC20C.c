#include "common.h"

#include "ghidra.h"
typedef struct {
    u8 id;
    u8 unk1[8];
    u8 unk9[5];
} Entry14;

typedef struct {
    u8 pad0[2];
    u8 unk2[2];
    u8 pad4[0x50 - 4];
    Entry14 entries[2][50];
} S_80085428;

extern S_80085428 D_80085428[];
extern u8 D_800B3D18[][4];
extern u8 D_800B3D48[];

void func_800AC20C(u8 side) {
    S_80085428 *d = D_80085428;
    u8 done = 0;
    s32 dst;
    s32 src;
    s32 k;
    s32 i;

    do {
        if (D_800B3D18[side][0] > D_800B3D18[side][1]) {
            u8 t = D_800B3D18[side][0];
            D_800B3D18[side][0] = D_800B3D18[side][1];
            D_800B3D18[side][1] = t;
        }
        if (D_800B3D18[side][2] > D_800B3D18[side][3]) {
            u8 t = D_800B3D18[side][2];
            D_800B3D18[side][2] = D_800B3D18[side][3];
            D_800B3D18[side][3] = t;
        }
        if (D_800B3D18[side][1] > D_800B3D18[side][2]) {
            u8 t = D_800B3D18[side][1];
            D_800B3D18[side][1] = D_800B3D18[side][2];
            D_800B3D18[side][2] = t;
        } else {
            done = 1;
        }
    } while (!done);

    dst = D_800B3D18[side][0];
    src = dst + 1;
    k = 1;
    while (src < d->unk2[side]) {
        if (src == D_800B3D18[side][k]) {
            src++;
            k++;
            continue;
        }
        d->entries[side][dst].id = d->entries[side][src].id;
        for (i = 0; i < 8; i++) {
            d->entries[side][dst].unk1[i] = d->entries[side][src].unk1[i];
        }
        for (i = 0; i < 5; i++) {
            d->entries[side][dst].unk9[i] = d->entries[side][src].unk9[i];
        }
        dst++;
        src++;
    }

    for (i = 0; i < D_800B3D48[side]; i++) {
        d->entries[side][dst++].id = 0;
    }
    d->unk2[side] -= D_800B3D48[side];
}
