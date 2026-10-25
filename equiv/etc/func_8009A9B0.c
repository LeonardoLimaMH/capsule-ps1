#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_800B3ADC;
extern s32 func_80012508(void);
extern s32 func_80012578(void);

s32 func_8009A9B0(void) {
    s32 v;
    if (*(u16 *)(D_8008ED68 + 0xE0)) {
        D_800B3ADC = 0x20;
        return func_80012508();
    }
    v = *(s32 *)(D_8008ED68 + 0xA68);
    if (v) return v;
    return func_80012578();
}
