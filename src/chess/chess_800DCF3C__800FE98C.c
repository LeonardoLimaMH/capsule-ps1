#include "ghidra.h"
#include "common.h"
#include "ghidra.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FE98C);

#include "common.h"

void func_800FEBF4(void *arg0) {
    extern M2C_UNK D_80069AD4[];
    M2C_GFIELD(D_80069AD4, s32, 0x44) = (s32) -M2C_FIELD(arg0, s16 *, 0);
    M2C_GFIELD(D_80069AD4, s32, 0x48) = (s32) -M2C_FIELD(arg0, s16 *, 2);
    M2C_GFIELD(D_80069AD4, s32, 0x4C) = (s32) -M2C_FIELD(arg0, s16 *, 4);
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEC2C);

void func_800FED90(u8 *arg0)
{
  extern u8 *D_80118C18[];
  s16 v[3];
  s16 *p = v;
  s32 a = arg0[0x15];
  unsigned char b = arg0[0x16];
  v[0] = (a * 100) - 0x226;
  p[2] = (b * 100) - 0x226;
  p[1] = (-(((*((u32 *) ((D_80118C18[0] + (a * 0x34)) + (b * 4)))) >> 19) & 7)) * 50;
  func_800FEC2C(p);
}

void func_800FEE40(s32 arg0, s32 arg1) {
    extern u8 *D_80118C18[];
    s16 v[3];
    s16 *p = v;

    v[0] = (arg0 * 100) - 0x226;
    p[2] = (arg1 * 100) - 0x226;
    if (arg0 < 13 && arg1 < 13) {
        p[1] = -(((*(u32 *)(D_80118C18[0] + arg0 * 0x34 + arg1 * 4)) >> 19) & 7) * 50;
    } else {
        p[1] = 0;
    }
    func_800FEC2C(v);
}

#include "ghidra.h"
void func_800FEF04(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];

  func_800FF460(param_1,param_2,2,1,auStack_10);
  func_800FEC2C(auStack_10);
  return;
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FEF40);

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF0A0);

void func_800FF190(s32 arg0, void *arg1, s32 arg2) {
    extern u8 D_80119710[];
    extern u8 D_800906A0[];
    extern s32 D_8008ED68[];
    s32 xy;
    s32 b, c;
    s32 r;
    s32 d;
    s32 t;
    s16 val50;
    u8 *s0 = *(u8 **)((u8 *)arg0 + 0x70);
    u8 *s1 = *(u8 **)((u8 *)arg0 + 0x74);

    if (D_80119710[0x3d] == 0) {
        func_8002CEC0(D_800906A0);
        D_80119710[0x3d] = 1;
    }
    r = RotTransPers(arg1, &xy, &b, &c);
    *(s16 *)(s0 + 0x46) = ((s16 *)&xy)[0] - D_8008ED68[0x108 / 4] / 2;
    *(s16 *)(s0 + 0x4a) = ((s16 *)&xy)[1] - D_8008ED68[0x10c / 4] / 2;
    t = r - 15;
    *(s16 *)(s0 + 0x4e) = t - arg2;
    if (r <= 0) {
        r = 1;
    }
    if ((s16)*(s16 *)(s0 + 0x4e) < 0) {
        *(s16 *)(s0 + 0x4e) = 0;
    }
    d = 0x140000 / r;
    *(s16 *)(s0 + 0x50) = d;
    *(s16 *)(s0 + 0x52) = d & ~0xf;
    *(s16 *)(s0 + 0x50) = d & ~0xf;

    *(s16 *)(s1 + 0x46) = *(s16 *)(s0 + 0x46);
    *(s16 *)(s1 + 0x4a) = *(s16 *)(s0 + 0x4a);
    *(s16 *)(s1 + 0x4e) = *(s16 *)(s0 + 0x4e);
    val50 = *(s16 *)(s0 + 0x50);
    *(s16 *)(s1 + 0x52) = val50;
    *(s16 *)(s1 + 0x50) = val50;
}

void func_800FF2CC(s32 arg0, void *arg1, s16 arg2) {
    extern u8 D_80119710[];
    extern u8 D_800906A0[];
    extern s32 D_8008ED68[];
    s32 xy;
    s32 b, c;
    s32 r;
    s32 d;
    s32 t;
    u8 *q = *(u8 **)((u8 *)arg0 + 0x70);

    if (D_80119710[0x3d] == 0) {
        func_8002CEC0(D_800906A0);
        D_80119710[0x3d] = 1;
    }
    r = RotTransPers(arg1, &xy, &b, &c);
    d = 0x140000 / r;
    *(s16 *)(q + 0x46) = ((s16 *)&xy)[0] - D_8008ED68[0x108 / 4] / 2;
    *(s16 *)(q + 0x4a) = ((s16 *)&xy)[1] - D_8008ED68[0x10c / 4] / 2;
    t = r - 15;
    *(s16 *)(q + 0x4e) = t - arg2;
    *(s16 *)(q + 0x50) = d;
    *(s16 *)(q + 0x52) = d & ~0xf;
    *(s16 *)(q + 0x50) = d & ~0xf;
}

void func_800FF3B4(void *arg0, void *arg1, s32 arg2, s32 arg3, void *arg4) {
    s32 temp_t0;

    temp_t0 = arg2 - arg3;
    M2C_FIELD(arg4, s16 *, 0) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 0) * temp_t0) + (M2C_FIELD(arg1, s16 *, 0) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 2) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 2) * temp_t0) + (M2C_FIELD(arg1, s16 *, 2) * arg3)) / arg2);
    M2C_FIELD(arg4, s16 *, 4) = (s16) ((s32) ((M2C_FIELD(arg0, s16 *, 4) * temp_t0) + (M2C_FIELD(arg1, s16 *, 4) * arg3)) / arg2);
}

static inline void calc_pos(u8 *arg0, s16 *v) {
    extern u8 *D_80118C18[];
    s32 a = arg0[0x15];
    u8 b = arg0[0x16];
    v[0] = (a * 100) - 0x226;
    v[2] = (b * 100) - 0x226;
    v[1] = (-(((*(u32 *)(D_80118C18[0] + a * 0x34 + b * 4)) >> 19) & 7)) * 50;
}
static inline void lerp_pos(s16 *arg0, s16 *arg1, s32 arg2, s32 arg3, s16 *arg4) {
    s32 temp_t0 = arg2 - arg3;
    arg4[0] = (s16)((arg0[0] * temp_t0 + arg1[0] * arg3) / arg2);
    arg4[1] = (s16)((arg0[1] * temp_t0 + arg1[1] * arg3) / arg2);
    arg4[2] = (s16)((arg0[2] * temp_t0 + arg1[2] * arg3) / arg2);
}
INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF460);

s32 func_800FF644(void) {
    extern u8 D_80085428[];
    u8 i, j;
    s32 sum = 0;

    for (i = 0; i < 2; i++) {
        s32 k, off;
        j = 0;
        k = i * 6;
        off = i * 0x2e8;
        for (; j < 6; j++) {
            s32 n = (k + j) * 169;
            u8 *e = D_80085428 + (j * 0x7c + off);
            sum += (n + 1) * (e[0x5fd] * 13 + e[0x5fe]);
        }
    }
    return sum;
}

#include "common.h"

void func_800FF700(void) {
    extern M2C_UNK D_80119600[];
    func_8001A998(D_80119600, 0x54);
    M2C_FIELD(D_80119600, s32 *, 0x2C) = func_800FF644();
}

void func_800FF740(u8 *arg0) {
    extern u8 D_80118C18[];
    extern u8 D_80085FF2[];
    u8 *p;

    p = D_80118C18 + (D_80118C18[0x9E9] = (D_80118C18[0x9E9] + 1) % 10) * 4;
    p[0x9EA] = (D_80085FF2[0] << 7) | (arg0[0] + 1);
    p[0x9EB] = arg0[1];
    p[0x9EC] = arg0[3] + arg0[2] * 13;
    p[0x9ED] = arg0[5] + arg0[4] * 13;
    *(s32 *)(p + 0xA14) = func_800FF644();
    func_800FF820();
}

INCLUDE_ASM("asm/chess/nonmatchings/chess_800DCF3C__800FE98C", func_800FF820);

s32 func_800FF8E0(u8 *arg0) {
    extern u8 D_80118C18[];
    u8 *p = D_80118C18 + (((((D_80118C18[0x9E9] - D_80118C18[0x9E8]) + 11) % 10) & 0xFF) * 4);
    return (arg0[0] == p[0x9EA]) ? (arg0[2] == p[0x9EC]) : 0;
}

u8 func_800FF96C(void) {
    extern u8 D_80118C18[];
    u8 i;
    u8 n = 0;

    for (i = 0; i < 10; i += 2) {
        u8 *q = D_80118C18 + (((D_80118C18[0x9E9] - i) + 10) % 10 & 0xFF) * 4;
        u8 v = q[0x9EB];
        if (v != 0) {
            if (v != 1) {
                return n;
            }
            n++;
        }
    }
    return n;
}

s32 func_800FFA00(u8 *arg0, s32 arg1, u8 *arg2) {
    extern u8 D_801010B0[];
    s32 n = 0;
    s32 i, j, k;
    u8 *base = arg0 + 0x5d0;
    u32 *row = *(u32 **)(D_801010B0 + base[9] * 0x34);
    u32 *q;

    for (i = 0; i < 13; i++) {
        j = 0;
        k = i * 16;
        q = row;
        for (; j < 13; j++) {
            u32 w = *q;
            if (((w >> 22) & 3) == (base + arg1)[0xe] && ((w >> 6) & 0xFF) == 1 && ((u8 *)q)[3] == 0) {
                arg2[n] = k + j;
                n++;
            }
            q++;
        }
        row += 13;
    }
    return n;
}

void func_800FFAB0(u8 *arg0, s32 arg1)
{
  extern u8 D_801010B0[];
  extern u8 D_8008ED68[];
  extern u8 D_801021B8[][2][6][6];
  extern s32 func_800202A4(s32);
  extern u8 func_800A835C(u8 *, s32);
  typedef struct 
  {
    u8 pad0[0x9EC];
    u32 unk9EC[4];
  } Work_800FFAB0;
  u8 *s4 = arg0 + 0x5D0;
  u8 (*board)[13][4] = *((u8 (**)[13][4]) (D_801010B0 + (s4[9] * 0x34)));
  s32 idx1 = (arg0 + arg1)[0x5DE] - 1;
  s32 idx2;
  u8 *tbl;
  u8 *p;
  u8 b;
  s32 row;
  s32 col;
  s32 val;
  s32 i;
  if ((s4 + arg1)[0x10] == 0)
  {
    idx2 = ((Work_800FFAB0 *) D_8008ED68)->unk9EC[arg1];
    ((Work_800FFAB0 *) D_8008ED68)->unk9EC[arg1] = ((u32) (idx2 + 1)) % 6;
  }
  else
  {
    idx2 = func_800202A4(6);
  }
  i = 0;
  tbl = D_801021B8[s4[9]][idx1][idx2];
  do
  {
    if (i == 5)
    {
      val = 5;
    }
    else
    {
      val = func_800202A4(5);
    }
    b = tbl[val];
    row = b >> 4;
    col = b & 0xF;
    if (board[row][col][3] == 0)
    {
      u8 r;
      s32 next;
      p = s4 + ((i * 0x7C) + (arg1 * 0x2E8));
      p[0x2D] = row;
      p[0x2E] = col;
      p[0x2F] = 1;
      r = func_800A835C(arg0, arg1);
      next = i + 1;
      i = r;
      p[0x3D] = i;
      i = next;
      board[row][col][3] = (arg1 << 7) | i;
    }
  }
  while (i < 6);
}

void func_800FFCAC(u8 *arg0, s32 arg1) {
    extern u8 D_801010B0[];
    extern u8 D_8008ED68[];
    extern u8 D_801021B8[][2][6][6];
    extern s32 func_800202A4(s32);

    typedef struct {
        u8 pad0[0x9EC];
        s32 unk9EC[4];
    } Work_800FFCAC;

    u8 *s4 = arg0 + 0x5D0;
    u8 (*board)[13][4] = *(u8 (**)[13][4])(D_801010B0 + s4[9] * 0x34);
    s32 idx1 = (arg0 + arg1)[0x5DE] - 1;
    s32 idx2;
    u8 *tbl;
    u8 *p;
    u8 b;
    s32 row;
    s32 col;
    s32 val;

    if ((s4 + arg1)[0x6D9] == 0) {
        idx2 = func_800202A4(6);
        ((Work_800FFCAC *)D_8008ED68)->unk9EC[arg1] = idx2;
    } else {
        idx2 = ((Work_800FFCAC *)D_8008ED68)->unk9EC[arg1];
    }

    tbl = D_801021B8[s4[9]][idx1][idx2];

    if ((s4 + arg1)[0x6D9] != 5) {
        u8 *q = s4 + arg1;
        do {
            val = func_800202A4(5);
        } while ((q[0x6DD] >> val) & 1);

        do {
            b = tbl[func_800202A4(5)];
            row = b >> 4;
            col = b & 0xF;
        } while (board[row][col][3] != 0);
    } else {
        b = tbl[5];
        val = 5;
        row = b >> 4;
        col = b & 0xF;
    }

    p = s4 + arg1 * 6;
    p[0x5ED] = 5;
    p[0x5EC] = val;
    p[0x5EE] = row;
    p[0x5EF] = col;
}
