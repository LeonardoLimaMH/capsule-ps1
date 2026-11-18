#include "common.h"

void func_800A9738(s32 arg0) {
    extern s32 D_800EE914[];
    (*D_800EE914) = arg0;
}


INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9744);

void func_800A99AC(s32 arg0, s32 arg1) {
    typedef struct {
        s32 state;
        s32 cells[27];
        s32 indices[9];
        s32 unk94;
    } Result_800EE914;
    extern s16 D_80078C22;
    extern s32 D_800900C0[];
    extern Result_800EE914 D_800EE914;
    Result_800EE914 *res;
    s32 i;
    s32 count;
    s32 step;
    s32 temp;

    D_800EE914.state = 0;
    switch (D_80078C22) {
    case 0:
        temp = 1;
        break;
    case 1:
        temp = 4;
        break;
    default:
        temp = 9;
        break;
    }
    count = temp;

    i = 0;
    if (count != 0) {
        step = D_80078C22 + 1;
        res = &D_800EE914;
        do {
            s32 y = i / step;
            s32 x = i % step;
            s32 val = (arg0 - y) * 8 + (arg1 - x);
            res->indices[i] = val;
            res->cells[i] = D_800900C0[0x15C / 4] + val * 0x2C;
            i++;
        } while (i < count);
    }

    D_800EE914.unk94 = 0x40;
    D_800EE914.state = 1;
}

s32 func_800A9A74(void)
{
  extern struct {
    s32 f0;
    s32 f4;
  } D_800EEB9C;
  if (D_800EEB9C.f4 <= 0)
  {
    if (D_800EEB9C.f0)
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
    else
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
  }
  D_800EEB9C.f4 = (s32) (D_800EEB9C.f4 - 1);
  func_800B7298(D_800EEB9C.f0);
  return 0;
}

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9AC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9D6C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9F84);

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

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA494);
