#include "common.h"

extern u8 D_8008ED68[];
extern void func_8004FEDC(), func_8004FEEC();

void func_800131C0(void) {
    u32 st[2];
    u8 *base = D_8008ED68;
    u8 *p, *s1;
    u32 v, cur, old, *c;
    s32 i, j;

    func_8004FEDC();
    for (i = 0; i < 2; i++) {
        p = base + i * 0x22;
        s1 = base + i * 0x10;
        if ((p[0x3D] >> 4) == 4) {
            v = p[0x3F] | (p[0x3E] << 8);
        } else {
            v = 0xFFFF;
        }
        st[i] = ~v & 0xFFFF;
        func_8004FEEC();
        cur = st[i];
        old = *(u32 *)(s1 + 0x80);
        *(u32 *)(s1 + 0x84) = old;
        *(u32 *)(s1 + 0x80) = cur;
        *(u32 *)(s1 + 0x88) = ~old & cur;
        *(u32 *)(s1 + 0x8C) = ~cur & *(u32 *)(s1 + 0x84);
    }
    for (i = 0; i < 2; i++) {
        p = base + i * 0x10;
        for (j = 0; j < 4; j++) {
            c = (u32 *)(p + 0xA4 + j * 4);
            if (*(u32 *)(p + 0x80) & (1 << (j + 12))) {
                if (base[0x103] < 2) {
                    *c = *c + 1;
                } else {
                    *c = *c + base[0x103];
                }
            } else {
                *c = 0;
            }
        }
    }
}
