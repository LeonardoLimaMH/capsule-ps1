#include "common.h"

extern u8 D_8007891E[], D_80011374[], D_80078988[], D_80078A18[];
extern u8 D_8007891F;
extern s16 D_80078990[];
extern u16 D_800789F0[];
extern u8 *D_80078914;
extern void (*D_80078918)();
extern u8 GetVideoMode();
extern void *memcpy();

#define SEND(x) ((*(void (**)())(D_80078914 + 0x10))(x))
#define E16(o) (*(s16 *)(env + (o)))

u8 *PutDispEnv(u8 *env) {
    u8 *g = D_8007891E;
    u32 mode = 0x8000000;
    s32 w, h, k, t, x0, x1, y0, y1, span, a1;
    u16 *ent;

    if (g[0] >= 2) {
        D_80078918(D_80011374, env);
    }
    SEND(0x5000000 | ((*(u16 *)(env + 2) & 0x3FF) << 10) | (*(u16 *)env & 0x3FF));
    if (*(s32 *)(g + 0x7A) != *(s32 *)(env + 0x10) || *(s16 *)(g + 0x6A) != E16(0) || *(s16 *)(g + 0x6C) != E16(2)
        || *(s16 *)(g + 0x6E) != E16(4) || *(s16 *)(g + 0x70) != E16(6)) {
        env[0x12] = GetVideoMode();
        if (env[0x12] == 1) {
            mode |= 8;
        }
        if (env[0x11] != 0) {
            mode |= 0x10;
        }
        if (env[0x10] != 0) {
            mode |= 0x20;
        }
        if (D_8007891F != 0) {
            mode |= 0x80;
        }
        w = E16(4);
        if (w >= 0x119) {
            if (w < 0x161) {
                mode |= 1;
            } else if (w < 0x191) {
                mode |= 0x40;
            } else if (w < 0x231) {
                mode |= 2;
            } else {
                mode |= 3;
            }
        }
        h = E16(6);
        if (!(h < (env[0x12] != 0 ? 0x121 : 0x101))) {
            mode |= 0x24;
        }
        SEND(mode);
        env[0x12] = 8;
    }
    if (D_80078990[0] != E16(8) || D_80078990[1] != E16(0xA) || D_80078990[2] != E16(0xC)
        || D_80078990[3] != E16(0xE) || env[0x12] == 8) {
        env[0x12] = GetVideoMode();
        y0 = E16(0xA) + (env[0x12] != 0 ? 0x13 : 0x10);
        y1 = E16(0xE) != 0 ? y0 + E16(0xE) : y0 + 0xF0;
        w = E16(4);
        if (w < 0x119) {
            k = 0;
        } else if (w < 0x161) {
            k = 1;
        } else if (w < 0x191) {
            k = 2;
        } else if (w < 0x231) {
            k = 3;
        } else {
            k = 4;
        }
        t = D_80078A18[k];
        ent = D_800789F0 + (env[0x12] * 5 + k) * 2;
        x0 = ent[0] + E16(8) * t;
        span = ent[1] - ent[0];
        if (E16(0xC) != 0) {
            span = (span * E16(0xC)) >> 8;
        }
        x1 = x0 + span;
        if (env[0x12] != 0) {
            x0 = x0 < 0x21C ? 0x21C : (x0 < 0xC95 ? x0 : 0xC94);
            a1 = x0 + D_80078A18[k] * 4;
            x1 = x1 < a1 ? a1 : (x1 < 0xCBD ? x1 : 0xCBC);
            y0 = y0 < 0x13 ? 0x13 : (y0 < 0x130 ? y0 : 0x12F);
            a1 = y0 + 2;
            y1 = y1 < a1 ? a1 : (y1 < 0x132 ? y1 : 0x131);
        } else {
            x0 = x0 < 0x1F4 ? 0x1F4 : (x0 < 0xCB3 ? x0 : 0xCB2);
            a1 = x0 + D_80078A18[k] * 4;
            x1 = x1 < a1 ? a1 : (x1 < 0xCDB ? x1 : 0xCDA);
            y0 = y0 < 0x10 ? 0x10 : (y0 < 0x102 ? y0 : 0x101);
            a1 = y0 + 2;
            y1 = y1 < a1 ? a1 : (y1 < 0x103 ? y1 : 0x102);
        }
        SEND(((x1 & 0xFFF) << 12) | (x0 & 0xFFF) | 0x6000000);
        SEND(((y1 & 0x3FF) << 10) | (y0 & 0x3FF) | 0x7000000);
    }
    memcpy(D_80078988, env, 0x14);
    return env;
}
