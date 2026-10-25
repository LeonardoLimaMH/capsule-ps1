#include "common.h"

extern u8 D_80078B90[];
extern s16 D_80078B88[];

void func_80018EF4(s32 a0, s32 a1, s32 a2, s32 a3, s32 e) {
    if (a3 == 0) {
        func_800188F0((s16)a0, (s16)a1, D_80078B90[a2], 4, e);
    } else {
        func_8001F1A8((s16)a0, (s16)a1, 4, 1, 0, &D_80078B88[a2], 1, 1, e);
    }
}
