#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 unk_0x0;
    u8 unk_0x2[0x17];
    u8 unk_0x19;
    u8 unk_0x1A;
    u8 unk_0x1B;
} Unk_800947E8;

typedef struct {
    u8 unk_0x0[0x288];
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[0x1C];
} Unk_800944B8Init;

typedef struct {
    s32 unk_0x0;
    s32 unk_0x4;
    u8 unk_0x8[0xC];
    u16 unk_0x14;
    u16 unk_0x16;
    u16 unk_0x18;
    u16 unk_0x1A;
    u16 unk_0x1C;
    u16 unk_0x1E;
    u8 unk_0x20;
    u8 unk_0x21;
    u8 unk_0x22;
    u8 unk_0x23;
    u8 unk_0x24;
    u8 unk_0x25;
    u8 unk_0x26;
    u8 unk_0x27;
} Unk_800944B8Stream;

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED
typedef struct {
    struct {
        s32 unk_0x0;
        u8 unk_0x4[0x1C];
        u8 unk_0x20;
        u8 unk_0x21[7];
    } unk_0x0[16];
    u8 unk_0x280[4];
    u8 *unk_0x284;
    s16 unk_0x288;
    s16 unk_0x28A;
    s16 unk_0x28C;
    s16 unk_0x28E;
    u8 unk_0x290[4];
    u32 unk_0x294;
    u32 unk_0x298;
    u8 unk_0x29C[4];
    u16 unk_0x2A0;
    u16 unk_0x2A2;
    u16 unk_0x2A4;
    u8 unk_0x2A6[6];
} Unk_800944B8;

extern Unk_800944B8 D_800944B8[];
extern s32 D_80078C9C;
#endif

extern s32 D_80078C94;
extern s32 D_80078D5C;
extern s32 D_80078C84;
extern s32 func_8003A5F8();
extern s32 func_8004FE3C();
extern u8 D_800949A8[];

#ifndef UNK_800944B8_DEFINED
#define UNK_800944B8_DEFINED

#endif

void func_8003C654(void) {
    extern s32 D_80094768[];
    s32 n, i, j;
    s32 *b;
    volatile s32 temp[2];
    for (n = 0; n < 16; n++) {
        if (D_80094768[n * 2] == 0) break;
    }
    for (i = 0; i < n; i++) {
        s32 (*pairs)[2] = (s32 (*)[2])D_80094768;
        for (j = n - 1; i < j; j--) {
            b = &D_80094768[j * 2];
            if (pairs[i][0] > b[0]) {
                temp[1] = pairs[i][1];
                temp[0] = pairs[i][0];
                pairs[i][1] = b[1];
                pairs[i][0] = b[0];
                b[1] = temp[1];
                b[0] = temp[0];
            }
        }
    }
}

