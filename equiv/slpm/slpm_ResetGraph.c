#include "common.h"

extern u8 D_801103EC[], D_80131AEC[], D_80131B34[], D_8011040C[];
extern u8 D_80131BB4[], D_80131BC0[];
extern u8 *D_80131B2C;
extern s32 (*D_80131B30)();
extern void func_80116878(), slpm_ResetCallback(), func_801168A4();
extern u8 func_80115F94();

int slpm_ResetGraph(int mode) {
    switch (mode & 7) {
    case 0:
    case 3:
        slpm_printf(D_801103EC, D_80131AEC, D_80131B34);
    case 5:
        func_80116878(D_80131B34, 0, 0x80);
        slpm_ResetCallback();
        func_801168A4((u32)D_80131B2C & 0xFFFFFF);
        D_80131B34[0] = func_80115F94(mode);
        D_80131B34[1] = 1;
        *(u16 *)(D_80131B34 + 4) = *(u16 *)(D_80131BB4 + D_80131B34[0] * 4);
        *(u16 *)(D_80131B34 + 6) = *(u16 *)(D_80131BC0 + D_80131B34[0] * 4);
        func_80116878(D_80131B34 + 0x10, -1, 0x5C);
        func_80116878(D_80131B34 + 0x6C, -1, 0x14);
        return D_80131B34[0];
    }
    if (D_80131B34[2] >= 2) {
        D_80131B30(D_8011040C, mode);
    }
    return (*(s32 (**)())(D_80131B2C + 0x34))(1);
}
