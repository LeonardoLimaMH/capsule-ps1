#include "common.h"

extern u16 *D_801333D4;
extern u16 D_80133390[];
extern s32 slpm__spu_note2pitch(s32, s32, s32, s32);
extern void slpm__spu_FsetRXXa(s32, u32);

typedef struct {
    u32 voice; u32 mask;
    s16 vl, vr; u16 vml, vmr; s16 xl, xr;
    u16 pitch, note, sample_note; s16 pad;
    u32 addr, loop_addr;
    s32 a_mode, s_mode, r_mode;
    u16 ar, dr, sr, rr, sl, adsr1, adsr2;
} Attr;

static s32 volmode(u16 m) {
    switch ((s16)(m - 1)) {
    case 0: return 0x8000;
    case 1: return 0x9000;
    case 2: return 0xA000;
    case 3: return 0xB000;
    case 4: return 0xC000;
    case 5: return 0xD000;
    case 6: return 0xE000;
    }
    return 0;
}

static u16 vol(s16 v, u16 m, s32 use) {
    s32 a0 = 0, a1 = v & 0x7FFF;
    if (use) a0 = volmode(m);
    if (a0) {
        if (v >= 0x80) a1 = 0x7F;
        else if (v < 0) a1 = 0;
    }
    return a1 | a0;
}

s32 slpm_SpuSetVoiceAttr(Attr *a) {
    u32 m = a->mask;
    s32 all = m == 0;
    s32 i;
    volatile s32 k, x;
    for (i = 0; i < 24; i++) {
        u32 v8 = i * 8;
        u32 a1, a2;
        if (!(a->voice & (1 << i))) continue;
        if (all || (m & 0x10)) D_801333D4[i * 8 + 2] = a->pitch;
        if (all || (m & 0x40)) D_80133390[i] = a->sample_note;
        if (all || (m & 0x20)) {
            u16 s = D_80133390[i], n = a->note;
            D_801333D4[v8 + 2] = slpm__spu_note2pitch(s >> 8, s & 0xFF, n >> 8, n & 0xFF);
        }
        if (all || (m & 1)) D_801333D4[v8 + 0] = vol(a->vl, a->vml, all || (m & 4));
        if (all || (m & 2)) D_801333D4[v8 + 1] = vol(a->vr, a->vmr, all || (m & 8));
        if (all || (m & 0x80)) slpm__spu_FsetRXXa(v8 | 3, a->addr);
        if (all || (m & 0x10000)) slpm__spu_FsetRXXa(v8 | 7, a->loop_addr);
        if (all || (m & 0x20000)) D_801333D4[v8 + 4] = a->adsr1;
        if (all || (m & 0x40000)) D_801333D4[v8 + 5] = a->adsr2;
        if (all || (m & 0x800)) {
            a1 = a->ar; if (a1 >= 0x80) a1 = 0x7F;
            a2 = 0;
            if ((all || (m & 0x100)) && a->a_mode == 5) a2 = 0x80;
            D_801333D4[v8 + 4] = (D_801333D4[v8 + 4] & 0xFF) | ((a1 | a2) << 8);
        }
        if (all || (m & 0x1000)) {
            a1 = a->dr; if (a1 >= 0x10) a1 = 0xF;
            D_801333D4[v8 + 4] = (D_801333D4[v8 + 4] & 0xFF0F) | (a1 << 4);
        }
        if (all || (m & 0x2000)) {
            a1 = a->sr; if (a1 >= 0x80) a1 = 0x7F;
            a2 = 0x100;
            if (all || (m & 0x200)) {
                switch (a->s_mode) {
                case 1: a2 = 0; break;
                case 5: a2 = 0x200; break;
                case 7: a2 = 0x300; break;
                }
            }
            D_801333D4[v8 + 5] = (D_801333D4[v8 + 5] & 0x3F) | ((a1 | a2) << 6);
        }
        if (all || (m & 0x4000)) {
            a1 = a->rr; if (a1 >= 0x20) a1 = 0x1F;
            a2 = 0;
            if ((all || (m & 0x400)) && a->r_mode != 3 && a->r_mode == 7) a2 = 0x20;
            D_801333D4[v8 + 5] = (D_801333D4[v8 + 5] & 0xFFC0) | (a1 | a2);
        }
        if (all || (m & 0x8000)) {
            a1 = a->sl; if (a1 >= 0x10) a1 = 0xF;
            D_801333D4[v8 + 4] = (D_801333D4[v8 + 4] & 0xFFF0) | a1;
        }
    }
    x = 1;
    for (k = 0; k < 2; k++) x *= 13;
    return 0;
}
