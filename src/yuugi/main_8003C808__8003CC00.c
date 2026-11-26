#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 pad0[0x284];
    s32 unk284;
    s16 id;
    s16 state;
    s16 volL;
    s16 volR;
    s32 src;
    s32 unk294;
    u8 pad298[0x2AC - 0x298];
} SndVoice;

s32 func_8003CC00(s32 *arg0, s16 arg1) {
    extern s32 D_80078C84;
    extern SndVoice D_800944B8[];
    s32 i;
    s32 magic;

    D_80078C84 = 1;
    magic = *arg0;
    if (magic != 0x53455170 && magic != 0x6468544D && magic != 0x2054444B && magic != 0x3154444B) {
        return -1;
    }
    for (i = 0; i < 1; i++) {
        if (D_800944B8[i].id == -1) {
            D_800944B8[i].src = (s32)arg0;
            D_800944B8[i].id = arg1;
            D_800944B8[i].state = 2;
            D_80078C84 = 0;
            return (s16)i;
        }
    }
    D_80078C84 = 0;
    return -1;
}
