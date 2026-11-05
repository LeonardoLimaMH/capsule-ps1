#include "common.h"
#define S_91618_DEFINED
typedef struct {
    u8 _p00[0x92];
    u16 unk92;
    u8 _p94[0x42];
    s16 unkD6[8];
    u8 _pE6[8];
    u16 unkEE;
    u8 _pF0[0xB4];
    u16 unk1A4;
    u8 _p1A6[2];
} S_91618;
extern S_91618 D_80091618[];
extern u8 D_80085428[];
extern s16 D_800F21C0[];
extern s32 func_800202A4(s32);

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E6E68);

s32 func_800E733C(u16 arg0, s32 arg1) {
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E73D8);

s32 func_800E7934(u16 arg0) {
    return 0;
}

#include "common.h"

#ifndef S_91618_DEFINED
typedef struct {
    u8 _p00[0x92];
    u16 unk92;
    u8 _p94[0x42];
    s16 unkD6[8];
    u8 _pE6[8];
    u16 unkEE;
    u8 _pF0[0xB4];
    u16 unk1A4;
    u8 _p1A6[2];
} S_91618;
extern S_91618 D_80091618[];
#endif
extern u8 D_80085428[];
extern s16 D_800F21C0[];
extern s32 func_800202A4(s32);

extern u8 D_800859F2[];
extern u8 D_800F2C68[];

s32 func_800E79C0(s32 value) {
    return value * *(s32 *)(D_800F2C68 + ((*D_800859F2) & 7) * 4);
}

s32 func_800E79F4(s32 arg0)
{
  int new_var;
  int new_var2;
  extern u8 D_800859F2[];
  extern M2C_UNK D_800F2C7C[];
  new_var = (*D_800859F2) & 7;
  new_var2 = new_var;
  new_var = new_var * 4;
  return arg0 * (*(new_var2 + D_800F2C7C));
}

s32 func_800E7A28(u16 arg0) {
    if (D_80085428[0xD7C + arg0] != 2) {
        return 0;
    }
    if (D_80091618[arg0].unkD6[0] < 0x97) {
        D_80085428[0xD7C + arg0] = 0;
        return 0;
    }
    D_80091618[arg0].unk1A4 = 0x47;
    return 1;
}

s32 func_800E7AA0(s32 id) {
    u8 *flags = D_80085428;
    u8 *entry;
    s32 result = 0;

    id &= 0xFFFF;
    entry = flags + id;
    if (entry[0xD7C] == 1) {
        register u8 *base asm("v0") = (u8 *)D_80091618;
        S_91618 *rec = (S_91618 *)(base + id * 0x1A8);
        if (*(s16 *)((u8 *)rec + 0xD4) >= 0x97) {
            rec->unk1A4 = 0x47;
            result = 1;
        } else {
            entry[0xD7C] = 0;
            result = 0;
        }
    }
    return result;
}

s32 func_800E7B18(u16 arg0) {
    S_91618 *r = &D_80091618[arg0];
    if (r->unk1A4 == 0) {
        r->unk1A4 = 0;
        D_80085428[0xD7C + arg0] = 0;
        return 1;
    }
    r->unk1A4 = r->unk1A4 - 1;
    return 0;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800E6E68", func_800E7B80);
