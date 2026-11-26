#include "common.h"


#define A1798_B D_800B3B38->unk0
#define A1798_PAD(i) (D_8008ED68->pad[i].unk0)
#define A1798_N(i, k) (D_800B3B38->unk10[i][k])
#define A1798_P(i, k) (D_800B3B70[i][k])
#define A1798_Q(i) (D_800B3B90[i])

void func_800A225C(u8 *p, s16 i) {
    typedef struct {
        u8 pad0[0x88];
        struct {
            u32 unk0;
            u8 pad4[0xC];
        } pad[2];
    } S_8008ED68_A225C;
    typedef struct {
        s16 unk0[2];
        s16 unk4[2];
        s16 unk8[2];
        s16 unkC[2];
    } S_800B3B38_A225C;
    extern S_8008ED68_A225C D_8008ED68[];
    extern S_800B3B38_A225C D_800B3B38[];
    extern s32 D_800B3C08[];
    extern s32 func_80034AB0(s32);
    extern void func_800A2CC8(s32, s32);
    extern void func_80012544(s32);
    extern void func_80012508(void);
    extern s32 rand(void);
    extern void func_800A2678(u8 *);
    extern void func_80034BD8(s32, s32);
    extern void func_80033974(s32);

    s16 *e;
    s16 v;
    u32 pad;

    switch ((s32)D_800B3B38->unk0[i]) {
    case 0:
        pad = D_8008ED68->pad[i].unk0;
        if (pad & 0x20) {
            func_80034AB0(0x48);
            D_800B3B38->unk0[i] = 1;
        } else if (pad & 0x40) {
            func_80034AB0(0x5D);
            func_800A2CC8(0, 2);
            D_800B3B38->unk0[1] = 0;
            D_800B3B38->unk0[0] = 0;
            D_800B3B38->unk8[1] = 0;
            D_800B3B38->unk8[0] = 0;
            D_800B3B38->unkC[1] = 0;
            D_800B3B38->unkC[0] = 0;
            D_800B3B38->unk4[1] = 6;
            D_800B3B38->unk4[0] = 6;
            func_80012544(0x18);
        }
        break;
    case 1:
        func_80034AB0(0x57);
        {
            s16 *base = D_800B3B38->unk0;
            e = &base[i];
        }
        e[2] += 1;
        if (e[2] == 6) {
            e[2] = 0;
        }
        if (D_8008ED68->pad[i].unk0 & 0x20) {
            v = e[2] + (rand() % 3);
            e[0] = 2;
            e[2] = v % 6;
        }
        break;
    case 2:
        D_800B3C08[i] = 0x3C;
        func_80034AB0(0x13);
        D_800B3B38->unk0[i] = 3;
        break;
    case 3:
        if (--D_800B3C08[i] < 0) {
            if (p[0x5D0] == 2) {
                D_800B3B38->unk0[i] = 4;
            } else {
                func_800A2678(p);
                D_800B3B38->unk0[i] = 0;
                D_800B3B38->unk8[i] = 0x1000;
                func_80034BD8(-3, 0);
                func_80033974(0x7015);
                func_80012508();
            }
        }
        break;
    case 4:
        if (D_800B3B38->unk0[0] == 4 && D_800B3B38->unk0[1] == 4) {
            func_800A2678(p);
            D_800B3B38->unk0[1] = 0;
            D_800B3B38->unk0[0] = 0;
            D_800B3B38->unk4[1] = 0;
            D_800B3B38->unk4[0] = 0;
            D_800B3B38->unk8[0] = 0x1000;
            func_80034BD8(-3, 0);
            func_80033974(0x7003);
            func_80012544(0x1A);
        }
        break;
    }
}

