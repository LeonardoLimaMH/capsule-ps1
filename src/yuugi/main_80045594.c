#include "common.h"
#include "yuugi.h"

typedef struct {
    u8 unk_0;
    u8 unk_1;
    u8 pad_2[0x1A];
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[5];
    u8 unk_29;
    u8 pad_2A[0x12];
    s32 unk_3C;
} Unk80072F28;

typedef struct {
    u8 unk_0;
    u8 pad_1[7];
    s32 unk_8;
    s32 unk_C;
} Unk80072F3C;

extern Unk80072F28 D_80072F28[];
extern Unk80072F3C D_80072F3C[];
extern void (*D_80094C0C[])(s32);
void func_80045594(s32 a) {
    u8 t = a;
    u8 *s = D_80072F28;
    if (t == 2 && s[0] == 0xE) {
        if ((s[0x29] ^ s[1]) & 0x80) {
            *(s32 *)(s + 0x20) = 0xF;
            *(s32 *)(s + 0x1C) = t;
            *(s32 *)(s + 0x3C) = 3;
        }
        s[0x29] = s[1];
    }
    if ((a & 0xFF) == 5) {
        u8 *c = D_80072F3C;
        if (c[0] & 0x10) {
            *(s32 *)(c + 8) = 2;
            *(s32 *)(c + 0xC) = 0xC;
            if (D_80094C0C[0] != 0 && *(s32 *)(c - 0x18) != 0) {
                D_80094C0C[0](5);
            }
        } else {
            *(s32 *)(c + 8) = 1;
            *(s32 *)(c + 0xC) = 0xB;
        }
    }
}
