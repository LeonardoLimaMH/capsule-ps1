#include "common.h"

/* rand-u16: 0x8006AF80 1 0,1,2,3,5,9 */
extern u8 D_80091620[], D_800F038C[], D_800EFF58[];
extern u16 D_800F0568[];
extern u16 D_8006AF80;
extern void func_8001611C(s32), func_8001A998(void *, s32);
extern void func_800BD830(void), func_800BD8A8(void), func_800BD920(void), func_800BDA18(void);
extern void func_800BD998(s32);
extern s32 func_800BE020(s32);

s32 func_800BD57C(void) {
    s32 i;
    func_8001611C(0x1000);
    func_8001A998(D_80091620 + D_8006AF80 * 0x1A8, 8);
    func_8001A998(D_800F038C, 8);
    *(s32 *)(D_800F038C + 8) = 0;
    *(s32 *)(D_800F038C - 0xC) = 0;
    for (i = 7; i >= 0; i--) D_800F0568[i] = 0xA6;
    *(s32 *)(D_800EFF58 + 0x440) = 0;
    *(s32 *)(D_800EFF58 + 0x444) = 0;
    func_800BD830();
    func_800BD8A8();
    func_800BD920();
    func_800BDA18();
    for (i = 0; i < 2; i++) func_800BD998(i);
    return func_800BE020(3);
}
