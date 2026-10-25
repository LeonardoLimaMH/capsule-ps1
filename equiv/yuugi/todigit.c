#include "common.h"

extern u8 D_80078A7D[];
extern s32 tolower();

s32 todigit(s32 c) {
    u8 t = D_80078A7D[c & 0xFF];

    if (t & 4) {
        return (s8)c - 0x30;
    }
    if (t & 3) {
        return (s8)tolower((s8)c) - 0x57;
    }
    return 9999999;
}
