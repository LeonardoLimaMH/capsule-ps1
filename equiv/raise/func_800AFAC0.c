/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x8006AF84 1 0,20,1200,1220,2400 */
/* rand-u16: 0x8006AF86 1 0 */
#include "common.h"

/* a partir do contador D_8006AF84 (ciclos de 28800, faixas de 1200): ajusta três valores em
   D_80069AD4 e, a cada 20, avisa as unidades ativas */
extern u8 D_80091618[], D_80063940[], D_80069AD4[];
extern s16 D_800EEAE4[];
extern u16 D_800EEB14[];
extern s32 D_8006AF84, D_8008EDF0;
extern u16 D_8006AF80;
extern void func_800CC46C(s32, s32, s32, s32), func_800B0DE4(s32, s32), func_800B0B0C(s32, s32);
extern void func_800B1088(s32, s32, s32);
extern s32 func_800D1548(void), func_800B1198(void), func_800E0FB8(s32, s32), func_800E1140(s32);
extern s32 func_800E1388(s32), func_800E1624(s32), func_800E1594(s32), func_800E14C4(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

static s32 role(u16 i) {
    if (*(u16 *)(E(i) + 0x10) == 0xFFFF) return -1;
    if (i == D_8006AF80) return 1;
    return (i != *(u16 *)(E(D_8006AF80) + 0x8A)) * 2;
}

void func_800AFAC0(void) {
    s32 t = D_8006AF84;
    s32 h = (t % 28800) / 1200;
    s32 m = t % 1200;
    u16 v = D_800EEB14[h] + (m * D_800EEAE4[h]) / 1200;
    s32 i, r;
    *(u16 *)(D_80069AD4 + 0x7C) = v;
    *(u16 *)(D_80069AD4 + 0x76) = v;
    *(u16 *)(D_80069AD4 + 0x70) = v;
    if (m == (m / 20) * 20) {
        s32 q = m / 20;
        for (i = 0; i < 6; i++) {
            r = role(i);
            if (r != -1) func_800CC46C(r, i, h, q);
        }
    }
    if (D_8008EDF0 & 0xC) return;
    for (i = 0; i < 6; i++) {
        r = role(i);
        if (r == -1) continue;
        if (func_800D1548() == 0) {
            u16 c = *(u16 *)E(i);
            if (((*(u32 *)(D_80063940 + c * 60 + 8) >> 14) & 7) == 4) continue;
            if (r != 2) {
                if (func_800B1198() != 0) continue;
                if (func_800E0FB8((u16)i, 0xFFFF) != 0) continue;
                if (func_800E1140((u16)i) == 0) continue;
                if (func_800E1388((u16)i) == 0) continue;
                if (func_800E1624((u16)i) == 1) continue;
                if (func_800E1594((u16)i) == 1) continue;
                if (func_800E1140((u16)i) == 0) continue;
            }
            if (func_800E14C4((u16)i) == 1) func_800B0DE4(r, i);
            else func_800B0B0C(r, i);
        }
        if (m == 0) func_800B1088(r, i, 0);
    }
}
