/* stub-ret: mixed */
/* arg0: small */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
#include "common.h"

extern u8 D_80100F38[], D_80091618[], D_80063940[];
extern s32 D_800EEB70, D_800ED890;
extern s16 D_80078C24, D_80078C28, D_80078C20;
extern u16 D_8008EE44, D_8006AF80;
extern s32 func_800B1260(s32), func_80013920(u8 *);
extern void func_800BA9D8(s32, u8 *);

/* os valores devolvidos reproduzem o que fica em v0 em cada saída */
s32 func_800BA534(s32 a0, u8 *o) {
    s32 k = func_800B1260(a0);
    s16 s;
    u8 *d;
    s32 b;
    if ((u16)k == 0xFFFF) {
        if (D_800EEB70 == 2 || D_800EEB70 == 0) return func_80013920(o);
        return 2;
    }
    if (D_80078C24 == 1 && D_80078C28 == 0) return func_80013920(o);
    if (a0 == 1 && *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x8A) == 0xFFFF &&
        ((*(u32 *)(o + 0x34) >> 8) & 1) != D_80078C20)
        return func_80013920(o);
    if (D_8008EE44 == 0x41) func_80013920(o);
    s = *(s16 *)(D_80100F38 + (u16)k * 0x79C + 0x388);
    if (s == 2) return 2;
    if (s < 0) return 3;
    if (s > 3) return 3;
    func_800BA9D8(a0, o);
    if (D_8008EE44 == 0x26 && D_800ED890 < 2) return 1;
    d = D_80063940 + *(s32 *)(o + 0x8C) * 60;
    b = ((*(u32 *)(d + 0x14) & 3) << 2) | (*(u32 *)(d + 0x10) >> 30);
    if (b != 0) return b;
    if (*(s16 *)(o + 0x4E) <= 0) return *(s16 *)(o + 0x4E);
    *(s16 *)(o + 0x52) = 0xCCC;
    *(s16 *)(o + 0x50) = 0xCC0;
    *(s16 *)(o + 0x52) = 0xCC0;
    return 0xCC0;
}
