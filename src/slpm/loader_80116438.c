#include "common.h"

extern u8 D_801105C8[];
extern volatile u32 *D_80131C48;
extern volatile u32 *D_80131C3C;
extern s32 D_80131C70;
extern s32 D_80131C74;
extern u8 *D_80131B2C;
extern void func_80113C78();
extern s32 func_80116254();
extern void func_80116850();
extern s32 slpm_VSync();

s32 slpm_LoadImage2(s32 rect, s32 p) {
    func_80113C78(D_801105C8, rect);
    D_80131C70 = slpm_VSync(-1) + 0xF0;
    D_80131C74 = 0;
    for (;;) {
        if (!(*D_80131C48 & 0x1000000) && (*D_80131C3C & 0x4000000)) {
            break;
        }
        if (func_80116254() != 0) {
            return -1;
        }
    }
    slpm_DMACallback(2, func_80116850);
    (*(void (**)())(D_80131B2C + 0x20))(rect, p);
    return 0;
}

extern u8 D_801104EC[];

s32 slpm_StoreImage2(s32 rect, s32 p) {
    func_80113C78(D_801104EC, rect);
    D_80131C70 = slpm_VSync(-1) + 0xF0;
    D_80131C74 = 0;
    for (;;) {
        if (!(*D_80131C48 & 0x1000000) && (*D_80131C3C & 0x4000000)) {
            break;
        }
        if (func_80116254() != 0) {
            return -1;
        }
    }
    slpm_DMACallback(2, func_80116850);
    (*(void (**)())(D_80131B2C + 0x1C))(rect, p);
    return 0;
}

extern char D_8001132C[];

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80116438", slpm_MoveImage2);


extern u8 D_800112E4[];

extern u8 D_80131B36;
extern char D_80110534[];
extern void (*D_80131B30)();

s32 slpm_DrawOTag2(u32 *ot) {
    if (D_80131B36 >= 2) {
        D_80131B30(D_80110534, ot);
    }
    D_80131C70 = slpm_VSync(-1) + 0xF0;
    D_80131C74 = 0;
    for (;;) {
        if (!(*D_80131C48 & 0x1000000) && (*D_80131C3C & 0x4000000)) {
            break;
        }
        if (func_80116254() != 0) {
            return -1;
        }
    }
    slpm_DMACallback(2, func_80116850);
    (*(void (**)())(D_80131B2C + 0x18))(ot);
    return 0;
}
