#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad[0x103];
    u8 n;
} S_8ED68;

typedef struct {
    u8 pad0[0x14];
    s32 f14;
    u8 b18[0x34];
    u16 f4c;
    u16 f4e;
    u32 flags;
    s32 f54;
    u8 f58;
    u8 pad59[3];
    s32 w5c[10];
} ArVObj;

typedef struct {
    u8 pad0[0x14];
    u8 b14[0x20];
    u32 flags34;
    u32 flags38;
    s32 f3c;
    s32 f40;
    s32 f44;
    s32 f48;
    s32 f4c;
    s16 f50;
    s16 f52;
    s16 f54;
    u8 f56;
    u8 f57;
    u8 f58;
    u8 f59;
    u8 f5a;
    u8 f5b;
    s16 f5c;
    s16 f5e;
    s16 f60;
    s16 f62;
    s16 f64;
    s16 f66;
    s32 f68;
    s32 f6c;
    s32 pad70;
    s16 f74;
    s16 f76;
    s16 f78;
    s16 f7a;
    s32 w7c[5];
} Struct_80015EF8;

typedef struct {
    s32 val0;
    u16 val4;
    u16 pad6;
} SubEntry;

typedef struct {
    u32 count;
    SubEntry *entries;
} SubData;

typedef struct {
    u8 pad0[4];
    s32 f4;
    SubData *f8;
    u32 fC;
    s16 f10;
    u16 f12;
    u8 pad14[8];
    u32 f1C;
} AnimObj;

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015540);

#include "common.h"

void func_800158C4(unsigned int arg0)
{
  extern M2C_UNK D_8008ED68[];
  func_80020844((s16) ((((s32) ((struct 
  {
    u8 _p[0x108];
    s32 v;
  } *) D_8008ED68)->v) / 2) * (-1)), (s16) ((arg0 + 0xAC) - (((s32) ((struct 
  {
    u8 _p[0x10C];
    s32 v;
  } *) D_8008ED68)->v) / 2)), 0x140, 0x44, 0, 0, 0, 0, 4);
}

#include "common.h"

void func_80015944(s32 arg0) {
    func_80020688(-0x3C, -8, 0x44, 0x10, 0x3A0, 0x40, 0x3F0, (arg0 + 0x160) & 0xFFFF, 0x80, 0x80, 0x80, 0, 0, 0);
    func_80020688(0xC, -0x20, 0x30, 0x30, 0x3B4, 0x40, 0x3F0, 0x173, 0x80, 0x80, 0x80, 0, 0, 0);
}

#include "common.h"

void func_80015A0C(void) {
    func_80020688(0xC, -0x20, 0x30, 0x30, 0x3B4, 0x40, 0x3F0, 0x173, 0x80, 0x80, 0x80, 0, 0, 0);
}

#include "common.h"

extern u32 D_8008ED80[];

void func_80015A74(void) {
    if (((*D_8008ED80) / 40) & 1) {
        func_80020688(-0x28, -8, 0x50, 0x10, 0x3A0, 0x50, 0x3F0, 0x172, 0x80, 0x80, 0x80, 0, 0, 0);
    }
}

#include "ghidra.h"
void func_80015B00(int param_1)

{
  *(undefined1 *)(param_1 + 0x5a) = 0x80;
  *(undefined1 *)(param_1 + 0x59) = 0x80;
  *(undefined1 *)(param_1 + 0x58) = 0x80;
  if (*(short *)(param_1 + 0x46) < -0xe0) {
    func_800185F8();
  }
  return;
}

#include "common.h"

extern u8 *D_80078B7C;

void func_80015B3C(s32 arg0, s32 arg1, s32 arg2) {
    func_800136C8(arg0, arg1, *(s32 *)(D_80078B7C + 0xC57C), arg2);
}

void func_80015B74(void *arg0) {
    s32 temp_a0;
    u32 temp_s1;
    u32 var_s0;

    temp_s1 = M2C_FIELD(arg0, u32 *, 8);
    var_s0 = (temp_s1 + (M2C_FIELD(arg0, s32 *, 0) * 0x24)) - 0x24;
    if (var_s0 >= temp_s1) {
        do {
            temp_a0 = M2C_FIELD(var_s0, s32 *, 4);
            var_s0 -= 0x24;
            {
                register s32 matching_a0 __asm__("$4") = (temp_a0);
                register s32 matching_a1 __asm__("$5") = (1);
                register s32 matching_a2 __asm__("$6") = 0;
                __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2)
                : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2));
                func_80012A20(matching_a0, matching_a1, matching_a2, matching_a2);
            }
        } while (var_s0 >= temp_s1);
    }
}

void func_80015BE8(void *arg0) {
    func_80012A20(M2C_FIELD(M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0) * 0x24 - 0x1c, s32 *, 0), 1, 0, 0);
}

void func_80015C2C(void *arg0) {
    u32 temp_s1;
    u32 var_s0;

    func_80012A20(M2C_FIELD(M2C_FIELD(arg0, s32 *, 8) + M2C_FIELD(arg0, s32 *, 0) * 0x24 - 0x1c, s32 *, 0), 1, 0, 0);
    temp_s1 = M2C_FIELD(arg0, u32 *, 8);
    var_s0 = (temp_s1 + (M2C_FIELD(arg0, s32 *, 0) * 0x24)) - 0x24;
    if (var_s0 >= temp_s1) {
        do {
            func_80012A20(M2C_FIELD(var_s0, s32 *, 4), 1, 0, 0);
            var_s0 -= 0x24;
        } while (var_s0 >= temp_s1);
    }
}

#include "ghidra.h"
void func_80015CD0(int param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;

  *(int *)(param_1 + 8) = param_2;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffff8 | param_3 & 7;
  puVar2 = *(undefined4 **)(param_2 + 4);
  *(undefined4 *)(param_1 + 4) = *puVar2;
  uVar1 = *(undefined2 *)(puVar2 + 1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x10) = uVar1;
  return;
}

s32 func_80015D14(AnimObj *p) {
    extern u8 D_8008ED68[];
    u8 *base = D_8008ED68;
    SubData *a3;
    SubEntry *e;
    s32 v1;
    s32 a1;
    s32 a2;
    s32 v0;
    s32 mode;

    if (base[0x99A] != 0) {
        return 0;
    }
    a3 = p->f8;
    if (a3 == NULL) {
        return 0;
    }
    v1 = 1;
    if (base[0x103] >= 2) {
        v1 = base[0x103];
    }
    a1 = p->f10;
    a2 = (p->f1C >> 9) & 7;
    if (a2 >= 2) {
        v0 = a1 - v1 * a2;
    } else {
        v0 = a1 - v1;
    }
    p->f10 = v0;
    if ((s16)v0 >= 0) {
        return 0;
    }
    p->fC++;
    if (p->fC >= a3->count) {
        mode = p->f1C & 7;
        switch (mode) {
        case 3:
            if (p->f12 == 1) {
                p->f12++;
                p->f8 = NULL;
                return 0;
            }
        case 0:
            p->fC = 0;
            p->f12++;
            break;
        case 2:
            p->f4 = 0;
        case 1:
            p->f8 = NULL;
            return 0;
        }
    }
    e = &a3->entries[p->fC];
    p->f4 = e->val0;
    p->f10 = e->val4;
    return 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80015E60);

void func_80015EF8(Struct_80015EF8 *p) {
    u32 mask = 0xFFFF0FFF;
    s32 i = 0x1F;
    u8 *q = p->b14;

    p->f5a = 0x80;
    p->f59 = 0x80;
    p->f58 = 0x80;
    p->f50 = 0x1000;
    p->f52 = 0x1000;
    p->f60 = 0x140;
    p->f62 = 0xF0;
    p->f44 = 0;
    p->f48 = 0;
    p->f4c = 0;
    p->f54 = 0;
    p->f56 = 0;
    p->f57 = 0;
    p->f68 = 0;
    p->f6c = 0;
    p->f78 = 0;
    p->f74 = 0;
    p->f76 = 0;
    p->f64 = 0;
    p->f66 = 0;
    p->f3c = 0;
    p->f40 = 0;
    p->f5b = 0;
    p->f5c = 0;
    p->f5e = 0;
    p->f7a = 0;
    p->flags34 &= ~0x7F;
    p->flags38 &= ~8;
    p->flags38 &= ~1;
    p->flags38 &= ~2;
    p->flags38 &= ~4;
    p->flags38 &= ~0x30;
    p->flags38 &= ~0x40;
    p->flags38 &= ~0x80;
    p->flags34 &= ~0x80;
    p->flags34 &= ~0x100;
    p->flags34 &= ~0x200;
    p->flags34 &= ~0xC00;
    p->flags34 &= mask;
    for (; i >= 0; i--) {
        q[i] = 0;
    }
    for (i = 4; i >= 0; i--) {
        p->w7c[i] = 0;
    }
}

void func_8001602C(ArVObj *p) {
    s32 i = 0x33;
    u8 *q = p->b18;
    p->f4e = 0;
    p->f54 = 0;
    p->f58 = 0;
    p->f4c = 0;
    p->f14 = 0;
    p->flags &= ~8;
    p->flags &= ~1;
    p->flags &= ~2;
    p->flags &= ~4;
    p->flags &= ~0x30;
    p->flags &= ~0x40;
    for (; i >= 0; i--) {
        q[i] = 0;
    }
    for (i = 9; i >= 0; i--) {
        p->w5c[i] = 0;
    }
}

u32 func_800160B0(u32 arg0) {
    extern u32 D_8008ED68[];
    u8 *base = (u8 *)D_8008ED68;
    if (arg0 < 0x2001) {
        *(u32 *)(base + 0xA6C) = arg0;
    }
    return *(u32 *)(base + 0xA6C);
}

u32 func_800160D4(u32 arg0) {
    extern u32 D_8008ED68[];
    u8 *base = (u8 *)D_8008ED68;
    if (arg0 < 0x2001) {
        *(u32 *)(base + 0xA70) = arg0;
    }
    return *(u32 *)(base + 0xA70);
}

u32 func_800160F8(u32 arg0) {
    extern u32 D_8008ED68[];
    u8 *base = (u8 *)D_8008ED68;
    if (arg0 < 0x2001) {
        *(u32 *)(base + 0xA74) = arg0;
    }
    return *(u32 *)(base + 0xA74);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_8001611C);

void func_80016148(void *arg0) {
    extern u8 D_8008F702[];
    if ((*D_8008F702) == 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, s32 *, 0x44) + M2C_FIELD(arg0, s32 *, 0x68));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) + M2C_FIELD(arg0, s32 *, 0x6C));
        M2C_FIELD(arg0, s32 *, 0x4C) = (s32) (M2C_FIELD(arg0, s32 *, 0x4C) + M2C_FIELD(arg0, s32 *, 0x70));
        M2C_FIELD(arg0, u16 *, 0x54) = (u16) (M2C_FIELD(arg0, u16 *, 0x54) + M2C_FIELD(arg0, u16 *, 0x78));
        M2C_FIELD(arg0, u16 *, 0x50) = (u16) (M2C_FIELD(arg0, u16 *, 0x50) + M2C_FIELD(arg0, u16 *, 0x74));
        M2C_FIELD(arg0, u16 *, 0x52) = (u16) (M2C_FIELD(arg0, u16 *, 0x52) + M2C_FIELD(arg0, u16 *, 0x76));
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800161C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800178F8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80017CA4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018440);

void func_800185F8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}

void func_80018600(void) {

}

void func_80018608(void) {

}

void func_80018610(s32 arg0, s32 arg1) {
    extern void SetDrawMode();
    extern u8 *D_8008ED68[];
    u8 **g = D_8008ED68;
    u8 *base = g[0];
    u8 *next = 0;
    u32 *p;
    s32 off;
    p = *(u32 **)(base + 0x1090);
    if (p != 0 && (u8 *)p + 0xC <= base + 0x4594) {
        next = (u8 *)p + 0xC;
    }
    *(u8 **)(base + 0x1090) = next;
    SetDrawMode(p, 0, 0, arg0, 0);
    off = arg1 * 4;
    *p = (*p & 0xFF000000) | (*(u32 *)((u8 *)off + (u32)g[0] + 0x70) & 0xFFFFFF);
    off += (s32)g[0];
    *(u32 *)(off + 0x70) = (*(u32 *)(off + 0x70) & 0xFF000000) | ((u32)p & 0xFFFFFF);
}

void func_800186E4(s16 *arg0, s32 arg1) {
    extern void SetDrawArea();
    extern u8 *D_8008ED68[];
    extern u8 D_8008A7BC[];
    register u8 **g asm("s1") = D_8008ED68;
    register u8 *base asm("v1");
    register s32 s2 asm("s2");
    register u32 *p asm("s0");
    register s16 y asm("a1");
    register u8 *next asm("a1");
    register u8 *b asm("a0");
    register u32 mask2 asm("a1");
    register s32 off asm("a0");
    register u32 mask asm("a2");
    struct {
        s16 x;
        s16 y;
        s16 w;
        s16 h;
    } rect;

    rect.x = arg0[0];
    base = g[0];
    s2 = arg1;
    y = arg0[1];
    if (base == D_8008A7BC) {
        y += 0xF0;
    }
    rect.y = y;
    rect.w = arg0[2];
    next = 0;
    rect.h = arg0[3];

    b = base;
    p = *(u32 **)(base + 0x1090);
    if (p != 0 && (u8 *)p + 0xC <= b + 0x4594) {
        next = (u8 *)p + 0xC;
    }
    *(u8 **)(b + 0x1090) = next;
    SetDrawArea(p, &rect);
    mask2 = 0x00FFFFFF;
    off = s2 * 4;
    mask = 0xFF000000;
    *p = (*p & mask) | (*(u32 *)((u8 *)off + (u32)g[0] + 0x70) & mask2);
    off += (s32)g[0];
    *(u32 *)(off + 0x70) = (*(u32 *)(off + 0x70) & mask) | ((u32)p & mask2);
}

void func_800187E8(s32 arg0) {
    typedef struct {
        s16 x;
        s16 y;
        s16 w;
        s16 h;
    } Rect;
    extern void SetDrawArea();
    extern Rect D_80078B80[];
    extern u8 *D_8008ED68[];
    extern u8 D_8008A7BC[];
    Rect rect;
    u8 **g;
    register u8 *base asm("v1");
    u32 *p;
    u8 *next;
    s32 off;
    register u8 *b asm("a0");

    rect = D_80078B80[0];
    g = D_8008ED68;
    base = g[0];
    next = 0;
    if (base == D_8008A7BC) {
        rect.y = 0xF0;
    }

    b = base;
    p = *(u32 **)(base + 0x1090);
    if (p != 0 && (u8 *)p + 0xC <= b + 0x4594) {
        next = (u8 *)p + 0xC;
    }
    *(u8 **)(b + 0x1090) = next;
    SetDrawArea(p, &rect);
    off = arg0 * 4;
    *p = (*p & 0xFF000000) | (*(u32 *)((u8 *)off + (u32)g[0] + 0x70) & 0xFFFFFF);
    off += (s32)g[0];
    *(u32 *)(off + 0x70) = (*(u32 *)(off + 0x70) & 0xFF000000) | ((u32)p & 0xFFFFFF);
}

static inline s32 bright(s32 a) {
    if (a == 0x1000) {
        return 0x80;
    }
    if (a < 0x1000) {
        return (a << 7) / 4096;
    } else {
        s32 b = 0x7F;
        return ((a - 0x1000) * b) / 4096 + 0x80;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800188F0);

void func_80018C00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    extern u8 *D_8008ED68[];
    extern void SetPolyFT4();
    extern void SetShadeTex();
    extern void SetSemiTrans();
    extern void AddPrim();
    extern u16 GetClut();
    extern u16 GetTPage();
    register s32 reg_a0 asm("s3") = a0;
    register s32 reg_a1 asm("s4") = a1;
    register u8 **g asm("s2") = D_8008ED68;
    register u8 *nx asm("a2") = 0;
    u8 *base;
    register u8 *p asm("s0");
    s32 temp;
    register s32 x asm("v0");
    register s32 y asm("v0");
    s32 half;

    base = g[0];
    p = *(u8 **)(base + 0x1090);
    if (p != 0 && (u8 *)p + 0x28 <= base + 0x4594) {
        nx = p + 0x28;
    }
    *(u8 **)(base + 0x1090) = nx;
    SetPolyFT4(p);
    SetShadeTex(p, 0);
    SetSemiTrans(p, 0);
    p[4] = bright(*(s32 *)((u8 *)g + 0xA6C));
    p[5] = bright(*(s32 *)((u8 *)g + 0xA70));
    p[6] = bright(*(s32 *)((u8 *)g + 0xA74));

    temp = (a2 + 1) * 10;
    p[0x1C] = temp - 0x80;
    p[0xC] = temp - 0x80;
    p[0x24] = temp - 0x76;
    p[0x14] = temp - 0x76;
    p[0x15] = 0xEE;
    p[0xD] = 0xEE;
    p[0x25] = 0xF8;
    p[0x1D] = 0xF8;

    if (a4 >= 0x14) {
        p[0x14]--;
        p[0x24]--;
        p[0x1D]--;
        p[0x25]--;
    }

    {
        register u8 **a1_g asm("a1") = D_8008ED68;
        half = a4 / 2;
        x = reg_a0 + *(s32 *)((u8 *)a1_g + 0x108) / 2 - half;
        *(s16 *)(p + 0x18) = x;
        *(s16 *)(p + 8) = x;
        x += a4;
        *(s16 *)(p + 0x20) = x;
        *(s16 *)(p + 0x10) = x;

        y = reg_a1 + *(s32 *)((u8 *)a1_g + 0x10C) / 2 - half;
        *(s16 *)(p + 0x12) = y;
        *(s16 *)(p + 0xA) = y;
        y += a4;
        *(s16 *)(p + 0x22) = y;
        *(s16 *)(p + 0x1A) = y;
    }

    *(u16 *)(p + 0xE) = GetClut(0x3E0, a3 + 0x178);
    *(u16 *)(p + 0x16) = GetTPage(0, 0, 0x2A0, 0x180);
    AddPrim((s32 *)((u8 *)g[0] + 0x70 + a5 * 4), (s32 *)p);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_80018EF4);

s32 func_80018F90(u32 arg0, s32 arg1) {
    extern void func_80020688();
    func_80020688(-0x9C, 0x34, 0x80, 0x30, 0x3A0, 0, 0x3F0, (arg1 + 0x160) & 0xFFFF, 0x80, 0x80, 0x80, 0, 0, 0);
    if (!((arg0 / 20) & 1)) {
        func_80020688(-0x40, -0x18, 0x80, 0x10, 0x3A0, 0x30, 0x3F0, (arg1 + 0x160) & 0xFFFF, 0x80, 0x80, 0x80, 0, 0, 0);
        return 0;
    }
    return 1;
}

#include "common.h"

void func_80019088(void) {
    extern M2C_UNK D_8008F7E0[];
    func_8001A998(D_8008F7E0, 0x42C);
    M2C_FIELD(D_8008F7E0, s8 *, 0) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 2) = 2;
    M2C_FIELD(D_8008F7E0, u8 *, 3) = 0xFF;
    M2C_FIELD(D_8008F7E0, s8 *, 1) = 0;
    M2C_FIELD(D_8008F7E0, s32 *, 0x404) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x408) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x409) = 0;
    M2C_FIELD(D_8008F7E0, s8 *, 0x40C) = 1;
    M2C_FIELD(D_8008F7E0, s32 *, 0x414) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800190F4);

s32 func_80019654(void) {
    extern s32 func_800337EC();
    extern u32 D_80092400[];
    if ((func_800337EC() & 0xF) == 0 && (D_80092400[0] & 0xFFFFFF) == 0) {
        return 1;
    }
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__arVcount__80015540", func_800196A0);