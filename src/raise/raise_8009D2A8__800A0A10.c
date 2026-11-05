#include "common.h"

typedef struct { s32 pad[14]; u32 flags; } Obj_800A1D58;
typedef struct {
    u8 pad[0x764];
    Obj_800A1D58 *a;
    Obj_800A1D58 *b;
} Work_800A1D58;

void func_800A0A10(void) {
    func_800A0E20();
}

void func_800A0A30(void) {
    s32 z, w, v;

    if (v || w) {
        z = 0;
    } else {
        z = 0;
    }
    func_800A0D88(z, z);
    func_800A0BB4();
}

void func_800A0A5C(void) {
    func_800A0E20();
}

#include "common.h"

s32 func_800A0A7C(void) {
    extern s16 D_800ED88C[];
    s32 temp_v0;

    temp_v0 = func_800A0E20();
    if (temp_v0 == -1) {
        (*D_800ED88C) = 0;
        func_800B7264(1);
        func_800B70A0(1);
    }
    return temp_v0;
}

void func_800A0ACC(s32 arg0) {
    extern s16 D_800EEA78[];
    extern s32 D_8008ED68[];
    extern s32 D_800EFF58[];
    s32 *d = D_8008ED68;
    s32 v = d[D_800EEA78[arg0] + 0x29];
    s32 n;
    s32 *w;

    if (v != 7 && (v & 7) == 7) {
        func_80034AB0(0x84);
        func_800A0D88(2, 0);
        switch (arg0) {
        case 2:
            w = D_800EFF58;
            n = w[0xD1];
            if (n > 0) {
                n = n - 1;
            } else {
                n = w[0xD2];
            }
            w[0xD1] = n;
            break;
        case 3:
            n = 0;
            if (D_800EFF58[0xD1] < D_800EFF58[0xD2]) {
                n = D_800EFF58[0xD1] + 1;
            }
            D_800EFF58[0xD1] = n;
            break;
        }
        func_800A0D88(1, 0);
    }
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A0BB4);

#include "common.h"

typedef struct {
    u8 pad0[0x344];
    s32 idx;
    u8 pad1[0x398 - 0x348];
    s32 tblB[0xF];
    s32 tblA[0x10];
    u8 *obj;
} Work_800A0D88;

void func_800A0D88(s32 arg0) {
    extern s32 D_800EE630[];
    extern u8 D_800EFF58[];
    s32 temp_s1;

    if (arg0 == 1) {
        temp_s1 = D_800EE630[6] + ((Work_800A0D88 *)D_800EFF58)->tblB[((Work_800A0D88 *)D_800EFF58)->tblA[((Work_800A0D88 *)D_800EFF58)->idx]];
        func_80015CD0(((Work_800A0D88 *)D_800EFF58)->obj + 0x14, func_80019F30(D_800EE630[0] | 0x70000, temp_s1), 0);
        *(s32 *)(((Work_800A0D88 *)D_800EFF58)->obj + 0x7C) = temp_s1;
    }
}

s32 func_800A0E20(void) {
    extern u8 D_800EFF58[];
    u8 *p = D_800EFF58;
    s32 result;

    if (*(s32 *)(p + 0x340) <= 0) {
        *(s32 *)(p + 0x33C) = 0;
        result = -1;
    } else {
        *(s32 *)(p + 0x340) -= 1;
        func_800BCFB0(*(s32 *)(p + 0x33C));
        result = 0;
    }
    return result;
}

u8 *func_800A0E6C(u32 arg0) {
    extern u8 D_800F2D30[];
    extern u8 D_800F2D98[];
    u8 *p = &D_800F2D30[arg0 & 0xFFFF];
    s32 i;
    s32 idx;

    if (*p == 0xFF) {
        for (i = 0; i < 6; i++) {
            if (D_800F2D98[i] == (arg0 & 0xFF)) {
                break;
            }
        }
        if (i == 6) {
            for (i = 0; i < 6; i++) {
                if (D_800F2D98[i] == 0xFF) {
                    break;
                }
            }
            idx = i;
            if (idx == 6) {
                idx = 5;
            }
            D_800F2D98[idx] = arg0;
        } else {
            idx = i;
        }
    } else {
        idx = *p;
    }
    return (u8 *)0x80146A18 + idx * 0x15800;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A0F4C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A11B8);

#include "common.h"

#include "ghidra.h"
void func_800A16E8(void)
{
  extern M2C_UNK D_8006B1EC[];
  extern s32 D_80078C4C[];
  extern u16 D_80091618[];
  int iVar1;
  uint uVar2;
  int new_var;
  undefined2 *puVar3;
  uVar2 = 0;
  new_var = -1;
  puVar3 = (undefined2 *) D_80091618;
  do
  {
    iVar1 = func_800AECC8(uVar2 & 0xffff);
    if (iVar1 != new_var)
    {
      func_80028084(*puVar3);
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 0xd4;
  }
  while (((int) uVar2) < 6);
  func_80033974(0);
  func_80033974(0x8000);
  func_80033E5C(D_8006B1EC, *D_80078C4C);
  return;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A1778);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A18EC);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A1B18);

void func_800A1D58(s32 arg0, s32 arg1) {
    extern Work_800A1D58 D_800EEB9C;

    D_800EEB9C.a->flags = (D_800EEB9C.a->flags & ~1) | (arg0 & 1);
    D_800EEB9C.b->flags = (D_800EEB9C.b->flags & ~1) | (arg0 & 1);
    D_800EEB9C.a->flags = (D_800EEB9C.a->flags & ~0x40) | ((arg1 & 1) << 6);
    D_800EEB9C.b->flags = (D_800EEB9C.b->flags & ~0x40) | ((arg1 & 1) << 6);
}

#include "common.h"

void func_800A1DD4(void) {
    extern void * D_800EF300[];
    extern void * D_800FAE10[];
    extern void * D_800FDE08[];
    s16 temp_a3_2;
    u16 temp_a2;
    u16 temp_a3;
    u16 temp_t2;

    temp_t2 = M2C_FIELD((*D_800EF300), u16 *, 0x46);
    temp_a2 = M2C_FIELD((*D_800EF300), u16 *, 0x4A);
    temp_a3 = M2C_FIELD((*D_800EF300), u16 *, 0x4E);
    M2C_FIELD((*D_800FDE08), u16 *, 0x46) = temp_t2;
    M2C_FIELD((*D_800FDE08), s16 *, 0x4A) = (s16) (temp_a2 + 2);
    M2C_FIELD((*D_800FDE08), u16 *, 0x4E) = temp_a3;
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) | 8);
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) & ~2);
    M2C_FIELD((*D_800FDE08), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FDE08), s32 *, 0x38) & ~4);
    M2C_FIELD((*D_800FDE08), s16 *, 0x50) = 0;
    M2C_FIELD((*D_800FDE08), s16 *, 0x52) = 0;
    M2C_FIELD((*D_800FDE08), s16 *, 0x74) = 0x24;
    M2C_FIELD((*D_800FDE08), s16 *, 0x76) = 0x24;
    M2C_FIELD((*D_800FAE10), u16 *, 0x46) = temp_t2;
    M2C_FIELD((*D_800FAE10), s16 *, 0x4A) = (s16) (temp_a2 + 1);
    temp_a3_2 = temp_a3 + 0xA;
    M2C_FIELD((*D_800FAE10), s16 *, 0x4E) = temp_a3_2;
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) | 8);
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) & ~2);
    M2C_FIELD((*D_800FAE10), s32 *, 0x38) = (s32) (M2C_FIELD((*D_800FAE10), s32 *, 0x38) & ~4);
    M2C_FIELD((*D_800FAE10), s16 *, 0x50) = 0;
    M2C_FIELD((*D_800FAE10), s16 *, 0x52) = 0;
    M2C_FIELD((*D_800FAE10), s16 *, 0x74) = 0x24;
    M2C_FIELD((*D_800FAE10), s16 *, 0x76) = 0x24;
    func_800A1F44(1, 0, 0);
}

#include "common.h"

typedef struct { u8 pad[0x38]; s32 flags; } Obj_800A1F44;

void func_800A1F44(s32 arg0, s32 arg1, s32 arg2) {
    extern s32 D_800FDE08[];
    extern s32 D_800FAE10[];
    s32 i = arg0 != 1;

    ((Obj_800A1F44 **)D_800FDE08)[i]->flags = (((Obj_800A1F44 **)D_800FDE08)[i]->flags & ~1) | (arg1 & 1);
    ((Obj_800A1F44 **)D_800FAE10)[i]->flags = (((Obj_800A1F44 **)D_800FAE10)[i]->flags & ~1) | (arg1 & 1);
    ((Obj_800A1F44 **)D_800FDE08)[i]->flags = (((Obj_800A1F44 **)D_800FDE08)[i]->flags & ~0x40) | ((arg2 & 1) << 6);
    ((Obj_800A1F44 **)D_800FAE10)[i]->flags = (((Obj_800A1F44 **)D_800FAE10)[i]->flags & ~0x40) | ((arg2 & 1) << 6);
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A1FDC);

void func_800A2A88(void) {

}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A0A10", func_800A2A90);
