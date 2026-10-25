#include "common.h"

extern u8 D_8008ED68[];
extern u8 D_80099C08[];

u8 *func_800124A0(void) {
    func_80013668();
    *(void **)(D_8008ED68 + 0xCC) = (void *)D_80099C08;
    *(s32 *)(D_8008ED68 + 0xC8) = 0;
    *(s16 *)(D_8008ED68 + 0xDC) = 0;
    *(s16 *)(D_8008ED68 + 0xE0) = 0;
    *(s16 *)(D_8008ED68 + 0xDE) = 0;
    *(s16 *)(D_8008ED68 + 0xE2) = 0;
    *(s16 *)(D_8008ED68 + 0xE4) = 0;
    *(s16 *)(D_8008ED68 + 0xE6) = 0;
    *(s16 *)(D_8008ED68 + 0xE8) = 0;
    *(s16 *)(D_8008ED68 + 0xEA) = 0;
    *(s16 *)(D_8008ED68 + 0xEC) = 0;
    *(s16 *)(D_8008ED68 + 0xEE) = 0;
    *(s32 *)(D_8008ED68 + 0xF8) = 0;
    return D_8008ED68;
}
