#include "common.h"

extern s16 D_80078C2A;
extern u16 D_80078C2C;
extern u8 D_80069E4C[];
extern s32 rsin(), rcos();
extern void func_80025448();

void func_80025050(u8 *p) {
    u8 *S = D_80069E4C;
    s32 fp = *(s32 *)(S + 0x40);
    double d, x, y;
    s32 ang, v;

    if ((u32)(D_80078C2C - 5) < 2) {
        d = (double)(u32)(D_80078C2A - *(s32 *)(p + 0x54));
        d = d * 5.0 / (double)D_80078C2A;
        ang = (s32)d;
        x = (double)rsin(ang) * 896.0 * 0.000244140625;
        y = (double)rcos(ang) * 896.0 * 0.000244140625;
        v = (s32)x;
        if ((s16)D_80078C2C != 5) {
            v = -v;
        }
        *(s32 *)(S + 0x38) = v;
        if ((s16)D_80078C2C == 5) {
            *(s32 *)(S + 0x40) = (s32)((double)(fp + 0x380) - y);
        } else {
            *(s32 *)(S + 0x40) = (s32)((double)(fp - 0x380) + y);
        }
    } else if ((u32)(D_80078C2C - 7) < 2) {
        d = (double)(u32)(D_80078C2A - *(s32 *)(p + 0x54));
        d = d * 5.0 / (double)D_80078C2A;
        ang = (s32)d;
        x = (double)rsin(ang) * 896.0 * 0.000244140625;
        y = (double)rcos(ang) * 896.0 * 0.000244140625;
        v = (s32)x;
        if ((s16)D_80078C2C == 7) {
            v = -v;
        }
        *(s32 *)(S + 0x38) = v;
        if ((s16)D_80078C2C == 7) {
            *(s32 *)(S + 0x40) = (s32)((double)(fp + 0x380) - y);
        } else {
            *(s32 *)(S + 0x40) = (s32)((double)(fp - 0x380) + y);
        }
    } else {
        *(s32 *)(S + 0x38) += *(s32 *)(S + 0x20);
        *(s32 *)(S + 0x40) = fp + *(s32 *)(S + 0x28);
    }
    *(u16 *)(D_80069E4C + 0x48) += *(u16 *)(D_80069E4C + 0x30);
    *(u16 *)(D_80069E4C + 0x4A) += *(u16 *)(D_80069E4C + 0x32);
    *(u16 *)(D_80069E4C + 0x4C) += *(u16 *)(D_80069E4C + 0x34);
    func_80025448();
    if ((u32)(D_80078C2C - 5) < 2) {
        *(s32 *)(D_80069E4C + 0x40) = fp;
    }
    if ((u32)(D_80078C2C - 7) < 2) {
        *(s32 *)(D_80069E4C + 0x40) = fp;
    }
}
