#include "common.h"

extern u8 D_800637AC[];
extern u8 D_80078BE4[];

s32 func_8001FA10(s32 sel) {
    u8 *e = D_800637AC;
    s32 i = 0;

    if (*(s32 *)(e + 4) == 0) {
        return 0;
    }
    do {
        func_8001DBF4(*(s16 *)e, *(s16 *)(e + 2), 0, sel == i ? 6 : 3, D_80078BE4, e + 8);
        i++;
        e += 0x18;
    } while (*(s32 *)(e + 4) != 0);
    return i;
}
