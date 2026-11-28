#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 a;
    u8 b;
    u16 pad;
    s32 c;
} E8_8001B16C;

typedef struct {
    u8 pad[0x34];
    u8 f[4];
    E8_8001B16C e[3];
} S_8001B16C;

void func_8001B0E0(void *arg0) {
    extern s32 D_8008F7D0[];
    (*D_8008F7D0) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0x10;
    M2C_FIELD(arg0, u16 *, 0x40) = (u16) (M2C_FIELD(arg0, u16 *, 0x40) + 1);
}

void func_8001B100(void *arg0) {
    extern s32 D_8008ED68[];
    s32 *d = D_8008ED68;
    M2C_FIELD(arg0, s32 *, 0x2C) = M2C_FIELD(arg0, s32 *, 0x2C) - 1;
    if (M2C_FIELD(arg0, s32 *, 0x34) == 1) {
        M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0 || d[0x29A] == 1) {
        func_80013920();
    }
}

void func_8001B16C(void) {
    extern S_8001B16C D_80085428;
    S_8001B16C *d = &D_80085428;
    s32 i;
    for (i = 0; i < 3; i++) {
        d->f[i] = 0;
        d->e[i].a = 0;
        d->e[i].b = 0;
        d->e[i].c = 0;
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B1A8);

volatile int func_8001B484(s32 slot, s32 mode, s32 sel)
{
  typedef struct 
  {
    u8 f[4];
    E8_8001B16C e[3];
    s32 chk;
  } MC_Hdr;
  typedef struct 
  {
    u8 unk[0x334];
  } MC_A;
  typedef struct 
  {
    u8 unk[0x5E4];
  } MC_B;
  typedef struct 
  {
    MC_Hdr hdr[2];
    MC_A a[3][2];
    MC_B b[3][2];
  } MC_Buf;
  typedef struct 
  {
    u8 pad0[2];
    u8 f2[2];
    u8 f4[2];
    u8 f6[2];
    u8 pad8[0x24];
    s32 f2C[2];
    u8 f34[4];
    E8_8001B16C e[3];
    u8 f50[2][0x2BC];
    u8 f5C8[6];
    u8 pad5CE[2];
    u8 f5D0;
    u8 pad5D1;
    u16 f5D2;
    u8 f5D4[2];
    u8 f5D6[2];
    u8 f5D8;
  } G_8001B484;
  typedef struct 
  {
    u8 pad[0x14];
    u32 f14;
    u8 pad2[0x24];
  } D63940_B484;
  extern G_8001B484 D_80085428;
  extern D63940_B484 D_80063940[];
  extern s32 D_8008ED84[];
  u32 func_8001BAD8(void *, s32, u8 *);
  void func_8001AA70(void *, void *, s32);
  void func_800278C8(s32, s32);
  void func_800267F0(void);
  void func_80026930(s32);
  u8 chk;
  register s32 modo asm("s7") = mode;
  MC_Buf *buf = (MC_Buf *) 0x801CC000;
  u8 *A = (u8 *) (&buf->a[slot][0]);
  u8 *B = (u8 *) (&buf->b[slot][0]);
  MC_Buf *base = (MC_Buf *) 0x801CC000;
  register s32 ok asm("s2");
  s32 i;
  G_8001B484 *G = &D_80085428;
  u8 *dst;
  register u8 *next asm("s0");
  G_8001B484 *gs;
  i = 0;
  ok = 0;
  while (i < 2)
  {
    if (((u8) func_8001BAD8(base->hdr[0].e, 0x1C, &chk)) != 0)
    {
      ok = 1;
      if (modo == 2)
      {
        G->f2C[sel] = chk;
      }
      break;
    }
    i++;
    if (i < 2)
    {
      func_8001AA70(buf->hdr[0].e, buf->hdr[i].e, 0x18);
      buf->hdr[0].chk = buf->hdr[i].chk;
    }
  }

  i = 0;
  if (!ok)
  {
    goto fail;
  }
  ok = i;
  dst = (u8 *)&buf->a[slot][0];
  next = dst;
valida_a:
  if (modo != 0 && modo != 3 && (u8)func_8001BAD8(A, 0x334, &chk) == 0)
  {
    i++;
    next += sizeof(MC_A);
    if (i >= 2)
    {
      goto fim_a;
    }
    func_8001AA70(dst, next, 0x334);
    goto valida_a;
  }
  ok = 1;
fim_a:

  if (!ok)
  {
fail:
    return 0;
  }
  i = 0;
  ok = i;
  dst = (u8 *)&buf->b[slot][0];
  next = dst;
valida_b:
  if (modo == 1 && (u8)func_8001BAD8(B, 0x5E4, &chk) == 0)
  {
    i++;
    next += sizeof(MC_B);
    if (i >= 2)
    {
      goto fim_b;
    }
    func_8001AA70(dst, next, 0x5E4);
    goto valida_b;
  }
  ok = 1;
fim_b:

  if (!ok)
  {
    goto fail;
  }
  if (modo == 2)
  {
    ((G_8001B484 *) (((u8 *) G) + sel))->f2[0] = base->hdr[0].e[slot].a;
    ((G_8001B484 *) (((u8 *) G) + sel))->f4[0] = base->hdr[0].e[slot].b;
    func_8001AA70(G->f50[sel], A, 0x2BC);
    ((G_8001B484 *) (((u8 *) G) + sel))->f5D6[0] = A[0x32D];
    ((G_8001B484 *) (((u8 *) G) + sel))->f5D4[0] = A[0x32F];
    ((G_8001B484 *) (((u8 *) G) + sel))->f6[0] = A[0x32E];
    for (i = 0; i < 0x67; i++)
    {
      if (!sel)
      {
        D_80063940[i].f14 = (D_80063940[i].f14 & (~0x20)) | ((A[0x2BC + i] & 1) << 5);
      }
      else
      {
        D_80063940[i].f14 = (D_80063940[i].f14 & (~0x40)) | (((A[0x2BC + i] & 1) << 3) << 3);
      }
    }

    func_800278C8(slot, sel);
    return 1;
  }
  if (modo == 1)
  {
    func_800267F0();
    G->f2[0] = base->hdr[0].e[slot].a;
    G->f4[0] = base->hdr[0].e[slot].b;
    func_8001AA70(G->f50[0], A, 0x2BC);
    gs = (G_8001B484 *) (((u8 *) G) + sel);
    gs->f5D6[0] = A[0x32D];
    gs->f5D4[0] = A[0x32F];
    gs->f6[0] = A[0x32E];
    for (i = 0; i < 0x67; i++)
    {
      if (sel == 0)
      {
        D_80063940[i].f14 = (D_80063940[i].f14 & (~0x20)) | ((A[0x2BC + i] & 1) << 5);
      }
      else
      {
        D_80063940[i].f14 = (D_80063940[i].f14 & (~0x40)) | ((A[0x2BC + i] & 1) << 6);
      }
    }

    *D_8008ED84 = base->hdr[0].e[slot].c;
    func_8001AA70(G->f5C8, B, 6);
    func_800278C8(slot, sel);
    func_80026930(slot);
    G->f5D0 = B[6];
    G->f5D2 = *((u16 *) (B + 8));
    G->f5D8 = B[0xA];
  }
  else
  {
    for (i = 0; i < 3; i++)
    {
      D_80085428.f34[i] = ((MC_Buf *) 0x801CC000)->hdr[0].f[i];
      D_80085428.e[i].a = ((MC_Buf *) 0x801CC000)->hdr[0].e[i].a;
      D_80085428.e[i].b = ((MC_Buf *) 0x801CC000)->hdr[0].e[i].b;
      D_80085428.e[i].c = ((MC_Buf *) 0x801CC000)->hdr[0].e[i].c;
    }
  }

  return 1;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8001A1DC__8001B0E0", func_8001B964);

u8 func_8001BAA0(u8 *buf, s32 len, u8 *out) {
    register u32 sum asm("a3") = 7;
    u32 i = 0;
    len -= 4;
    if (len != 0) {
        do {
            sum += *buf++;
            i++;
        } while (i < len);
    }
    *buf = sum;
    *out = sum;
    return sum;
}

u32 func_8001BAD8(u8 *buf, s32 len, u8 *out) {
    u32 sum = 7;
    u32 i = 0;
    len -= 4;
    if (len != 0) {
        do {
            sum += *buf++;
            i++;
        } while (i < len);
    }
    *out = sum;
    return *buf == (sum & 0xFF);
}
