#include "common.h"

s32 func_80116254(void) {
    extern s32 * D_80131C3C[];
    extern s32 * D_80131C40[];
    extern s32 * D_80131C48[];
    extern s32 * D_80131C58[];
    extern s32 D_80131C5C[];
    extern s32 D_80131C60[];
    extern s32 D_80131C6C[];
    extern s32 D_80131C70[];
    extern s32 D_80131C74[];
    s32 temp_a0;
    s32 temp_v0;

    if (((*D_80131C70) < slpm_VSync(-1)) || (temp_a0 = (*D_80131C74), (*D_80131C74) += 1, ((temp_a0 > 0xF0000) != 0))) {
        slpm_printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x\n", ((*D_80131C5C) - (*D_80131C60)) & 0x3F, *(*D_80131C3C), *(*D_80131C48), *(*D_80131C40));
        temp_v0 = slpm_SetIntrMask(0);
        (*D_80131C60) = 0;
        (*D_80131C6C) = temp_v0;
        (*D_80131C5C) = (*D_80131C60);
        *(*D_80131C48) = 0x401;
        *(*D_80131C58) |= 0x800;
        *(*D_80131C3C) = 0x02000000;
        *(*D_80131C3C) = 0x01000000;
        slpm_SetIntrMask((*D_80131C6C));
        return -1;
    }
    return 0;
}
