#include "common.h"

extern u8 D_800922F0[];
extern void func_80037404(), SpuGetVoiceEnvelope(), SpuSetKey(), func_800343C4();

#define TBL(v) (*(u8 **)(g + 0x140) + (v) * 16)

void func_80034714(u32 id, s32 pan) {
    s16 e1[4];
    s16 e2[4];
    u8 *g = D_800922F0;
    u8 c;
    s32 found = 0;
    s32 grp, mask, bit, i, k, cnt;
    u16 vid;

    c = g[0x112];
    if (c == 0x40 || c == 0x52 || c == 0x42 || c == 0x4A) {
        return;
    }
    if (id & 0x8000) {
        func_80037404(id & 0xFFFF, 0);
        return;
    }
    grp = TBL(id & 0xFFFF)[3] & 0xF;
    if (grp != 0) {
        mask = 0;
        bit = 1;
        for (i = 0; i < 4; i++, bit <<= 1) {
            SpuGetVoiceEnvelope(i + 0x14, e1);
            if ((TBL(*(u16 *)(g + 0x12C + i * 2))[3] & 0xF) == grp && e1[0] != 0) {
                mask |= bit;
            }
        }
        if (mask != 0) {
            SpuSetKey(0, mask << 20);
        }
        if (mask != 0) {
            for (i = 0; (i & 0xFF) < 4; i++, mask >>= 1) {
                if (mask & 1) {
                    g[0x126] = i;
                    func_800343C4(id & 0xFFFF, g[0x126], (s16)pan);
                    return;
                }
            }
        }
    }
    if (TBL(id & 0xFFFF)[3] & 0xF0) {
        cnt = 0;
        for (i = 0; i < 4; i++) {
            SpuGetVoiceEnvelope(i + 0x14, e2);
            if (e2[0] != 0) {
                vid = *(u16 *)(g + (i & 0xFF) * 2 + 0x12C);
                if (vid == (id & 0xFFFF)) {
                    cnt++;
                    if ((cnt & 0xFF) == (TBL(vid)[3] >> 4)) {
                        g[0x126] = i;
                        func_800343C4(id & 0xFFFF, g[0x126], (s16)pan);
                        return;
                    }
                }
            }
        }
    }
    bit = 1 << g[0x126];
    if (found) {
        return;
    }
    k = 0;
    do {
        SpuGetVoiceEnvelope(g[0x126] + 0x14, e2);
        if (e2[0] == 0) {
            found = 1;
            func_800343C4(id & 0xFFFF, g[0x126], (s16)pan);
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        g[0x126] = g[0x126] + 1;
        g[0x126] = g[0x126] & 3;
        k++;
    } while (k < 4 && !found);
    if (found) {
        return;
    }
    k = 0;
    bit = 1 << g[0x126];
    do {
        if (!(TBL(id & 0xFFFF)[2] < g[0x127 + g[0x126]])) {
            found = 1;
            func_800343C4(id & 0xFFFF, g[0x126], (s16)pan);
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        g[0x126] = g[0x126] + 1;
        g[0x126] = g[0x126] & 3;
        k++;
    } while (k < 4 && !found);
}
