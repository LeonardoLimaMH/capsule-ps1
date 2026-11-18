#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 pad[0xE4];
    u16 unkE4;
    u8 padE6[0x1D];
    u8 unk103;
} ChessEdState;

void func_800A3C24(void *arg0)
{
  s8 *new_var4;
  u8 new_var5;
  s8 *new_var3;
  int new_var;
  int new_var2;
  extern u8 D_80086012[];
  s32 var_v0;
  new_var3 = ((s8 *) arg0) + 0x50;
  new_var5 = (u8) (*D_80086012);
  if (new_var5 >= 5U)
  {
    if (new_var)
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
    else
    {
      new_var2 = ~1;
      new_var = (*((s32 *) new_var3)) & new_var2;
      var_v0 = new_var;
    }
  }
  else
  {
    new_var4 = ((s8 *) arg0) + 0x50;
    var_v0 = *((s32 *) new_var4);
    var_v0 = var_v0 | 1;
  }
  *((s32 *) (((s8 *) arg0) + 0x50)) = var_v0;
}

void func_800A3C5C(void *arg0) {
    extern u8 D_80085428[];
    extern ChessEdState D_8008ED68[];
    extern u16 D_8008EE4C[];
    extern u8 D_80100C18[];
    extern void func_800185F8(void *);
    extern void func_800A4900(u8 *, void *, s32, s32);
    s32 idx;
    s32 arg2;
    s32 arg3;
    u8 *p;
    s32 count;
    s32 next;
    s32 value;
    u8 *color;

    idx = M2C_FIELD(arg0, s32 *, 0x5C);
    arg2 = M2C_FIELD(arg0, s32 *, 0x60);
    arg3 = M2C_FIELD(arg0, s32 *, 0x64);
    p = D_80085428;
    switch (M2C_FIELD(arg0, u16 *, 0x4E)) {
    case 0:
        if (*D_8008EE4C != 0) {
            M2C_FIELD(arg0, s32 *, 0x50) &= ~1;
            M2C_FIELD(arg0, u16 *, 0x4E)++;
        }
        break;
    case 1:
        if (D_8008ED68->unkE4 == 11) {
            func_800185F8(arg0);
        } else {
            count = M2C_FIELD(arg0, s32 *, 0x54);
            if (D_8008ED68->unk103 >= 2U) {
                next = count + D_8008ED68->unk103;
            } else {
                next = count + 1;
            }
            M2C_FIELD(arg0, s32 *, 0x54) = next;
            if (p[0xBCA] == idx && (p + idx)[0xCA9] < 6U) {
                M2C_FIELD(arg0, s32 *, 0x50) &= ~1;
                func_800A4900(p, (u8 *)arg0 + 0x18, arg2, arg3);
                color = D_80100C18 + idx * 4;
                value = rsin(((u32)(M2C_FIELD(arg0, s32 *, 0x54) << 12) / 120) & 0x7FF);
                M2C_FIELD(arg0, s8 *, 0x38) = (value * (s32)color[0]) / 4096;
                M2C_FIELD(arg0, s8 *, 0x39) = (value * (s32)color[1]) / 4096;
                M2C_FIELD(arg0, s8 *, 0x3A) = (value * (s32)color[2]) / 4096;
            } else {
                M2C_FIELD(arg0, s32 *, 0x50) |= 1;
            }
        }
        break;
    }
}

void func_800A3E20(u8 *arg0) {
    typedef struct {
        u32 f88;
        u8 pad[0xC];
    } PadEntry;
    typedef struct {
        u8 pad[0x88];
        PadEntry entry[4];
        u8 padC8[0x3B];
        u8 unk103;
    } EdGlobal;
    extern u8 D_80085428[];
    extern u8 D_80085FF2[];
    extern EdGlobal D_8008ED68[];
    extern u8 D_80100C18[];
    extern void func_800185F8(u8 *);
    s32 idx = *(s32 *)(arg0 + 0x5C);
    u8 *p = D_80085428;
    u8 *q = p + idx * 2;
    register s32 flag asm("a3") = 0;
    s32 temp_v1;
    s32 var_a0;
    s32 value;
    u8 *temp_s0;

    if (q[0xBD1] != *(s32 *)(arg0 + 0x68)) {
        goto hit;
    }
    if (q[0xBD2] != *(s32 *)(arg0 + 0x6C)) {
        goto hit;
    }
    {
        u32 v = D_8008ED68->entry[idx].f88;
        if (v & 0x40) goto hit;
        if (v & 0x10) goto hit;
        if (v & 1) goto hit;
        if (v & 2) {
        hit:
            flag = 1;
            p[0xD77] = 0;
            p[0xBE0] = 1;
        }
    }
    if (flag != 0) {
        func_800185F8(arg0);
        return;
    }
    temp_v1 = *(s32 *)(arg0 + 0x54);
    if (D_8008ED68->unk103 >= 2U) {
        var_a0 = temp_v1 + D_8008ED68->unk103;
    } else {
        var_a0 = temp_v1 + 1;
    }
    *(s32 *)(arg0 + 0x54) = var_a0;
    temp_s0 = D_80100C18 + (1 - *D_80085FF2) * 4;
    value = rsin(((u32)(var_a0 << 12) / 120) & 0x7FF);
    *(s8 *)(arg0 + 0x38) = (value * (s32)temp_s0[0]) / 4096;
    *(s8 *)(arg0 + 0x39) = (value * (s32)temp_s0[1]) / 4096;
    *(s8 *)(arg0 + 0x3A) = (value * (s32)temp_s0[2]) / 4096;
}
