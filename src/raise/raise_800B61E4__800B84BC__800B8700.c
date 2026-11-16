#include "common.h"

extern s16 D_80078C20[];
extern u8 D_80091618[];
extern s32 D_800EFF4C[];
extern s32 func_80013928(s32);
extern s32 func_800B1260(s32);
extern s32 func_800B84FC(s32, s32, s32);

extern s32 func_80013928(s32);
extern s32 func_800B1260(s32);
extern s32 func_800B84FC(s32, s32, s32);

s32 func_800B8700(u16 arg0, s32 arg1, s32 arg2) {
    s16 i;

    switch (arg0) {
    case 0x18:
        if (arg2 != 0) {
            if (arg2 == 1) {
                u8 *base = D_80091618;
                u16 idx = arg1;
                D_800EFF4C[0] = func_800B84FC(idx, *(u16 *)(base + idx * 0x1A8), D_80078C20[0]);
            }
        } else {
            func_80013928(D_800EFF4C[0]);
        }
        break;
    case 0x19:
        if (arg2 != 0) {
            if (arg2 == 1) {
                for (i = 1; i >= 0; i--) {
                    u16 id = func_800B1260(i);
                    D_800EFF4C[1 - i] = func_800B84FC(id, *(u16 *)(D_80091618 + id * 0x1A8), 2);
                }
            }
        } else {
            for (i = 1; i >= 0; i--) {
                func_80013928(D_800EFF4C[1 - i]);
            }
        }
        break;
    }
    return 1;
}
