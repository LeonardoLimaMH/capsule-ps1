#include "common.h"

void func_800CAE14(void *arg0)
{
  u8 temp_v0;
  void *temp_a0;
  u8 *new_var;
  temp_v0 = *((u8 *) (((s8 *) arg0) + 0xBCA));
  new_var = (u8 *) (((s8 *) (arg0 + temp_v0)) + 0xBCB);
  temp_a0 = (arg0 + ((temp_v0 * 0x2E8) + 0x5E8)) + ((*new_var) * 0x7C);
  if ((*((s8 *) (((s8 *) temp_a0) + 0x13))) > 0)
  {
    *((s8 *) (((s8 *) temp_a0) + 0x13)) = (s8) (((u8) (*((s8 *) (((s8 *) temp_a0) + 0x13)))) - 1);
  }
}

s32 func_800CAE6C(void *arg0) {
    u8 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u8 *, 0x624);
    switch (temp_v0) {
    case 5:
        return 3;
    case 6:
        return 4;
    case 7:
        return 2;
    case 3:
    case 4:
        return 1;
    default:
        return 0;
    }
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800C4ECC__800CAE14", func_800CAECC);

typedef struct {
    u8 unk0[0x15];
    u8 unk15;
    u8 unk16;
    u8 unk17[0x7C - 0x17];
} ChessPiece7C;

s32 func_800CAF74(u8 *arg0) {
    extern u8 D_80085428[];
    extern u8 D_801010B0[];
    extern s8 D_801010A8[];
    extern void func_8001A998(void *, s32);
    register s32 count asm("s1") = 0;
    u8 *table = D_801010B0;
    register u8 *base asm("s0") = D_80085428;
    u32 board = *(u32 *)(table + base[0x5D9] * 0x34);
    register s32 i asm("t1");
    s8 *dir;
    register s32 x0 asm("t2");
    s32 y0;
    u32 x;
    s32 y;
    register u32 *cell asm("a3");
    u32 *current;
    u32 value;
    register s32 col asm("v1");
    register s32 diff asm("v0");
    u8 *out;
    u32 team;
    s32 piece;

    func_8001A998(arg0, 0xA9);
    i = 0;
    dir = D_801010A8;
    y0 = base[base[0xBCA] * 2 + 0xBD2];
    x0 = base[base[0xBCA] * 2 + 0xBD1];
    current = (u32 *)(y0 * 4 + (x0 * 0x34 + board));
loop:
        x = x0 + dir[0];
        y = y0 + dir[1];
        if (x < 13 && y >= 0 && y < 13) {
            col = y * 4;
            cell = (u32 *)(col + (x * 0x34 + board));
            value = *cell;
            if ((s32)(value & 0x3F) > 1) {
                diff = (value >> 19) & 7;
                diff -= (*current >> 19) & 7;
                if (diff < 0) diff = -diff;
                if (diff < 3) {
                    out = (u8 *)(x * 13 + (u32)arg0 + y);
                    *out = 1;
                    team = ((u8 *)cell)[3] >> 7;
                    piece = (((u8 *)cell)[3] & 0x7F) - 1;
                    if (base[0xBCA] == 1 - team && piece != -1) {
                        *out = 2;
                        count++;
                    }
                }
            }
        }
        i++;
        dir += 2;
    if (i < 4) goto loop;
    return count;
}

s32 func_800CB10C(void *arg0, u8 *arg1, s32 arg2)
{
    s32 sc[2];
    s32 ret;
    s32 i;
    s32 j;
    u8 *e;
    s32 d;

    ret = func_800CB24C(arg0, arg1, arg2);
    if (ret != 1) {
        return ret;
    }
    for (i = 0; i < 2; i++) {
        sc[i] = 0;
        for (j = 0; j < 5; j++) {
            e = arg1 + 0x18 + i * 0x2E8 + j * 0x7C;
            if (!(*(u32 *)(e + 0x18) & 0x300)) {
                sc[i] += 0x46;
                sc[i] += e[0xE] * 50 / e[9];
            }
        }
        sc[i] -= (arg1 + i)[0x60A] * 80;
    }
    d = sc[arg2] - sc[1 - arg2];
    if (d > 80) {
        return 2;
    }
    return d >= -80;
}

s32 func_800CB24C(void *arg0, u8 *arg1, s32 arg2) {
    s32 count[2];
    s32 i;
    s32 j;
    u8 *e;
    register s32 ret asm("v0");
    for (i = 0; i < 2; i++) {
        count[i] = 0;
        if ((arg1 + i)[0x60A] >= 4 &&
            func_800B8F38(arg0, arg1, arg1 + 0x18 + i * 0x2E8 + 0x26C, i) != 0) {
            count[i] = -1;
        }
    }
    if (count[arg2] > count[1 - arg2]) return 2;
    if (count[arg2] < count[1 - arg2]) return 0;
    for (i = 0; i < 2; i++) {
        count[i] = 0;
        for (j = 0; j < 5; j++) {
            e = arg1 + 0x18 + i * 0x2E8 + j * 0x7C;
            if ((*(u32 *)(e + 0x18) & 0x300) == 0) {
                count[i]++;
            }
        }
    }
    if (count[arg2] == 1 || count[1 - arg2] == 1) {
        ret = 1;
        if (count[arg2] != count[1 - arg2]) {
            ret = (u32)(count[arg2] != 1) << 1;
        }
    } else {
        ret = 1;
    }
    return ret;
}

s32 func_800CB400(s32 arg0, s32 arg1) {
    s32 count[2];
    s32 i;
    s32 j;
    ChessPiece7C *e;

    for (i = 0; i < 2; i++) {
        count[i] = 0;
        for (j = 0; j < 6; j++) {
            e = (ChessPiece7C *)(arg0 + 0x5E8 + i * 0x2E8) + j;
            if (func_800A8E34(arg0 + 0x5D0, i, j) == 0 &&
                *(u8 *)(arg0 + e->unk15 * 13 + e->unk16 + 0xC00) == 2) {
                count[i]++;
            }
        }
    }
    if (count[arg1] > count[1 - arg1]) {
        return 0;
    }
    if (count[arg1] < count[1 - arg1]) {
        return 2;
    }
    return 1;
}

void func_800CB540(void *arg0) {
    extern u8 D_8008ED68[];
    void *global = (void *)D_8008ED68;
    if (M2C_FIELD(arg0, u16 *, 0x4E) == 0) {
        M2C_FIELD(arg0, u16 *, 0x4E) = 1U;
        return;
    }
    func_800CBAA0(0, arg0, global, 0);
}
