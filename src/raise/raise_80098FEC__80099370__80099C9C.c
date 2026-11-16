#include "common.h"


void func_80099C9C(u8 *o) {
    extern u8 D_8008ED68[];
    extern u8 D_8008F702[];
    extern s32 D_8008F708[];
    extern u32 D_8008F714[];
    extern void func_800125D8(void);
    extern s32 func_800185F8(void *);

    s32 t = *(s32 *)(o + 0x34) & 0x7F;

    if (*D_8008F702 != 1) {
        switch (*(u16 *)(o + 0x7A)) {
        case 0:
            *(s32 *)(o + 0x38) |= 1;
            *(u16 *)(o + 0x7A) += 1;
            break;
        case 1: {
            u8 *ed = D_8008ED68;
            if (*(u16 *)(ed + 0xE4) == 6) {
                *(u16 *)(o + 0x7A) += 1;
            } else if (*(s32 *)(ed + 0x9AC) == 3) {
                func_800185F8(o);
                return;
            }
            break;
        }
        case 2:
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) = (*(s32 *)(o + 0x38) | 8) & ~1;
            *(u16 *)(o + 0x7A) += 1;
        case 3:
            *(s32 *)(o + 0x3C) += 1;
            if (*(s16 *)(o + 0x76) ? ((u32)*(s32 *)(o + 0x3C) >= 9) : ((u32)*(s32 *)(o + 0x3C) >= 0x29)) {
                if (t == 4) {
                    func_800125D8();
                }
                *(s32 *)(o + 0x38) &= ~8;
                *(u16 *)(o + 0x7A) += 1;
            }
            break;
        case 4:
            if (*D_8008F714 == 0) {
                *(s32 *)(o + 0x6C) = 0;
                *(s32 *)(o + 0x68) = 0;
                *(s16 *)(o + 0x76) = -0x200;
                *(u16 *)(o + 0x7A) += 1;
            } else if (*D_8008F714 == 2) {
                *(s16 *)(o + 0x6A) = (t == 4) ? -10 : 10;
                *(s16 *)(o + 0x76) = 0;
                *(s32 *)(o + 0x6C) = 0;
                *(u16 *)(o + 0x7A) += 1;
            }
            break;
        case 5:
            *(s32 *)(o + 0x3C) = 0;
            *(s32 *)(o + 0x38) |= 8;
            *(u16 *)(o + 0x7A) += 1;
        case 6:
            *(s32 *)(o + 0x3C) += 1;
            if (*(s16 *)(o + 0x76) ? ((u32)*(s32 *)(o + 0x3C) >= 9) : ((u32)*(s32 *)(o + 0x3C) >= 0x29)) {
                if (t == 4) {
                    func_800125D8();
                }
                *(u16 *)(o + 0x7A) = 7;
                *(s32 *)(o + 0x38) |= 1;
            }
            break;
        case 7:
            if (*D_8008F714 >= 2) {
                func_800185F8(o);
                return;
            }
            if (*D_8008F714 == 1) {
                *(s32 *)(o + 0x6C) = 0;
                *(s32 *)(o + 0x68) = 0;
                *(s16 *)(o + 0x76) = 0x200;
                *(u16 *)(o + 0x7A) = 1;
            }
            break;
        }
        if (t == 0xF && (*(s32 *)(o + 0x38) & 9) == 0) {
            *(s16 *)(o + 0x46) = *D_8008F708 * 80 - 0x38;
        }
    }
}


extern u8 D_8008ED68[];
extern s32 func_800994FC(u8 *);


extern u8 D_8008ED68[];
extern s32 func_8009A64C(u8 *);


#include "ghidra.h"
typedef struct { u8 pad_0[0x10]; ushort field_10; u8 pad_12[0x72]; ushort field_84; u8 pad_86[0x4]; ushort field_8A; u8 tail[0x11C]; } Record_8009B018;

