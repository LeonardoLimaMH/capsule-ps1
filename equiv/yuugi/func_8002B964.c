#include "common.h"

extern u16 D_80078C20;
extern u8 D_80069EC4[];

void func_8002B964(u8 *p, s32 idx) {
    u32 t2 = *(u32 *)(p + 4);
    s32 sel;
    u8 *e;
    s32 i;

    if (t2 >= 3 && t2 - 3 < 3) {
        sel = 1 - D_80078C20;
    } else {
        sel = D_80078C20;
    }
    if (*(u32 *)(p + 8) < 6) {
        e = D_80069EC4 + idx * 0x1C + (s16)sel * 0x2D8;
        for (i = 0; i < 2; i++) {
            *(s32 *)(p + 0xA4 + i * 4) = *(s32 *)(e + 4 + i * 4);
        }
        e = D_80069EC4 + idx * 0x1C + (s16)sel * 0x2D8;
        *(s32 *)(p + 0xA0) = *(s32 *)(e + 0xC);
    }
    if (t2 < 6) {
        e = D_80069EC4 + idx * 0x1C + (s16)sel * 0x2D8;
        *(s32 *)(p + 0xB4) = *(s32 *)(e + 0x14);
        *(s32 *)(p + 0xB8) = *(s32 *)(e + 0x18);
    }
}
