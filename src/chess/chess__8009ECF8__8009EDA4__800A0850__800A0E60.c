#include "ghidra.h"
#include "matching.h"
#include "common.h"

typedef struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[0x5D0 - 0x18];
    u8 unk5D0[0xA];
    u8 unk5DA;
    u8 pad5DB[0x5E4 - 0x5DB];
    u8 unk5E4[2];
    u8 pad5E6[0xBD8 - 0x5E6];
    u16 unkBD8;
    u8 padBDA[0xBEC - 0xBDA];
    u8 unkBEC;
} S0E60;
static inline s32 lookup_A0E60(s32 idx, u32 t, s32 n) {
    extern s32 D_80065310[];
    s32 off;
    if (t >= 8U) {
        off = 0;
    } else {
        off = idx * 0x980 - 0x5580;
    }
    return *(s32 *)(n * 4 + (D_80065310[t] + off)) + off;
}
INCLUDE_ASM("asm/chess/nonmatchings/chess__8009ECF8__8009EDA4__800A0850__800A0E60", func_800A0E60);

s32 func_800A11C0(u8 *arg0, s32 arg1, s32 arg2) {
    extern s32 D_80065310[];
    u8 *p = arg0 + arg1;
    u32 t;
    s32 off;

    if (p[0x5E4] != 0xFF) {
        if (arg2 == 0) {
            t = p[0x5E4];
            if (arg0[0x5D0] == 0) {
                return 0;
            }
            arg2 = 0x22;
            if (t >= 8U) {
                off = 0;
            } else {
                off = arg1 * 0x980 - 0x5580;
            }
            *(s32 *)(arg0 + 0x14) = *(s32 *)(arg2 * 4 + (D_80065310[t] + off)) + off;
        } else {
            arg2 = 0x23;
            t = p[0x5E4];
            if (t >= 8U) {
                off = 0;
            } else {
                off = arg1 * 0x980 - 0x5580;
            }
            *(s32 *)(arg0 + 0x14) = *(s32 *)(arg2 * 4 + (D_80065310[t] + off)) + off;
        }
        return 1;
    }
    return 0;
}
