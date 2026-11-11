#include "common.h"
#include "yuugi.h"

s32 func_80034C7C(s16 arg0) {
    extern u8 D_800922F0[];
    extern s32 func_80036DB0();
    struct { u8 c; u8 a; s16 s; s32 w4; s32 w8; s32 wC; } c, ab[2], *p;
    u8 *g = D_800922F0;

    if (arg0 != *(s16 *)(g + 0x1190)) {
        *(u16 *)g |= 2;
        p = ab;
        if (*(u16 *)g & 0x80) {
            ab[1].c = 0x45;
            p[1].w8 = -0x80;
            ab[1].a = 0;
            func_80036DB0(&ab[1]);
            p->c = 0x49;
            func_80036DB0(p);
        }
        p->c = 0x47;
        func_80036DB0(p);
        c.c = 0x2C;
        c.s = arg0;
        func_80036DB0(&c);
        c.c = 0x4A;
        c.s = arg0;
        func_80036DB0(&c);
        c.c = 0x11;
        func_80036DB0(&c);
    } else {
        c.c = 0x46;
        c.s = arg0;
        c.wC = 0x801F6800;
        func_80036DB0(&c);
    }
    return 0;
}

void func_80034D78(s16 arg0) {
    func_80034DA0(arg0, 0x80);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034DA0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80034F74);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10__80034C7C", func_80035304);

void func_80035680(u8 a0, void *a1) {
    extern u8 D_800922F0[];
    extern u8 D_80093710[];
    extern s32 DsPosToInt();
    extern void func_80037404(), func_800373A0();
    s32 pos;
    DsSyncCallback(0);
    if (a0 == 2) {
        u8 *g;
        u16 f;
        pos = DsPosToInt(a1);
        f = *(u16 *)D_800922F0;
        g = D_800922F0;
        *(s32 *)(g + 0x1178) = pos;
        if ((f & 4) && *(s32 *)(g + 0x1180) < pos) {
            if (g[0x1186] != 0) {
                func_80037404(*(u16 *)(g + 0x1174) | 0x8000, 1);
            } else {
                func_800373A0();
            }
        }
    } else {
        u8 *p = D_80093710;
        if (*(s16 *)(p + 0x28) != 0) {
            *(s16 *)(p + 0x28) = *(u16 *)(p + 0x28) - 1;
            DsSyncCallback(func_80035680);
            DsControlF(0x10, 0);
        } else {
            D_800922F0[0x112] = 0;
            D_800922F0[0x113] = 0;
        }
    }
}

void func_8003577C(u8 a0, u8 *a1) {
    extern u8 D_800922F0[];
    if (a0 == 2) {
        if (!(*a1 & 0x40)) {
            D_800922F0[0x112] = 0;
            D_800922F0[0x113] = 0;
            *(u16 *)(D_800922F0 + 0x1174) = *(u16 *)(D_800922F0 + 0x116);
            *(u16 *)D_800922F0 = (*(u16 *)D_800922F0 & 0xFFFE) | 4;
            DsSyncCallback(0);
        } else {
            DsSyncCallback(func_8003577C);
            DsControlF(1, 0);
        }
    } else {
        DsSyncCallback(func_8003577C);
    }
}

void func_80035810(u8 a0, u8 *a1) {
    extern u8 D_800922F0[];
    DsSyncCallback(0);
    if (a0 == 2) {
        if (!(*a1 & 0xE0)) {
            D_800922F0[0x112] = 0;
            D_800922F0[0x113] = 0;
            *(u16 *)D_800922F0 &= 0xFFF8;
        }
    } else {
        DsSyncCallback(func_80035810);
    }
}

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

#include "yuugi.h"

typedef struct {
    u32 code : 8;
    u32 arg : 8;
    u32 unk02 : 16;
    u32 unk04;
    u32 unk08;
    u32 unk0C;
} S_AudioCmd;


extern u8 D_800922F0[];

/* fila de comandos de 16 bytes; o índice é relido a cada campo, como no original */
#define SLOT (D_800922F0 + M2C_GFIELD(D_800922F0, s16, 0x110) * 16)

extern u8 D_800922F0[], D_8009376C[];
extern s16 D_80093738[];
extern u8 D_80078D51, D_80078D50;
extern void SpuGetAllKeysStatus(), SpuSetKey(), func_8003CD70(), func_80035894();
extern void DsSyncCallback(), DsControlF(), func_80035680();
extern s32 func_8003D518();
void func_80036E5C(void) {
    u8 *g;
    register u8 *s0 asm("s0");
    u8 *d;
    register s32 i asm("a0");
    register s32 mask asm("a1");
    register s32 c asm("v1");
    u8 a1;

    register u8 *status asm("s0") = D_8009376C;
    SpuGetAllKeysStatus(status);
    mask = 0;
    i = 0;
    status -= 0x5C;
    for (; i < 4; i++) {
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
        register u8 head asm("v0") = g[0x10];
        g[0x112] = head;
        c = ((S_AudioCmd *)s0)->code;
        g[0x113] = 0;
        *(u16 *)(g + 0x116) = *(u16 *)(s0 + 2);
        *(s32 *)(g + 0x118) = *(s32 *)(s0 + 4);
        *(s32 *)(g + 0x11C) = *(s32 *)(s0 + 8);
        *(s32 *)(g + 0x120) = *(s32 *)(s0 + 0xC);
        a1 = s0[1];
        g[0x114] = a1;
        if (c == 0x44) goto comando_alto;
        if (c < 0x45) {
            if (c == 0x29) goto comando_baixo;
            if (c == 0x2A) goto comando_baixo;
            goto comando_fim;
        }
        if (c != 0x45) goto comando_fim;
comando_alto:
        if (*(s16 *)(g + 0x1196) == 0) {
            u16 value = *(u16 *)(s0 + 8);
            g[9] = a1;
            *(u16 *)(g + 0x1196) = value;
        }
        goto comando_fim;
comando_baixo:
        if (*(s16 *)(g + 0x146) == 0) {
            u16 value = *(u16 *)(s0 + 8);
            g[8] = a1;
            *(u16 *)(g + 0x146) = value;
        }
comando_fim:
        D_80093738[0] = 8;
        D_80078D51 = 0;
        D_80078D50 = 0;
        func_80035894();
        s0 += 0x10;
        {
            register u8 *queue asm("v1") = D_800922F0;
            *(u16 *)(queue + 0x110) -= 1;
        }
    }
    d = D_800922F0;
    i = 0;
    if (*(s16 *)(d + 0x110) > 0) {
        register u8 *end asm("a1") = s0 + 0xC;
        register u8 *dest asm("v1") = d;
        register u8 *count asm("a2") = d;
        do {
            dest[0x10] = s0[0];
            dest[0x11] = end[-0xB];
            *(u16 *)(dest + 0x12) = *(u16 *)(end - 0xA);
            *(s32 *)(dest + 0x14) = *(s32 *)(end - 8);
            i++;
            *(s32 *)(dest + 0x18) = *(s32 *)(end - 4);
            s0 += 0x10;
            *(s32 *)(dest + 0x1C) = *(s32 *)end;
            end += 0x10;
            dest += 0x10;
        } while (i < *(s16 *)(count + 0x110));
    }
    if (*(u16 *)D_800922F0 & 4) {
        register u8 *tail asm("v1") = D_800922F0;
        register u32 step asm("a0") = tail[0x124];
        if (step & 2) {
            tail[0x124] = 0;
            DsSyncCallback(func_80035680);
            DsControlF(0x10, 0);
        } else {
            register u32 next asm("v0") = step + 1;
            tail[0x124] = next;
        }
    }
}


extern u8 D_800922F0[];

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

void func_800371A4(s16 arg0) {
    typedef struct { u8 _0; u8 _1; u8 f2; u8 _3; u16 f4; u8 _p[0x1187 - 6]; u8 f1187; } G;
    extern s16 D_80092434[];
    extern void DsMix();
    u8 buf[4];
    register s32 f4 asm("a1");
    register s32 p asm("a3");
    register s32 t asm("v0");
    u16 v;
    t = arg0;
    f4 = ((G *)D_800922F0)->f4;
    p = t * f4;
    t = p >> 8;
    v = ((G *)D_800922F0)->f1187;
    v *= t;
    v >>= 3;
    buf[3] = 0;
    buf[0] = v;
    if (((G *)D_800922F0)->f2 == 0) {
        buf[1] = 0;
        buf[2] = v;
    } else {
        buf[1] = v;
        buf[2] = 0;
    }
    DsMix(buf);
    *D_80092434 = arg0;
}

s16 func_80037234(void) {
    extern s16 D_80092434[];
    return (*D_80092434);
}
