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

void func_80013028(u8 *p) {
    Tim t;
    u32 packed;

    p += 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028", func_800130D8);

#include "common.h"

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028", func_80013180);

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028", func_800131C0);
