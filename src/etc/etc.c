#include "common.h"

/* Elemento de 0x7C bytes da matriz [?][6] em +0x5E8 (0x2E8 = 6 * 0x7C). */
typedef struct {
    u8 unk0;
    u8 pad1[0x29];
    u8 unk2A;
    u8 pad2B[0x51];
} Etc7C;

typedef struct {
    u8 pad0[0x5E8];
    Etc7C unk5E8[1][6];
} EtcCtx;

/* Versões inline de func_800979BC e func_80097D8C (usadas por func_8009807C). */
static inline s32 Etc_GetVramAddr(s32 arg0) {
    if (arg0 < 10) {
        return arg0 * 0xE000 + (s32)0x80140000;
    }
    return (arg0 - 10) * 0xE000 + (s32)0x80124000;
}

static inline s32 Etc_FindPrev(EtcCtx *arg0, s32 arg1, s32 arg2) {
    s32 ret;
    u8 id;

    id = arg0->unk5E8[arg1][arg2].unk0;
    ret = 0;
    if (arg1 != 0) {
        goto loop;
    }
    if (arg2 == 0) {
        goto end;
    }
loop:
    if (arg2 == 0) {
        goto wrap;
    }
dec:
    arg2--;
    goto check;
wrap:
    arg1--;
    arg2 = 4;
check:
    if (id == arg0->unk5E8[arg1][arg2].unk0) {
        ret = arg0->unk5E8[arg1][arg2].unk2A + 1;
    }
    if (arg1 != 0) {
        goto loop;
    }
    if (arg2 != 0) {
        goto dec;
    }
end:
    return ret;
}

s32 func_800979BC(s32 arg0) {
    register s32 a asm("v0");
    register s32 b asm("v1");

    if (arg0 >= 10) {
        a = 0x80124000;
        arg0 -= 10;
        b = arg0 * 0xE000;
    } else {
        a = arg0 * 0xE000;
        b = 0x80140000;
    }
    return a + b;
}


extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_800979FC(void) {
    extern u8 D_80085428[];
    register u8 *p asm("a1") = D_80085428;
    register s32 v1 asm("v1");
    register s32 s0 asm("s0");
    register s32 s1 asm("s1");
    s32 off1;
    s32 off2;
    s32 a0;

    off1 = p[0xD78] * 0x7C;
    off2 = p[0xD77] * 0x2E8;
    off1 += off2;
    off1 += (s32)p;
    a0 = *(u8 *)(off1 + 0x612);

    v1 = a0;
    if (a0 < 10) {
        s32 t = a0 * 0xE000;
        a0 = t + (s32)0x80140000;
    } else {
        a0 = 0x80124000;
        a0 = (v1 - 10) * 0xE000 + a0;
    }

    s0 = 0;
    func_8001A49C(a0, p);
    s1 = 0x03C00000;
    do {
        register s32 step asm("v0");
        func_80012A20(func_80019F30(0x20174, s0), 3, (s16)(s1 >> 16), 0x180);
        step = 0x00200000;
        s1 += step;
        s0++;
    } while (s0 < 2);
}


extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

s32 func_80097AF0(s32 arg0, s32 arg1, s32 arg2)
{
  s8 *new_var;
  new_var = (s8 *) (arg0 + ((arg2 * 0x7C) + (arg1 * 0x2E8)));
  return (*((u8 *) (new_var + 0x5E8))) + 0x10D;
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097B24);

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097C6C);

s32 func_80097D8C(s32 arg0, s32 arg1, s32 arg2)
{
  s32 var_a3;
  s32 var_a1;
  u8 *new_var;
  s32 var_a2;
  u8 temp_t0;
  void *temp_v1;
  var_a1 = arg1;
  var_a2 = arg2;
  new_var = (u8 *) (((s8 *) (arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8)))) + 0x5E8);
  temp_t0 = *new_var;
  var_a3 = 0;
  if (var_a1 != 0)
  {
    goto loop_2;
  }
  if (var_a2 == 0)
  {
    goto block_9;
  }
  loop_2:
  if (var_a2 == 0)
  {
    goto block_4;
  }

  block_3:
  var_a2 -= 1;

  goto block_5;
  block_4:
  var_a1 -= 1;

  var_a2 = 4;
  block_5:
  temp_v1 = arg0 + ((var_a2 * 0x7C) + (var_a1 * 0x2E8));

  if (temp_t0 != (*((u8 *) (((s8 *) temp_v1) + 0x5E8))))
  {
    goto block_7;
  }
  var_a3 = (*((u8 *) (((s8 *) temp_v1) + 0x612))) + 1;
  block_7:
  if (var_a1 != 0)
  {
    goto loop_2;
  }

  if (var_a2 != 0)
  {
    goto block_3;
  }
  block_9:
  return var_a3;

}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80097E40);

void func_8009807C(EtcCtx *arg0, s32 arg1, s32 arg2) {
    extern void func_8001A49C();
    s32 ret = 0;

    if (arg2 != 5) {
        if (Etc_FindPrev(arg0, arg1, arg2) != 0) {
            ret = 1;
        }
    } else if (arg0->unk5E8[arg1][arg2].unk2A < 10 || arg1 != arg0->unk5E8[arg1][arg2].unk2A - 10) {
        ret = 1;
    }
    if (ret == 0) {
        func_8001A49C(Etc_GetVramAddr(arg0->unk5E8[arg1][arg2].unk2A));
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_800981F0);

void func_800991AC(u8 *arg0) {
    extern u8 D_80085A0D[];
    extern void func_800A4964();
    extern s32 func_800372B4();
    extern s32 func_80020304(s32);
    extern s32 func_80019F30(s32, s32);
    extern void func_80015CD0(void *, s32, s32);

    register u8 *s0 asm("s0") = arg0;
    register u32 s1 asm("s1");
    register s32 v1 asm("v1");
    register s32 temp_v0 asm("v0");
    register s32 a0 asm("a0");
    s32 a1;

    s1 = *D_80085A0D;
    func_800A4964();

    v1 = 1;
    if ((*(u32 *)(s0 + 0x38) & 1) == v1) {
        *(u32 *)(s0 + 0x3C) = 0;
        return;
    }

    if (*(s32 *)(s0 + 0x3C) == 0) {
        *(s16 *)(s0 + 0x24) = -1;
    }
    *(u32 *)(s0 + 0x3C) = v1;

    if ((*(u32 *)(s0 + 0x34) & 0x7F) == 0) {
        s32 ret = func_800372B4();
        a1 = 4;
        if (ret < 0x17D) {
            a1 = 3;
            if (ret < 0xBF) {
                a1 = 1;
                if (ret > 0) {
                    a1 = 2;
                }
            }
        }
        temp_v0 = s1 + 0x15;
        a0 = 0x60000;
        a0 |= temp_v0;
    } else {
        s32 temp;
        if (*(s16 *)(s0 + 0x24) >= 0) {
            return;
        }
        if (func_80020304(500) < 5) {
            temp_v0 = s1 + 0x15;
            temp = func_80019F30(temp_v0 | 0x70000, 0);
            func_80015CD0(s0 + 0x14, temp, 1);
            return;
        }
        temp_v0 = s1 + 0x15;
        a0 = 0x60000;
        a0 |= temp_v0;
        a1 = 5;
    }

    *(s32 *)(s0 + 0x18) = func_80019F30(a0, a1);
}

u8 *func_800992CC(u8 *arg0, u32 arg1) {
    extern void func_800991AC();
    extern void func_800161C4();
    extern u8 *func_80015B3C();
    u8 id = arg0[0x5E5];
    u8 *r = func_80015B3C(func_800991AC, func_800161C4, 1);
    func_80015EF8(r);
    *(s16 *)(r + 0x4A) = 0x78;
    *(s16 *)(r + 0x4E) = 4;
    *(s16 *)(r + 0x46) = 0;
    r[0x59] = 0;
    r[0x58] = 0;
    *(u32 *)(r + 0x34) = (*(u32 *)(r + 0x34) & ~0x7F) | (arg1 & 0x7F);
    if (arg1 != 0) {
        *(s32 *)(r + 0x18) = func_80019F30(id + 0x15 | 0x60000, 5);
    } else {
        *(s32 *)(r + 0x18) = func_80019F30(id + 0x15 | 0x60000, 1);
    }
    return r;
}

#include "common.h"

extern u8 D_8008ED68[];
extern void (*D_800AEF98[])(void);

void func_80099394(void) {
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 2) {
        func_8001FD98(4);
    }
    D_800AEF98[M2C_GFIELD(D_8008ED68, u16, 0xDC)]();
}

#include "common.h"

void func_800993F8(void) {
    extern M2C_UNK D_80085428[];
    extern s16 D_800B3ACC[];
    func_80013668();
    (*D_800B3ACC) = 0;
    M2C_GFIELD(D_80085428, s8, 0x5CB) = 4;
    M2C_GFIELD(D_80085428, s8, 0) = 3;
    M2C_GFIELD(D_80085428, s8, 0x5D0) = 1;
    func_80012508(D_80085428);
}

#include "common.h"

void func_80099444(void) {
    extern int func_80012508();
    func_80019F30(9, func_80012508);
    func_80012508();
}

void func_80099474(void) {
    extern u8 D_80085428[];
    extern u8 D_800859F0[];
    extern s32 D_800B3AC8[];
    switch (M2C_GFIELD(D_8008ED68, u16, 0xE0)) {
    case 0:
        *D_800B3AC8 = 0;
        M2C_GFIELD(D_80085428, s16, 8) = 0x7003;
        if (M2C_GFIELD(D_8008ED68, s32, 0xA20) == 1 || !(M2C_GFIELD(D_80085428, u8, 0x5C8) & 4)) {
            goto b;
        }
        goto a;
    case 1:
        if (func_80019654()) {
            goto a;
        }
        break;
    case 2:
        func_800338DC(0x7003);
    a:
        func_80012578();
        break;
    case 3:
        if ((D_800859F0[0] & 4) && !(func_800337EC() & 0x80)) {
            break;
        }
    b:
        func_80012508();
        break;
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099570);

void func_800997D4(void) {
    extern s32 D_8008F7D0[];
    if ((*D_8008F7D0) == 0) {
        func_80012508();
    }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc", func_80099800);
