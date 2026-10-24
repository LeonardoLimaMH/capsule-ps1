#include "common.h"

extern u16 D_8006AF80;
extern u8 D_800EEB9C[];

void func_800B472C(void) {
    *(s32 *)(D_800EEB9C + 0x10) = 1;
    *(s32 *)(D_800EEB9C + 0xC) = 0;
    *(s32 *)(D_800EEB9C + 0x14) = 0;
    *(s32 *)(D_800EEB9C + 0x18) = 0;
    *(s32 *)(D_800EEB9C + 0x24) = 4;
    *(s32 *)(D_800EEB9C + 0xD0) = 0;
    if (D_8006AF80 == 0xFFFF) {
        D_8006AF80 = 0;
        *(s32 *)(D_800EEB9C + 0x73C) = 0;
    }
    func_8001E388(D_800EEB9C);
}
