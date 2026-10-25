#include "common.h"

extern u8 D_80085428[];
extern u16 D_8008EE44;
extern u8 D_80078C6C[];
extern s16 D_800B3B40;
extern void func_800A3128(void);
extern s32 func_80019F30(s32, s32);

s32 func_800A3230(u8 *p) {
    s32 idx;
    u8 m, c;
    func_800A3128();
    if (D_8008EE44 != 0xF) return 0x80080000; /* lixo do %hi no delay slot */
    idx = *(s32 *)(p + 0x80);
    m = D_80078C6C[idx];
    if (!(D_80085428[0x5D6] & m)) return m;
    *(s32 *)(p + 0x18) = func_80019F30(0x60013, idx + 0x32);
    *(u16 *)(p + 0x46) += 4;
    *(u16 *)(p + 0x4A) += 4;
    c = D_800B3B40 == *(s32 *)(p + 0x80) ? 0x80 : 0x40;
    p[0x5A] = c;
    p[0x59] = c;
    p[0x58] = c;
    return c;
}
