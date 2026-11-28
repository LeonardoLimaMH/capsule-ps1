#include "common.h"

typedef struct {
    u8 pad[0x38];
    u32 flags;
} WorkSlotRecordTask;
typedef struct {
    u8 pad[0x18C];
    WorkSlotRecordTask *task;
    u8 middle[0x21F];
    u8 slots[32];
    u8 tail[0x3C9];
    u32 state;
} WorkSlotRecord;

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738__800A9F84", func_800A9F84);

void func_800AA0E4(void) {
    typedef struct { s32 w[47]; } S188;
    typedef struct { s32 w[96]; } S384;
    typedef struct {
        u8 pad0[0x10];
        u16 unk10;
        u8 pad12[0x18C - 0x12];
        u8 *unk18C[2];
        u8 pad194[0x1A8 - 0x194];
    } Mon_800AA0E4;
    extern Mon_800AA0E4 D_80091618[];
    extern S188 D_800900C0[];
    extern s32 D_800EE9B8[];
    extern s32 D_800ED8DC[];
    extern s32 D_800EF2D8;
    extern u16 D_8006AF80;
    extern s16 D_800EEA90;
    extern S188 D_80091558;
    extern S384 D_800913D8, D_80069AD4;
    extern s32 func_800D1548(void), func_800B1260(s32), func_800A8E1C(s32);
    extern void func_800A9F84(s32, s32, s32), func_800A8EAC(void), func_800A8EE0(void);
    extern void func_80029B28(s32), func_800A9D6C(s32);

    s32 j;
    for (j = 1; j >= 0; j--) D_800EE9B8[j] = 0;
    if (D_800ED8DC[0] != 1) return;
    D_800EF2D8 = D_8006AF80;
    if (func_800D1548() != 1 && D_80091618[D_8006AF80].unk10 != 0xFFFF) {
        s32 i, n;
        D_800EEA90 = 8;
        for (i = 1; i >= 0; i--) {
            u16 k = func_800B1260(i);
            u16 c;
            if (k == 0xFFFF) continue;
            c = D_80091618[k].unk10;
            func_800A9F84(c, i, 1);
            n = func_800A8E1C(c);
            for (j = 0; j < n; j++) *(s32 *)(D_80091618[k].unk18C[j] + 0x50) |= 1;
        }
        func_800A8EAC();
        for (i = 1; i >= 0; i--) {
            u16 k = func_800B1260(i);
            if (k == 0xFFFF) continue;
            n = func_800A8E1C(D_80091618[k].unk10);
            for (j = 0; j < n; j++) func_80029B28(*(s32 *)(D_80091618[k].unk18C[j] + 0x18));
        }
    } else {
        D_800EEA90 = 0;
        func_800A9D6C(1);
        for (j = 0; j < 2; j++) *(s32 *)(D_80091618[D_8006AF80].unk18C[j] + 0x50) |= 1;
        func_800A8EAC();
        for (j = 0; j < 2; j++) func_80029B28(*(s32 *)(D_80091618[D_8006AF80].unk18C[j] + 0x18));
    }
    func_800A8EE0();
    D_80091558 = D_800900C0[1];
    D_800913D8 = D_80069AD4;
}

s32 func_800AA45C(void) {
    typedef struct {
        u8 pad[0xA68];
        s32 unkA68;
    } S_8ED68;
    extern S_8ED68 D_8008ED68[];
    extern s32 D_800ED8DC[];
    S_8ED68 *p = D_8008ED68;

    if (*D_800ED8DC == 1) {
        if (p->unkA68 != 0) {
            return 0;
        }
    }
    return -1;
}

s32 func_800AA494(void) {
    extern s32 D_800ED8DC[];
    extern u16 D_8006AF80[];
    extern u8 D_80091618[];
    extern u8 D_80069E4C[];
    extern u16 D_800ED88C[];
    s32 i, j, n;
    u16 k;
    u8 *e;
    u8 *p;
    u16 v;
    register u8 *base asm("a0");
    register u16 *af80 asm("v0");

    if (*D_800ED8DC == 1) {
        func_800AEA0C();
        for (i = 1; i >= 0; i--) {
            k = func_800B1260(i);
            if (k != 0xFFFF) {
                e = D_80091618 + k * 0x1A8;
                v = *(u16 *)(e + 0x10);
                n = func_800A8E1C(v == 0xFFFF ? 8 : v);
                if (n > 0) {
                    j = 0;
                    p = e;
                loop:
                    *(s32 *)(*(u8 **)(p + 0x18C) + 0x50) &= ~1;
                    j++;
                    *(s32 *)(*(u8 **)(p + 0x18C) + 0x50) &= ~8;
                    p += 4;
                    if (j < n) goto loop;
                }
            }
        }
    } else {
        func_800260C8(D_80069E4C[0x11], D_80069E4C[0x10]);
        *D_800ED88C = 0;
        func_800B7264(1);
    }
    base = D_80091618;
    af80 = D_8006AF80;
    func_800ABF7C(*(u16 *)(base + *af80 * 0x1A8 + 0x10) != 0xFFFF);
    return -1;
}
