#include "ghidra.h"
#include "matching.h"
#include "common.h"

extern u8 D_8006B2A4[];

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

void func_800ACD58(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern s8 D_8008619F[];
    extern void func_800185F8();
    u32 v;

    switch (*(u16 *)(arg0 + 0x7A)) {
    case 0:
        *(s16 *)(arg0 + 0x52) = (*(u32 *)(arg0 + 0x3C) << 12) / 20;
        v = *(u32 *)(arg0 + 0x3C) + (D_8008ED68[0x103] < 2 ? 1 : D_8008ED68[0x103]);
        *(u32 *)(arg0 + 0x3C) = v;
        if (v >= 0x15) {
            *(u16 *)(arg0 + 0x7A) += 1;
        }
        break;
    case 1:
        *(s16 *)(arg0 + 0x52) = 0x1000;
        v = *(u32 *)(arg0 + 0x3C) + (D_8008ED68[0x103] < 2 ? 1 : D_8008ED68[0x103]);
        *(u32 *)(arg0 + 0x3C) = v;
        if (v >= 0x3D) {
            *(u32 *)(arg0 + 0x3C) = 0x14;
            *(u16 *)(arg0 + 0x7A) += 1;
        }
        break;
    case 2:
        *(s16 *)(arg0 + 0x52) = (*(u32 *)(arg0 + 0x3C) << 12) / 20;
        v = *(u32 *)(arg0 + 0x3C) - (D_8008ED68[0x103] < 2 ? 1 : D_8008ED68[0x103]);
        *(u32 *)(arg0 + 0x3C) = v;
        if (v == 0) {
            *(u16 *)(arg0 + 0x7A) += 1;
        }
        break;
    case 3:
        v = *(u32 *)(arg0 + 0x3C) + (D_8008ED68[0x103] < 2 ? 1 : D_8008ED68[0x103]);
        *(u32 *)(arg0 + 0x3C) = v;
        if (v >= 0x1F) {
            *(u16 *)(arg0 + 0x7A) += 1;
        }
        break;
    case 4:
        D_8008619F[0] = 1;
        func_800185F8();
        break;
    }
}

extern s32 rsin(s32);

extern s32 rsin(s32);

extern s32 rsin(s32);

