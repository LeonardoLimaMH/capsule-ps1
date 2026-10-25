#include "common.h"

extern u32 *D_80078A24;
extern u8 D_80094CB8[];

u32 func_8004B8B8(u32 value) {
    *D_80078A24 = value;
    D_80094CB8[value >> 24] = value;
    return value >> 24;
}
