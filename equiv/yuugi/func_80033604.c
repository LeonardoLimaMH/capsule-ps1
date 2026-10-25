#include "common.h"

extern u8 D_800922F0[];
extern void func_800371A4(), func_8003CD70(), func_8003CE14(), func_8003CA90();
extern void func_80033BD0(), SpuSetKey(), func_80036DB0();
extern s32 func_8003D518();

void func_80033604(void) {
    u8 buf[16];
    u8 *s0 = D_800922F0;
    s32 i;

    *(s16 *)(s0 + 4) = 0xFF;
    *(s16 *)(s0 + 6) = 0x5F;
    func_800371A4(0);
    *(s16 *)(s0 + 0x146) = 0;
    if (*(s16 *)(s0 + 0x1192) != -1) {
        if ((s16)func_8003D518(*(s16 *)(s0 + 0x1192)) != 1) {
            func_8003CD70(*(s16 *)(s0 + 0x1192));
            *(u16 *)D_800922F0 &= 0xFF7F;
        }
        func_8003CE14(*(s16 *)(s0 + 0x1192));
    }
    *(s16 *)(s0 + 0x1190) = -1;
    *(s16 *)(s0 + 0x1192) = -1;
    if (*(s16 *)(s0 + 0x118E) != -1) {
        func_8003CA90(*(s16 *)(s0 + 0x118E));
    }
    *(s16 *)(s0 + 0x118C) = -1;
    *(s16 *)(s0 + 0x118E) = -1;
    *(s16 *)(s0 + 0x1196) = 0;
    func_80033BD0();
    SpuSetKey(0, 0xFFFFFF);
    s0[0x125] = 0;
    s0[0x126] = 0;
    for (i = 0; i < 4; i++) {
        s0[0x127 + i] = 0;
        *(s16 *)(s0 + 0x12C + i * 2) = 0;
    }
    *(s16 *)(s0 + 0x110) = 0;
    s0[0x112] = 0;
    s0[0x113] = 0;
    *(s16 *)(s0 + 0x116) = 0;
    *(s32 *)(s0 + 0x118) = 0;
    *(s32 *)(s0 + 0x11C) = 0;
    *(s32 *)(s0 + 0x120) = 0;
    s0[0x114] = 0;
    *(s16 *)s0 = 0;
    buf[0] = 0x26;
    func_80036DB0(buf);
    buf[0] = 0x11;
    func_80036DB0(buf);
}
