#include "common.h"

extern u8 D_80100F38[];

u8 *func_800D5C10(s32 idx) {
    u8 *rec = D_80100F38 + (idx & 0xFFFF) * 0x79C;

    *(s16 *)(rec + 0x396) = 0;
    return rec;
}
