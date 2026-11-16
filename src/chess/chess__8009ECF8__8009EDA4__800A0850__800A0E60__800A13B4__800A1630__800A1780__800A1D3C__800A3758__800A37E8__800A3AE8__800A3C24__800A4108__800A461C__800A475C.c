#include "ghidra.h"
#include "matching.h"
#include "common.h"

INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60__800A13B4__800A1630__800A1780__800A1D3C__800A3758__800A37E8__800A3AE8__800A3C24__800A4108__800A461C__800A475C", func_800A475C);

s32 func_800A4858(s32 unused_arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 temp_a0;
    s16 temp_a3;

    temp_a0 = M2C_FIELD(arg3, s16 *, 0);
    if ((temp_a0 >= ((arg1 * 0x64) - 0x258)) && ((((arg1 + 1) * 0x64) - 0x258) >= temp_a0)) {
        temp_a3 = M2C_FIELD(arg3, s16 *, 4);
        if (temp_a3 >= ((arg2 * 0x64) - 0x258)) {
            return ((((arg2 + 1) * 0x64) - 0x258) < temp_a3) ^ 1;
        }
        /* Duplicate return node #5. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
