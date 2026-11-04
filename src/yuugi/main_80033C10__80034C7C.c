#include "common.h"
#include "yuugi.h"

typedef struct {
    u32 code : 8;
    u32 arg : 8;
    u32 unk02 : 16;
    u32 unk04;
    u32 unk08;
    u32 unk0C;
} S_AudioCmd;

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034C7C);

void func_80034D78(s16 arg0) {
    func_80034DA0(arg0, 0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034DA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034F74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035304);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035680);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_8003577C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035810);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035894);

#include "common.h"

extern u8 D_800922F0[];

/* fila de comandos de 16 bytes; o índice é relido a cada campo, como no original */
#define SLOT (D_800922F0 + M2C_GFIELD(D_800922F0, s16, 0x110) * 16)

s32 func_80036DB0(u8 *s)
{
  long new_var;
  u8 *new_var2;
  if (((struct 
  {
    u8 _p[0x110];
    s16 v;
  } *) D_800922F0)->v >= 16)
  {
    return 0;
  }
  new_var2 = D_800922F0;
  if (s)
  {
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x10] = s[0];
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x11] = s[1];
    *((u16 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x12)) = *((u16 *) (s + 2));
    new_var = ((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v;
    *((s32 *) ((new_var2 + (new_var * 16)) + 0x14)) = *((s32 *) (s + 4));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x18)) = *((s32 *) (s + 8));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x1C)) = *((s32 *) (s + 0xC));
    ((struct 
    {
      u8 _p[0x110];
      u16 v;
    } *) new_var2)->v++;
    return 1;
  }
  else
  {
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x10] = s[0];
    (new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16))[0x11] = s[1];
    *((u16 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x12)) = *((u16 *) (s + 2));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x14)) = *((s32 *) (s + 4));
    *((s32 *) ((new_var2 + (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 16)) + 0x18)) = *((s32 *) (s + 8));
    *((s32 *) ((new_var2 + (8 * (((struct 
    {
      u8 _p[0x110];
      s16 v;
    } *) new_var2)->v * 2))) + 0x1C)) = *((s32 *) (s + 0xC));
    ((struct 
    {
      u8 _p[0x110];
      u16 v;
    } *) new_var2)->v++;
    return 1;
  }
}

extern u8 D_800922F0[], D_8009376C[];
extern s16 D_80093738[];
extern u8 D_80078D51, D_80078D50;
extern void SpuGetAllKeysStatus(), SpuSetKey(), func_8003CD70(), func_80035894();
extern void DsSyncCallback(), DsControlF(), func_80035680();
extern s32 func_8003D518();
void func_80036E5C(void) {
    register u8 *g asm("a0");
    register u8 *s0 asm("s0");
    u8 *d;
    register s32 i asm("a0");
    register s32 mask asm("a1");
    u8 c, a1;

    register u8 *status asm("s0") = D_8009376C;
    SpuGetAllKeysStatus(status);
    mask = 0;
    status -= 0x5C;
    for (i = 0; i < 4; i++) {
        if (status[i + 0x70] == 3) {
            mask |= 1 << (i + 0x14);
        }
    }
    if (mask != 0) {
        SpuSetKey(0, mask);
    }
    if (*(u16 *)D_800922F0 & 0x80) {
        u8 *p = D_800922F0;
        if (*(s16 *)(p + 0x1192) != -1 && (s16)func_8003D518(*(s16 *)(p + 0x1192)) != 1) {
            func_8003CD70(*(s16 *)(p + 0x1192));
            *(u16 *)D_800922F0 &= 0xFF7F;
        }
    }
    g = D_800922F0;
    if (g[0x112] != 0) {
        func_80035894();
        return;
    }
    s0 = g + 0x10;
    if (*(s16 *)(g + 0x110) != 0) {
        c = g[0x10];
        g[0x113] = 0;
        g[0x112] = g[0x10];
        *(u16 *)(g + 0x116) = *(u16 *)(s0 + 2);
        *(s32 *)(g + 0x118) = *(s32 *)(s0 + 4);
        *(s32 *)(g + 0x11C) = *(s32 *)(s0 + 8);
        *(s32 *)(g + 0x120) = *(s32 *)(s0 + 0xC);
        a1 = s0[1];
        g[0x114] = a1;
        switch (c) {
        case 0x44:
        case 0x45:
            if (*(s16 *)(g + 0x1196) == 0) {
                g[9] = a1;
                *(u16 *)(g + 0x1196) = *(u16 *)(s0 + 8);
            }
            break;
        case 0x29:
        case 0x2A:
            if (*(s16 *)(g + 0x146) == 0) {
                g[8] = a1;
                *(u16 *)(g + 0x146) = *(u16 *)(s0 + 8);
            }
            break;
        }
        D_80093738[0] = 8;
        D_80078D51 = 0;
        D_80078D50 = 0;
        func_80035894();
        s0 += 0x10;
        *(u16 *)(D_800922F0 + 0x110) -= 1;
    }
    for (i = 0; i < *(s16 *)(D_800922F0 + 0x110); i++) {
        d = D_800922F0 + i * 16;
        d[0x10] = s0[0];
        d[0x11] = s0[1];
        *(u16 *)(d + 0x12) = *(u16 *)(s0 + 2);
        *(s32 *)(d + 0x14) = *(s32 *)(s0 + 4);
        *(s32 *)(d + 0x18) = *(s32 *)(s0 + 8);
        *(s32 *)(d + 0x1C) = *(s32 *)(s0 + 0xC);
        s0 += 0x10;
    }
    if (*(u16 *)D_800922F0 & 4) {
        c = D_800922F0[0x124];
        if (c & 2) {
            D_800922F0[0x124] = 0;
            DsSyncCallback(func_80035680);
            DsControlF(0x10, 0);
        } else {
            D_800922F0[0x124] = c + 1;
        }
    }
}

#include "common.h"

extern u8 D_800922F0[];

void func_80037138(s32 a)
{
  struct 
  {
    u8 _p[0x1188];
    s32 v;
  } *new_var;
  new_var = (struct 
  {
    u8 _p[0x1188];
    s32 v;
  } *) D_800922F0;
  func_800371A4(0);
  *((u8 **) (D_800922F0 + 0x114C)) = D_800922F0 + 0x14C;
  *((u8 **) (D_800922F0 + 0x1150)) = D_800922F0 + 0x34C;
  *((u8 **) (D_800922F0 + 0x1154)) = D_800922F0 + 0x54C;
  ((struct 
  {
    u8 _p[0x146];
    s16 v;
  } *) D_800922F0)->v = 0;
  *((u8 **) (D_800922F0 + 0x1158)) = D_800922F0 + 0x74C;
  ((struct 
  {
    u8 _p[0x1170];
    s32 v;
  } *) D_800922F0)->v = 0x801EF990;
  new_var->v = a;
  *((s16 *) D_800922F0) = 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_800371A4);

s16 func_80037234(void) {
    extern s16 D_80092434[];
    return (*D_80092434);
}
