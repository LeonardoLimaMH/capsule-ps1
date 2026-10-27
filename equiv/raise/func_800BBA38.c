#include "common.h"

/* cria um objeto 2D (callback func_800BB814) com sprite ou animação de uma tabela */
typedef struct { u8 b[8]; } B8;
extern u8 D_8008ED68[];
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *), func_80015CD0(void *, s32, s32);
extern s32 func_80019F30(s32, s32);
extern void func_800BB814(void), func_800161C4(void);

#define O16(x) (*(s16 *)(o + (x)))
#define O32(x) (*(s32 *)(o + (x)))

u8 *func_800BBA38(s32 pri, s32 x, s32 y, s32 z, u16 clut, s32 *tab, s32 idx, s32 mode, s32 vis, s32 b6,
                    u16 semi, s32 flag, B8 *col) {
    u8 *o = func_80015B3C(func_800BB814, func_800161C4, pri);
    if (o == 0) return 0;
    func_80015EF8(o);
    if (mode == 0) {
        s32 s = tab[6] + idx;
        func_80015CD0(o + 0x14, func_80019F30(tab[0] | 0x70000, s), 0);
        O32(0x7C) = s;
    } else {
        s32 r = func_80019F30(tab[0] | 0x60000, tab[3] + idx);
        O32(0x1C) = 0;
        O32(0x18) = r;
    }
    O16(0x66) = clut;
    O32(0x30) = (((O32(0x30) & ~0x1C0) & ~0x30) | ((semi & 3) << 4)) & ~8;
    O16(0x46) = x - *(s32 *)(D_8008ED68 + 0x108) / 2;
    O16(0x4E) = z;
    O32(0x38) = ((((O32(0x38) & ~1) | (vis & 1)) & ~0x30) & ~0x40) | ((b6 & 1) << 6);
    O16(0x4A) = y - *(s32 *)(D_8008ED68 + 0x10C) / 2;
    o[0x5B] = flag;
    if (flag == 1) *(B8 *)(o + 0x5C) = *col;
    return o;
}
