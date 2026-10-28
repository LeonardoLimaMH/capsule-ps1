/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

/* cria os objetos da tela (todos com a rotina func_8009A64C) */
extern u8 D_80091618[], D_800E8AA4[];
extern s32 D_8008F708;
extern u16 D_8006AF80;
extern u8 *func_80015B3C(void *, void *, s32);
extern void func_80015EF8(u8 *), func_80015CD0(void *, s32, s32), func_800BE020(s32);
extern s32 func_80019F30(s32, s32);
extern void func_8009A64C(void), func_800161C4(void);

#define O16(o, x) (*(s16 *)((o) + (x)))
#define O32(o, x) (*(s32 *)((o) + (x)))
#define SET34(o, v) (O32(o, 0x34) = (O32(o, 0x34) & ~0x7F) | (v))
#define E(i) (D_80091618 + (i) * 0x1A8)

static u8 *new_obj(void) {
    u8 *o = func_80015B3C(func_8009A64C, func_800161C4, 2);
    func_80015EF8(o);
    return o;
}

void func_8009AA50(void) {
    u8 *o;
    s32 i, j;
    func_800BE020(4);
    o = new_obj();
    func_80015CD0(o + 0x14, func_80019F30(0x7000E, 0xD), 0);
    O16(o, 0x6A) = -10;
    O16(o, 0x4A) = -0x28;
    O16(o, 0x4E) = 4;
    O16(o, 0x46) = D_8008F708 * 80 + 0x158;
    SET34(o, 0xF);
    for (i = 0; i < 2; i++) {
        o = new_obj();
        O32(o, 0x18) = func_80019F30(0x6000E, i + 0xEB);
        O16(o, 0x46) = 0x158 + i * 0x50;
        O16(o, 0x6A) = -10;
        O16(o, 0x4A) = -0x28;
        O16(o, 0x4E) = 4;
        SET34(o, 0xE);
    }
    for (i = 0; i < 2; i++) {
        o = new_obj();
        O32(o, 0x18) = func_80019F30(0x6000E, i ? 0xFA : 0xED);
        O16(o, 0x46) = i == 1 ? 0x100 : -0x220;
        O16(o, 0x6A) = i == 1 ? -10 : 10;
        O16(o, 0x4A) = -0x70;
        O16(o, 0x4E) = 4;
        SET34(o, (i + 2) & 0x7F);
    }
    for (i = 0; i < 2; i++) {
        s32 s6 = (i + 0xB) & 0x7F, s5 = (i + 9) & 0x7F;
        for (j = 0; j < 3; j++) {
            u16 s1 = i == 0 ? D_8006AF80 : *(u16 *)(E(D_8006AF80) + 0x8A);
            o = new_obj();
            O16(o, 0x46) = i == 0 ? -0x218 : 0x1B8;
            O16(o, 0x6A) = i == 0 ? 10 : -10;
            O16(o, 0x4A) = -0x10;
            O16(o, 0x4E) = 4;
            if (j == 0) {
                SET34(o, s6);
                O32(o, 0x18) = func_80019F30(0x6000E, D_800E8AA4[*(u16 *)(E(s1) + 0x10)] + 0x83);
                O16(o, 0x46) += 8;
                O16(o, 0x4A) += 0x30;
            } else if (j == 1) {
                SET34(o, s5);
                O32(o, 0x18) = func_80019F30(0x6000E, s1 + 0xDB);
                O32(o, 0x7C) = s1;
                O16(o, 0x46) += 8;
                O16(o, 0x4A) += 8;
            } else {
                SET34(o, 7);
                O32(o, 0x18) = func_80019F30(0x6000E, 0xEE);
            }
        }
    }
    o = new_obj();
    O32(o, 0x30) = (O32(o, 0x30) & ~0x1C0) | 0x40;
    func_80015CD0(o + 0x14, func_80019F30(0x7000E, 0xF), 0);
    O16(o, 0x46) = -0x18;
    O16(o, 0x4A) = 0x1B8;
    O16(o, 0x6E) = -10;
    O16(o, 0x4E) = 4;
    SET34(o, 0xD);
}
