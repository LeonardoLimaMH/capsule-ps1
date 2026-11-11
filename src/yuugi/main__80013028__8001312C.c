#include "common.h"
#include "yuugi.h"

#include "common.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

extern s32 ReadTIM();
extern s32 func_80019F30();

s32 func_8001312C(s32 arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *temp_a0;
    u8 *base = D_8008ED68;

    temp_a0 = base + arg0 * 0x22;
    if (((temp_a0[0x3D] >> 4) == 4) && (arg1 == 0)) {
        return temp_a0[0x3F] | (temp_a0[0x3E] << 8);
    }
    return 0xFFFF;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028__8001312C", func_80013180);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028__8001312C", func_800131C0);
