#include "common.h"

typedef struct {
    s32 mask;
    s16 mvol_left;
    s16 mvol_right;
    s16 mvolmode_left;
    s16 mvolmode_right;
    u8 rest[0x1C];
} SpuCommonAttrLocal;

void func_8003C950(s32 left, s32 right) {
    SpuCommonAttrLocal attr;

    attr.mvol_left = left << 7;
    attr.mask = 0xF;
    attr.mvol_right = right << 7;
    attr.mvolmode_left = 0;
    attr.mvolmode_right = 0;
    SpuSetCommonAttr(&attr);
}
