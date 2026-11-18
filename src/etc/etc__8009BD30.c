#include "common.h"

void func_8009BD30(void *arg0)
{
  extern u16 D_8008EE44[];
  s32 temp_v1;
  temp_v1 = (*((s32 *) (((s8 *) arg0) + 0x38))) | 1;
  *((s32 *) (((s8 *) arg0) + 0x38)) = temp_v1;
  if (7U > ((u32) ((*D_8008EE44) - 4)))
  {
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) (temp_v1 & (~1));
    *((s16 *) (((s8 *) arg0) + 0x6E)) = -1;
    *((s16 *) (((s8 *) arg0) + 0x68)) = (temp_v1 = -0x8000);
    *((s16 *) (((s8 *) arg0) + 0x6C)) = -0x8000;
    *((s16 *) (((s8 *) arg0) + 0x6A)) = 0;
    temp_v1 = 0x46;
    *((s32 *) (((s8 *) arg0) + 0x30)) = (s32) (((*((s32 *) (((s8 *) arg0) + 0x30))) & (~0x30)) | 0x20);
    *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x38))) | 8);
    if ((*((s16 *) (((s8 *) arg0) + temp_v1))) >= 0xA1)
    {
      *((s16 *) (((s8 *) arg0) + 0x46)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x46)))) - 0x200);
    }
    if (((*((s16 *) (((s8 *) arg0) + 0x4A))) + 0x80) < (-0x78))
    {
      *((s16 *) (((s8 *) arg0) + 0x4A)) = (s16) (((u16) (*((s16 *) (((s8 *) arg0) + 0x4A)))) + 0x180);
    }
  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009BDD8);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009C324);

extern u8 D_80085428[];
extern u16 D_8008EE44[];
extern void (*D_800B2C2C[])(u8 *);

void func_8009C970(void)
{
  u8 (*new_var)[];
  new_var = &D_80085428;
  rand();
  D_800B2C2C[*D_8008EE44](*new_var);
}

extern void (*D_800B2C2C[])(u8 *);

void func_8009C9C4(u8 *arg0) {
    extern u16 D_8008EE44[];
    extern u16 D_8008EE48[];
    extern struct {
        u8 unk0[0xDC];
        u16 unkDC;
        u8 unkDE[0x93E];
        s32 unkA1C;
        s32 unkA20;
        s32 unkA24;
    } D_8008ED68[];
    extern u8 D_800859F0[];
    extern s32 D_800B3C10[];
    extern u16 D_800B3C14[];
    extern u16 D_800B2C1C[];
    extern s32 func_80012508(void);
    extern s32 func_80012578(void);
    extern s32 func_80019654(void);
    extern s32 func_800337EC(void);
    extern s32 func_800338DC(s32);
    extern s32 func_80012544(s32);

    switch (*D_8008EE48) {
    case 0:
        *D_800B3C10 = 0;
        if (D_8008ED68->unkDC == 0xB) {
            if (D_8008ED68->unkA1C == 2) {
                *D_800B3C14 = 0x7020;
            } else {
                *D_800B3C14 = D_800B2C1C[arg0[0x5D4]];
            }
        } else {
            *D_800B3C14 = 0x7015;
        }
        *(u16 *)(arg0 + 8) = *D_800B3C14;
        if (D_8008ED68->unkDC == 3 && D_8008ED68->unkA24 == 1) {
            func_80012508();
        } else if (*D_800859F0 & 4) {
            func_80012578();
        } else if (*D_8008EE44 == 0xB) {
            func_80012544(0xD);
        } else if (*D_8008EE44 == 0xC) {
            func_80012544(7);
        } else {
            func_80012508();
        }
        break;
    case 1:
        if (func_80019654() != 0) {
            func_80012578();
        }
        break;
    case 2:
        func_800338DC(*D_800B3C14);
        func_80012578();
        break;
    case 3:
        if (!(*D_800859F0 & 4) || (func_800337EC() & 0x80)) {
            func_80012578();
        }
        break;
    case 4:
        if (*D_8008EE44 == 0xB) {
            func_80012544(0xD);
        } else if (*D_8008EE44 == 0xC) {
            func_80012544(7);
        } else {
            func_80012508();
        }
        break;
    }
}

void func_800A4964();

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009CB84);

extern void (*D_800B2C2C[])(u8 *);

void func_8009D918(u8 *p) {
    extern u8 D_8008ED68[];
    extern u8 D_800B3B38[];
    extern u8 D_800B3B88[];
    extern s32 D_8008F784[];
    extern u16 D_800B3C14[];
    extern void func_8001A998(u8 *, s32);
    extern void func_800A29D4(u8 *);
    extern s32 rand(void);
    extern void func_800A2B64(u8 *, s32);
    extern void func_800A2A80(u8 *, s32);
    extern s32 func_80012544(s32);
    extern s32 func_80012508(void);

    u8 *s = p + 0x5D0;
    u8 b6 = s[6];
    u8 b7 = s[7];
    u8 b[2];
    u8 b8;
    u8 v;
    u8 *ed;
    s32 m;

    b[0] = s[4];
    b[1] = s[5];
    b8 = s[8];
    func_8001A998(s, 0x7AC);
    if (b6 == 0) {
        s[6] = 1;
    } else {
        s[6] = b6;
    }
    if (b7 == 0) {
        s[7] = 1;
    } else {
        s[7] = b7;
    }
    s[4] = b[0];
    s[5] = b[1];
    s[8] = b8;
    func_800A29D4(p);
    v = D_800B3B38[0x32];
    s[0x17] = v;
    s[0x16] = v;
    s[0xB] = D_800B3B38[0x36];
    s[0x12] = D_800B3B38[0x28];
    v = D_800B3B38[0x2A];
    s[0xA] = 0;
    s[0x13] = v;
    func_800A2B64(p, rand() & 1);
    s[0x14] = 0xFF;
    s[0x15] = 0;
    s[9] = 0;
    *D_800B3C14 = 0x7015;
    D_800B3B88[1] = 0;
    D_800B3B88[0] = 0;
    ed = D_8008ED68;
    m = *(s32 *)(ed + 0xA24);
    if (m == 1) {
        s[0] = 0;
        s[0x11] = m;
        func_800A2A80(p, 2);
        if (*(s32 *)(ed + 0xA1C) == 2) {
            s[0x15] = 7;
        } else {
            s[0x15] = s[4];
        }
        if (*D_8008F784 == 1) {
            func_80012544(8);
        } else {
            func_80012544(0x1B);
        }
    } else if (m == 2) {
        s32 t;
        s[0] = 1;
        s[0x11] = 1;
        s[0x15] = 0xFF;
        t = *(s32 *)(ed + 0xA1C);
        *(u16 *)(D_800B3B38 + 0xC) = 0;
        *(u16 *)(D_800B3B38 + 8) = 0;
        if (t != 0) {
            func_80012544(0x1B);
        } else {
            *(u16 *)D_800B3B38 = 0;
            *(s32 *)(ed + 0xA24) = 0;
            func_80012544(7);
        }
    } else if ((u32)m >= 3) {
        s[0] = 2;
        s[0x11] = 0;
        s[0x15] = 0xFF;
        *(u16 *)(D_800B3B38 + 0xC) = 0;
        *(u16 *)(D_800B3B38 + 8) = 0;
        func_80012544(0x1B);
    } else {
        func_80012508();
    }
}

void func_800A4964();

extern void (*D_800B2C2C[])(u8 *);

void func_8009DB30(u8 *arg0) {
    extern struct {
        u8 pad0[0x88];
        u32 unk88;
        u8 pad8C[0xC];
        u32 unk98;
    } D_8008ED68[];
    extern s16 D_800B3B38[];
    extern u8 D_800B2758[];
    extern u8 D_800B294C[];
    extern u8 D_800B2958[];
    extern u16 D_800B3C14[];
    extern void D_8002E2AC(void);
    extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);
    extern void func_80034AB0(s32);
    extern void func_8001D748(void);
    extern void func_80013668(void);
    extern void func_80034BD8(s32, s32);
    extern void func_80033974(s32);
    extern void func_80012544(s32);
    extern void func_80012508(void);
    extern void func_80012200(void (*)(void));

    u8 *s = arg0 + 0x5D0;

    func_8001F1A8(-0x80, 0x50, 0, 1, 0, D_800B2758 + D_800B3B38[4] * 36, 1, 0x12, 3);
    if (D_800B3B38[0] != 0) {
        func_8001F1A8(-0x20, -0x18, D_800B3B38[6] == 0 ? 3 : 0, 1, 0, D_800B294C, 1, 5, 3);
        func_8001F1A8(-0x20, 0, D_800B3B38[6] == 1 ? 3 : 0, 1, 0, D_800B2958, 1, 5, 3);
    }

    if (D_800B3B38[0] == 0) {
        if ((D_8008ED68[0].unk88 & 0xF000) || (D_8008ED68[0].unk98 & 0xF000)) {
            switch ((s32)D_800B3B38[4]) {
            case 0:
                if ((D_8008ED68[0].unk88 & 0xC000) || (D_8008ED68[0].unk98 & 0xC000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 1;
                } else if ((D_8008ED68[0].unk88 & 0x6000) || (D_8008ED68[0].unk98 & 0x6000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 2;
                }
                break;
            case 1:
                if ((D_8008ED68[0].unk88 & 0x1000) || (D_8008ED68[0].unk98 & 0x1000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 0;
                } else if ((D_8008ED68[0].unk88 & 0x2000) || (D_8008ED68[0].unk98 & 0x2000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 2;
                }
                break;
            case 2:
                if ((D_8008ED68[0].unk88 & 0x1000) || (D_8008ED68[0].unk98 & 0x1000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 0;
                } else if ((D_8008ED68[0].unk88 & 0x8000) || (D_8008ED68[0].unk98 & 0x8000)) {
                    func_80034AB0(0x84);
                    D_800B3B38[4] = 1;
                }
                break;
            }
        }
    } else {
        if ((D_8008ED68[0].unk88 & 0x5000) || (D_8008ED68[0].unk98 & 0x5000)) {
            func_80034AB0(0x84);
            D_800B3B38[6] ^= 1;
        }
    }

    if ((D_8008ED68[0].unk88 & 0x830) || (D_8008ED68[0].unk98 & 0x830)) {
        if (D_800B3B38[0] == 0) {
            func_80034AB0(0x48);
            switch ((s32)D_800B3B38[4]) {
            case 0:
                s[0] = 0;
                s[0x11] = 1;
                if (s[6] >= 2) {
                    D_800B3B38[6] = 1;
                } else {
                    D_800B3B38[6] = 0;
                }
                D_800B3B38[0] = 1;
                break;
            case 1:
                s[0] = 1;
                s[0x11] = 1;
                D_800B3B38[0] = 0;
                D_800B3B38[6] = 0;
                D_800B3B38[4] = 0;
                func_80012508();
                break;
            case 2:
                s[0] = 2;
                s[0x11] = 0;
                s[0x15] = 0xFF;
                D_800B3B38[0] = 0;
                D_800B3B38[6] = 0;
                D_800B3B38[4] = 0;
                func_8001D748();
                func_80012544(0x13);
                break;
            }
        } else {
            s[1] = D_800B3B38[6];
            switch ((s32)D_800B3B38[6]) {
            case 0:
                func_80034AB0(0x48);
                s[0x15] = 0;
                s[4] = 0;
                D_800B3B38[0] = 0;
                D_800B3B38[6] = 0;
                D_800B3B38[4] = 0;
                func_80012508();
                break;
            case 1:
                if (s[6] >= 2) {
                    func_80034AB0(0x48);
                    s[0x15] = s[4];
                    D_800B3B38[0] = 0;
                    D_800B3B38[6] = 0;
                    D_800B3B38[4] = 0;
                    func_80012508();
                } else {
                    func_80034AB0(0x4C);
                }
                break;
            }
        }
    } else if ((D_8008ED68[0].unk88 & 0xC0) || (D_8008ED68[0].unk98 & 0xC0)) {
        func_80034AB0(0x5D);
        if (D_800B3B38[0] == 0) {
            func_80013668();
            func_80034BD8(-3, 0);
            func_80033974(*D_800B3C14);
            func_80012200(D_8002E2AC);
        } else {
            D_800B3B38[0] = 0;
        }
    }
}

void func_800A4964();

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009DFCC);

void func_8009E6AC(void *arg0) {
    extern int func_80012508();
    func_8001A464(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, 0x801C16EC);
    func_80019F30(M2C_FIELD(arg0, u8 *, 0x5D4) + 0x15, func_80012508);
    func_80012508();
}

void func_8009E700(void) {
    extern u16 D_8008EE48[];
    switch ((*D_8008EE48)) {                           /* irregular */
    case 0:
        func_8001A49C(0x801C16EC);
        func_80012578();
        return;
    case 1:
        func_80012508();
        return;
    }
}

void func_800A4964();
void func_8009E75C(u8 *p) {
    s32 i;
    u8 *q;
    for (i = 0; i < 4; i++) {
        func_80012A20(func_80019F30((p[0x5d4] + 0x15) | 0x20000, i), 1, 0, 0);
    }
    func_80012A20(func_80019F30((p[0x5d4] + 0x15) | 0x50000, 0), 1, 0, 0);
    q = (u8 *)func_80032DB0(0, 0x78, 5, p[0x5d4] + 0x15, 0, func_800A4964);
    q[0x5a] = 0;
    q[0x59] = 0;
    q[0x58] = 0;
    i = 0;
    do {
        func_800992CC(p, i);
        i++;
    } while (i < 2);
    func_80012508();
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009E854);

void func_8009EBD8(void *arg0)
{
  extern u16 D_8008EE48[];
  extern s16 D_800B3B64[];
  M2C_UNK var_a0;
  s32 var_a1;
  s32 var_s0;
  s32 var_v0;
  u8 temp_a0;
  var_s0 = 0;
  var_v0 = 0 < 3;
  do
  {
    var_v0 = var_s0 < 3;
    if (var_v0 != 0)
    {
      var_a0 = 0x20013;
      var_a1 = var_s0 + 0x10;
    }
    else
    {
      var_a0 = 0x20014;
      var_a1 = var_s0 + 0x18;
    }
    var_s0 += 1;
    func_80012A20(func_80019F30(var_a0, var_a1), 1, 0, 0);
  }
  while (var_s0 < 8);
  func_80012A20(func_80019F30(0x50014, 5), 1, 0, 0);
  if ((*D_8008EE48) == 0)
  {
    temp_a0 = *((u8 *) (((s8 *) arg0) + 0x5D0));
    if ((temp_a0 == 2) || ((*((u8 *) (((s8 *) arg0) + 0x5DA))) == 1))
    {
      func_80012544(0x12);
      goto block_11;
    }
    if (temp_a0 == 1)
    {
      func_80012544(0x11);
      if ((*D_800B3B64) == 0)
      {
        block_11:
        func_800125AC(2);

      }
    }
    else
    {
      goto block_12;
    }
  }
  else
  {
    block_12:
    func_80012544(0xC);

  }
}

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009ECF4);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F384);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009F9DC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FBDC);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009FF08);

INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_800A03D4);

void func_800A0668(void) {
    extern u16 D_8008EE48[];
    s32 var_s0;

    var_s0 = 0;
    do {
        func_80012A20(func_80019F30(0x20010, var_s0 + 0xB), 1, 0, 0);
        var_s0 += 1;
    } while (var_s0 < 0x18);
    func_80012A20(func_80019F30(0x50010, 1), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012508();
        func_800125AC(1);
        return;
    }
    func_80012508();
}

void func_800A0718(void) {
    extern u16 D_8008EE48[];
    func_80012A20(func_80019F30(0x20014, 7), 1, 0, 0);
    func_80012A20(func_80019F30(0x50014, 3), 1, 0, 0);
    if ((*D_8008EE48) != 0) {
        func_80012544(0x15);
        func_800125AC(1);
        return;
    }
    func_80012508();
}
