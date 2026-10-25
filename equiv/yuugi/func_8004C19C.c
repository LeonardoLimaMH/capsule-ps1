#include "common.h"

s32 func_8004C19C(void) {
    extern s32 * D_80078A24[];
    extern s32 * D_80078A28[];
    extern s32 * D_80078A30[];
    extern s32 * D_80078A40[];
    extern s32 D_80078A44[];
    extern s32 D_80078A48[];
    extern s32 D_80078A54[];
    extern s32 D_80078A58[];
    extern s32 D_80078A5C[];
    s32 temp_a0;
    s32 temp_v0;

    if (((*D_80078A58) < VSync(-1)) || (temp_a0 = (*D_80078A5C), (*D_80078A5C) += 1, ((temp_a0 > 0xF0000) != 0))) {
        printf("GPU timeout:que=%d,stat=%08x,chcr=%08x,madr=%08x\n", ((*D_80078A44) - (*D_80078A48)) & 0x3F, *(*D_80078A24), *(*D_80078A30), *(*D_80078A28));
        temp_v0 = SetIntrMask(0);
        (*D_80078A48) = 0;
        (*D_80078A54) = temp_v0;
        (*D_80078A44) = (*D_80078A48);
        *(*D_80078A30) = 0x401;
        *(*D_80078A40) |= 0x800;
        *(*D_80078A24) = 0x02000000;
        *(*D_80078A24) = 0x01000000;
        SetIntrMask((*D_80078A54));
        return -1;
    }
    return 0;
}
