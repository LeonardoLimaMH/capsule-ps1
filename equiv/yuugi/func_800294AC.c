/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern u8 D_80091618[];
extern u16 D_80069AB4[];
extern u8 D_800EF364[];
extern s32 func_800B1260(void);
extern s32 func_800A9658(s32);

/* div sem verificações de zero/estouro, como no original */
static void divmod(s32 a, s32 b, s32 *q, s32 *r) {
    s32 lo, hi;
    __asm__ volatile("div $0,%2,%3\n\tmflo %0\n\tmfhi %1" : "=r"(lo), "=r"(hi) : "r"(a), "r"(b));
    *q = lo;
    *r = hi;
}

s32 func_800294AC(s32 a0, s32 a1) {
    u32 r;
    u8 *fp, *ent, *map;
    u16 s5, i, j, cnt;
    s16 *s0;
    s32 s3, s2, q, m;

    r = func_800B1260() & 0xFFFF;
    if (r == 0xFFFF) return 0;
    fp = D_80100F38 + r * 0x79C;
    ent = D_80091618 + r * 0x1A8;
    s5 = *(u16 *)(ent + 0x10);
    if (s5 == 0xFFFF) return 0;
    for (i = 0; i < *(u16 *)(ent + 0x12); i++) {
        s0 = (s16 *)&D_80069AB4[*(u16 *)(ent + 0x14 + i * 2)];
        s3 = *(s32 *)(ent + 0x1C + i * 12);
        s2 = *(s32 *)(ent + 0x20 + i * 12);
        cnt = func_800A9658((s16)(*s0 - 1));
        if (cnt == 0) continue;
        map = D_800EF364 + (s5 << 6);
        j = 0;
        do {
            divmod(j, *s0, &q, &m);
            if (a1 == map[(s3 - ((u16)q + 1)) * 8 + (s2 - ((u16)m + 1))]) return 1;
            j++;
        } while (j < cnt);
    }
    return a1 == D_800EF364[(s5 << 6) + *(s16 *)(fp + 0x336) * 8 + *(s16 *)(fp + 0x338) - 9];
}
