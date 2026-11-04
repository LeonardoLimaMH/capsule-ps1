#include "common.h"
#include "yuugi.h"

typedef struct { s32 f_0; u8 f_4; u8 pad[7]; s32 f_c; s32 pad2[2]; } S_DsEnt;
extern S_DsEnt D_80094AA8[];
extern s32 D_80094B6C[];
extern s32 func_80044AF8(s32);
extern s32 func_80044A4C(s32, s32);

s32 func_800437FC(void) {
    S_DsEnt *e;

    if (func_80044AF8(0) == 1) {
        e = &((S_DsEnt *)((u8 *)D_80094B6C - 0xc4))[D_80094B6C[0]];
        if (e->f_0 != 0) {
            goto call;
        }
    }
    return 0;
call:
    return func_80044A4C(e->f_4, e->f_c) != 0;
}
