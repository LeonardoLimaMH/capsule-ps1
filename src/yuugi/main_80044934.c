#include "common.h"
#include "yuugi.h"

typedef struct {
    s32 unk_0;
    u8 unk_4;
    u8 unk_5[4];
} Unk80072F24;
typedef struct {
    s32 unk_0;
    u8 unk_4[8];
} Unk80072F30;
typedef struct {
    u8 unk_0;
    u8 pad_1[3];
    s32 unk_4;
    s32 unk_8;
    s32 unk_C;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16[4];
    u8 unk_1A;
    u8 unk_1B;
    u8 unk_1C;
    u8 unk_1D;
    u8 unk_1E;
    u8 unk_1F;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
} Unk80072F3C;
extern Unk80072F24 D_80072F24[];
extern Unk80072F30 D_80072F30[];
extern Unk80072F3C D_80072F3C[];
extern void DsIntToPos(s32, void *);
void func_80044934(void) {
    register s32 i;
    u8 *p;
    register u8 *b;
    u8 *c;

    b = D_80072F24;
    p = b + 8;
    *(s32 *)b = 0;
    b[4] = 0;
    for (i = 3; i >= 0; i--) {
        *p = 0;
        p--;
    }
    b = D_80072F30;
    *(s32 *)b = 0;
    b += 0xB;
    for (i = 7; i >= 0; i--) {
        *b = 0;
        b--;
    }
    c = D_80072F3C;
    *(s32 *)(c + 8) = 2;
    *(s32 *)(c + 0xC) = 0xE;
    c[0] = 0;
    *(s32 *)(c + 4) = 0;
    *(s32 *)(c + 0x10) = 0x15;
    c[0x14] = 0;
    c[0x15] = 0;
    DsIntToPos(0, c + 0x16);
    c[0x1A] = 0;
    c[0x1B] = 0;
    c[0x1C] = 0;
    c[0x1D] = 0;
    c[0x1E] = 0;
    c[0x1F] = 0;
    *(s32 *)(c + 0x20) = 0;
    *(s32 *)(c + 0x24) = 1;
    *(s32 *)(c + 0x28) = 0;
    *(s32 *)(c + 0x30) = 0;
    *(s32 *)(c + 0x2C) = 0;
    *(s32 *)(c + 0x34) = 0;
}
