#include "common.h"

extern u8 D_80100F38[];
extern u8 D_80091618[];
extern u8 D_800EF364[];
extern u8 D_800EFF58[];
extern u16 D_8006AF80[];

/* entrada de D_80091618 (0x1A8 bytes), visão parcial */
typedef struct {
    u8 pad0[0x10];
    u16 unk10;
    u8 pad12[0x8A - 0x12];
    u16 unk8A;
    u8 pad8C[0x1A8 - 0x8C];
} Raise1A8;

/* mapa 8x8 de D_800EF364 */
typedef struct {
    u8 cell[8][8];
} RaiseMap64;

void func_800CF2E4(void) {
    func_800B1260();
}

extern s32 func_800B1260();
extern s16 func_800CF4BC(s32, s32, s32);
extern s32 rand(void);
s32 func_800CF304(s32 arg0) {
    extern s32 D_8008ED80[];
    s32 n = 7;
    s32 id = func_800B1260(arg0);
    s32 i = 0;
    u8 *p = D_80100F38 + (u16)id * 0x79C;
    u8 *q = p;
    u32 pos;
    short v;

    do {
        *(s16 *)(q + 0x346) = func_800CF4BC(arg0, i, 0);
        i += 1;
        q += 2;
    } while (i < 8);

    pos = rand() + D_8008ED80[0];
    pos &= 7;
    v = *(s16 *)(p + pos * 2 + 0x346);
    while (v == 0xFF) {
        pos = (pos == 7) ? 0 : (pos + 1);
        if (n == 0) {
            return -1;
        }
        v = *(s16 *)(p + pos * 2 + 0x346);
        n--;
    }
    return pos;
}

extern s32 func_800B1260(void);
extern s16 func_800CFF9C(s32, s32, s32);
s32 func_800CF418(s32 arg0, s32 arg1) {
    register s32 b asm("s1") = arg1;
    u8 *rec = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    s32 val = 0xFF;
    s32 i;

    for (i = 7; i >= 0; i--) {
        ((s16 *)(rec + 0x346))[i] = val;
    }
    ((s16 *)(rec + 0x346))[b] = func_800CFF9C(arg0, b, 0);
    return b;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CF4BC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800CFF9C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D06D4);

void func_800D0730(void *arg0, s16 arg1, s16 arg2, s16 arg3)
{
  int new_var2;
  s32 new_var;
  s32 temp_t0;
  s32 temp_v1;
  new_var = arg2;
  temp_t0 = arg3 + 4;
  new_var2 = (new_var - temp_t0) * 0x64;
  temp_v1 = (arg3 + 1) * 0x32;
  *((s16 *) (((s8 *) arg0) + 0)) = (s16) (new_var2 + temp_v1);
  *((s16 *) (((s8 *) arg0) + 2)) = 0;
  new_var = temp_t0;
  *((s16 *) (((s8 *) arg0) + 4)) = (s16) (((new_var - arg1) * 0x64) - temp_v1);
}

static inline Raise1A8 *get_ent(s32 i) {
    return (Raise1A8 *)(D_80091618 + i * 0x1A8);
}

s32 func_800D07AC(s32 arg0, s32 arg1, s32 arg2) {
    u8 *rec = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    s32 n;
    s16 x;
    s16 y;
    u16 who;
    s32 side;
    s32 b;

    n = 1;
    if (arg2 == -1) {
        n = 8;
    }
    y = n - 1;
    x = *(u16 *)(rec + 0x332) + arg1 - 1;
    if (arg2 == -1) {
        who = ((Raise1A8 *)D_80091618)[*D_8006AF80].unk8A;
    } else {
        who = *D_8006AF80;
    }
    side = (arg2 == -1);
    b = (D_800EF364 + ((Raise1A8 *)D_80091618)[who].unk10 * 64)[x * 8 + y];
    if (b == 0xFF) {
        return 0xFF;
    }
    if ((D_800EFF58 + side * 64 + 0x94)[x * 8 + y] == 1) {
        return 0xFF;
    }
    return b;
}

s32 func_800D091C(s32 arg0, s32 arg1, s32 arg2) {
    u8 *rec = D_80100F38 + (func_800B1260() & 0xFFFF) * 0x79C;
    s16 col;
    s16 row;
    s32 side;
    u8 v;

    col = ((arg2 == -1) ? 8 : 1) - 1;
    row = *(u16 *)(rec + 0x332) + (arg1 - 1);
    v = (D_800EF364 + *(u16 *)(D_80091618 + ((arg2 == -1) ? *(u16 *)(D_80091618 + D_8006AF80[0] * 0x1A8 + 0x8A) : D_8006AF80[0]) * 0x1A8 + 0x10) * 64)[row * 8 + col];
    side = (arg2 == -1);
    if (v != 0xFF && (D_800EFF58 + side * 64 + 0x94)[row * 8 + col] == 1) {
        return 0xFF;
    }
    return v;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800CF2E4", func_800D0A8C);
