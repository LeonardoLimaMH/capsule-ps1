/* stub-ret: mixed */
/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern s32 D_80069E4C[];
extern u16 D_80078C20;
extern s32 func_800B1350(s32);
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_8002CBDC(u8 *), func_8002858C(s32, s32, void *, s32, s32);
extern void D_8002CA80(void), D_8002C93C(void), D_80018600(void);

#define O32(o, x) (*(s32 *)((o) + (x)))

void func_800E2AA0(s32 a0, s32 a1, s32 a2) {
    u16 k = func_800B1350(a1);
    s32 i;
    __asm__("" :: "r"(&a0), "r"(&a2)); /* o original guarda a0/a2 nos slots de argumento */
    for (i = 0; i < 3; i++) {
        s32 *row = (s32 *)(D_800EF524 + a0 * 0x9C + i * 0x34);
        s32 s1;
        u8 *o, *m;
        if (row[0] == -1) {
            *(u8 **)(D_80091618 + k * 0x1A8 + 0x18C + i * 4) = 0;
            continue;
        }
        s1 = a1 == 1 ? i : i + 3;
        o = func_80015B3C(a1 == 1 ? (void *)D_8002CA80 : (void *)D_8002C93C, D_80018600, i);
        if (o == 0) continue;
        *(u16 *)(o + 0x4C) = a1 == 1 ? D_80078C20 : 1 - D_80078C20;
        *(u16 *)(o + 0x4E) = 0;
        m = D_800900C0 + s1 * 0xBC;
        *(u8 **)(o + 0x18) = m;
        *(s32 *)m = a2 == 1 ? row[1] : -1;
        func_8002CBDC(o);
        D_80069E4C[0x15] = row[3] != 0;
        D_80069E4C[0x16] = row[2] * 2 + (row[3] != 0);
        func_8002858C(0xE, row[0], *(u8 **)(o + 0x18), 0, s1);
        if (a1 == 1 && a0 == 7) *(u8 **)(D_800EF524 + 0x444 + i * 0x34 + 0x30) = o;
        O32(*(u8 **)(o + 0x18), 0x10) = 0x1000;
        O32(*(u8 **)(o + 0x18), 0x14) = 0x1000;
        O32(*(u8 **)(o + 0x18), 0x18) = 0x1000;
        O32(*(u8 **)(o + 0x18), 0x34) = a1 == 1 ? 0 : (a2 == 1 ? -0x320 : -0x640);
        O32(*(u8 **)(o + 0x18), 0x38) = 0;
        O32(*(u8 **)(o + 0x18), 0x3C) = 0;
        *(u16 *)(o + 0x4C) = a1 == 1 ? D_80078C20 : 1 - D_80078C20;
        *(u8 **)(D_80091618 + k * 0x1A8 + 0x18C + i * 4) = o;
    }
}
