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

typedef struct { s16 v[3][2]; } Z12;
typedef struct { Z12 pos; u8 rgb[3]; } Z12C;
static inline u8 bdd8_scale(s32 c, s32 v) {
    s32 x = c * v;
    if (x < 0) x += 0xFF;
    return (u32)x >> 8;
}
INCLUDE_ASM("asm/etc/nonmatchings/etc__8009BD30", func_8009BDD8);

typedef struct { s16 x, y; } DV2;
typedef struct {
    u8 *w;
    u8 pad4[0xD8];
    u16 unkDC;
    u16 unkDE;
    u16 unkE0;
} ED_8009C324;
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

extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern u8 *func_80032DB0(s32, s32, s32, s32, s32, void *);
extern u8 *func_80032E78(s32, s32, s32, s32, s32, void *);
extern u8 *func_80032F50(s32, s32, s32, s32, void *);
extern u8 *func_80033020(s32, s32, s32, s32, void *);
extern void D_80033450(void);
extern void func_800A2E00(void), func_800A2D84(void), func_800A2DBC(void), func_800A2F1C(void);
extern void func_800A3060(void), func_800A2F88(void), func_800A3014(void), func_800A3128(void);
extern void func_800A3230(void), func_800A3718(void), func_800A378C(void), func_800A3814(void);
extern void func_800A39D8(void), func_800A32F0(void), func_800A3388(void), func_800A3570(void);
extern void func_800A3410(void), func_800A3654(void), func_800A3AB4(void), func_800A3BDC(void);
extern void func_800A3F70(void), func_800A4654(void), func_800A3C70(void), func_800A4720(void);
extern void func_800A4448(void), func_800A40DC(void), func_800A4038(void), func_800A3D44(void);
extern void func_800A4884(void), func_800A4820(void);
#define LOAD(id, n) func_80012A20(func_80019F30((id), (n)), 1, 0, 0)
#define CREATE func_80032DB0
#define CREATE2 func_80032E78
#define O32(o, x) (*(s32 *)((o) + (x)))
#define O16(o, x) (*(s16 *)((o) + (x)))
#define SET30(o) (O32(o, 0x30) = (O32(o, 0x30) & ~0x30) | 0x20)
#define SET30B(o) (O32(o, 0x30) = (((O32(o, 0x30) & ~0x1C0) | 0x40) & ~0x30) | 0x10)
s32 func_8009CB84(void) {
    s32 i, j, cnt, x, y;
    register s32 row_y asm("a1");
    u8 *o;
    for (i = 0; i < 9; i++) LOAD(0x20010, i + 2);
    LOAD(0x50010, 0);
    for (i = 0; i < 8; i++) {
        if (i < 3) LOAD(0x20013, i + 0x10);
        else LOAD(0x20014, i + 0x18);
    }
    LOAD(0x50014, 5);
    for (i = 0; i < 3; i++) {
        y = 0x240 + i * 0x40;
        func_80012A20(func_80019F30(0x2001D, i), 2, (s16)y, 0x100);
        func_80012A20(func_80019F30(0x2001E, i), 2, (s16)y, 0x100);
    }
    for (i = 0; i < 2; i++) LOAD(0x2001E, i + 3);
    LOAD(0x5001D, 0);
    LOAD(0x5001D, 1);
    for (i = 0; i < 0x1A; i++) LOAD(0x20010, i + 0xB);
    LOAD(0x50010, 1);

    o = CREATE(-0x28, -0x68, 4, 0x10, 0x60, func_800A2E00);
    O32(o, 0x80) = 0;
    SET30(o);
    o = CREATE(-0x70, -0x10, 4, 0x10, 0x64, func_800A2E00);
    O32(o, 0x80) = 1;
    SET30(o);
    o = CREATE(0x20, -0x10, 4, 0x10, 0x66, func_800A2E00);
    O32(o, 0x80) = 2;
    SET30(o);
    o = CREATE(-0x88, 0x48, 4, 0x10, 0x5F, func_800A2D84);
    O32(o, 0x84) = 6;
    CREATE(-0x30, -0x20, 3, 0x10, 0x68, func_800A2DBC);
    CREATE2(-0x28, -0x18, 2, 0x10, 0xC, func_800A2F1C);
    for (i = 0, j = 0x16; i < 8; i++, j++) {
        o = func_80032F50(0x10 + i * 16, -0x60, 3, j, func_800A3060);
        O32(o, 0x80) = i;
    }
    for (i = 0, j = 0x16; i < 8; i++, j++) {
        o = func_80032F50(0x10 + i * 16, -0x50, 3, j, func_800A3060);
        O32(o, 0x80) = i;
    }
    CREATE2(-0x48, -0x60, 3, 0x10, 0, func_800A2F88);
    o = CREATE(-0x98, -0x68, 3, 0x10, 0, func_800A3014);
    O32(o, 0x84) = 7;
    o = CREATE(-0x50, -0x70, 4, 0x10, 7, func_800A2D84);
    O32(o, 0x84) = 0xF;
    for (i = 0, cnt = 0, row_y = -0x50; i < 2; i++, row_y = 0x10) {
        s16 y0 = row_y;
        for (j = 0, x = -0x90; j < 4; x += 0x48) {
            o = CREATE((s16)x, y0, 4, 0x10, 8, func_800A3128);
            j++;
            O32(o, 0x80) = cnt++;
        }
    }
    for (i = 0, cnt = 0, row_y = -0x50; i < 2; i++, row_y = 0x10) {
        s16 y0 = row_y;
        for (j = 0, x = -0x90; j < 4; x += 0x48) {
            o = CREATE((s16)x, y0, 4, 0x10, 9, func_800A3230);
            j++;
            O32(o, 0x80) = cnt++;
        }
    }
    o = CREATE(-0x50, -0x68, 4, 0x10, 0x18, func_800A2D84);
    O32(o, 0x84) = 0x14;
    CREATE(-0x30, -0x48, 4, 0x10, 0x19, func_800A3718);
    CREATE(0, -0x50, 4, 0x1D, 0xB, func_800A378C);
    o = CREATE(0, 0x50, 4, 0x10, 0x4D, func_800A3814);
    SET30(o);
    CREATE2(0, 0x20, 4, 0x10, 6, func_800A39D8);
    o = CREATE(-0x90, -0x68, 4, 0x10, 0x1D, func_800A2D84);
    O32(o, 0x84) = 0x12;
    o = CREATE(-0x90, -0x70, 4, 0x10, 0xA, func_800A32F0);
    O32(o, 0x80) = 1;
    CREATE2(-0x90, 0x20, 4, 0x10, 1, func_800A32F0);
    CREATE2(0x88, 0x20, 4, 0x10, 2, func_800A32F0);
    CREATE(0, -0x50, 4, 0x1D, 0, func_800A3388);
    o = CREATE(0x28, 0x48, 2, 0x10, 0x40, func_800A32F0);
    O32(o, 0x80) = 0;
    O32(o, 0x84) = 1;
    o = CREATE(-0x40, -0x68, 4, 0x10, 0x11, func_800A2D84);
    O32(o, 0x84) = 0x11;
    for (i = 0; i < 2; i++) {
        o = CREATE(i ? 0x18 : -0x78, -0x28, 4, 0x10, i ? 0x52 : 0x5A, func_800A3570);
        O32(o, 0x80) = i;
        SET30(o);
    }
    o = CREATE(-0x88, 0x50, 4, 0x10, 0x14, func_800A3410);
    O32(o, 0x84) = 0;
    O32(o, 0x80) = 0;
    o = CREATE(-0x58, 0x58, 4, 0x10, 0x16, func_800A3654);
    O32(o, 0x80) = 1;
    o = CREATE(0x38, 0x50, 4, 0x10, 0x3F, func_800A3410);
    O32(o, 0x84) = 1;
    O32(o, 0x80) = 1;
    SET30(o);
    o = CREATE(0x68, 0x58, 4, 0x10, 0x17, func_800A3654);
    O32(o, 0x80) = 0;
    for (i = 0; i < 2; i++) {
        o = CREATE(i ? -0x88 : 0x38, 0x58, 4, 0x10, 0x13, func_800A3410);
        O32(o, 0x84) = i;
        O32(o, 0x80) = 2;
    }
    o = func_80032F50(-0x88, -0x68, 4, 0x2E, func_800A3AB4);
    O32(o, 0x84) = 0;
    for (i = 0; i < 2; i++) {
        o = func_80032F50(i ? 0x48 : -0x40, 0x40, 3, 0xF, func_800A3AB4);
        O32(o, 0x80) = i;
        O32(o, 0x84) = 1;
        o = func_80033020(i ? 0x48 : -0x40, 0x40, 3, 1, func_800A3AB4);
        O32(o, 0x80) = i;
        O32(o, 0x84) = 2;
    }
    o = CREATE(-0x58, -0x70, 4, 0x10, 0x22, func_800A3BDC);
    O32(o, 0x84) = 0;
    for (i = 0; i < 2; i++) {
        o = CREATE(i ? -0x90 : 0x58, -0x20, 3, 0x10, i ? 0x15 : 0x14, func_800A3BDC);
        O32(o, 0x84) = 1;
        O32(o, 0x80) = 1;
        o = CREATE(i ? -0x80 : 0x70, -8, 3, 0x10, 0x23, func_800A3F70);
        O32(o, 0x84) = i;
        o = CREATE(-0x98, -0x40, 4, 0x10, 0x2A, func_800A4654);
        O32(o, 0x84) = i;
        o = CREATE(i ? -0x98 : 0x58, -0x10, 4, 0x10, 0x6E, func_800A3BDC);
        O32(o, 0x84) = i;
        o = CREATE(-0x78, i ? 0x18 : -0x20, 4, 0x10, 0x2B, func_800A3C70);
        O32(o, 0x80) = 0;
        O32(o, 0x84) = i;
        o = CREATE(8, i ? 0x18 : -0x20, 4, 0x10, 0x2C, func_800A3C70);
        O32(o, 0x80) = 1;
        O32(o, 0x84) = i;
        o = CREATE(0x20, i ? 0x28 : -0x60, 3, 0x12, 0x17, func_800A4720);
        O32(o, 0x84) = i;
        for (j = 0; j < 6; j++) {
            o = CREATE(-0x78 + j * 0x30, 0, 4, 0x10, 0x6F, func_800A4448);
            O32(o, 0x80) = j;
            O32(o, 0x84) = i;
            SET30B(o);
        }
        for (j = 0; j < 4; j++) {
            o = CREATE(-0x98 + j * 0x40, i ? 0x28 : -0x60, 3, 0x10, 0x6F, func_800A40DC);
            O32(o, 0x80) = j;
            O32(o, 0x84) = i;
            SET30B(o);
        }
        for (j = 0; j < 2; j++) {
            o = CREATE2(j ? -0x28 : -0x60, i ? 0x38 : -0x50, 3, 0x10, 5 - j, func_800A4038);
            O32(o, 0x84) = i;
        }
        o = CREATE(-0x48, i ? 0x10 : -0x60, 3, 0x10, 0x34, func_800A3D44);
        O16(o, 0x76) = 0x200;
        O16(o, 0x74) = 0x200;
        O32(o, 0x84) = i;
        o = CREATE(-0x88, -0x50, 3, 0x10, 0x35, func_800A4884);
        O32(o, 0x84) = i;
    }
    CREATE(-0x68, -0x70, 4, 0x10, 0x3E, func_800A4820);
    cnt = 0;
    for (j = 0; j < 5; j++, cnt++) {
        y = -0xA0 + j * 0x40;
        for (i = -0xA0; i < 0xA1; i += 0x40, cnt++) {
            u16 c;
            u32 flags;
            o = func_80032F50(i, y, 0x401, (cnt & 1) ? 0x1E : 0x1F, D_80033450);
            O16(o, 0x6A) = -1;
            O16(o, 0x6E) = 1;
            flags = *(u32 *)(o + 0x38);
            c = *(u16 *)(o + 0x66);
            o[0x5A] = 0x70;
            o[0x59] = 0x70;
            o[0x58] = 0x70;
            *(u32 *)(o + 0x38) = flags | 8;
            *(u16 *)(o + 0x66) = c + 1;
        }
    }
    return func_80012508();
}

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

#define B D_800B3B38
static inline void desenhar_opcao(s32 x, s16 y, s32 selecionada, s32 indice, s32 cor, char *texto, s32 largura)
{
    extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
    s32 c = 0;
    if (selecionada == indice) c = cor;
    func_8001F1A8(x, y, c, 1, 0, texto, 1, largura, 3);
}
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
