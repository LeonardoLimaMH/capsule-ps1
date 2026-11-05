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
extern void (*D_80094C0C[])();
void func_80045594(s32 a) {
    register u8 t asm("a3") = a;
    register Unk80072F28 *s asm("a2") = D_80072F28;
    if (t == 2 && s->unk_0 == 0xE) {
        if ((s->unk_29 ^ s->unk_1) & 0x80) {
            s->unk_20 = 0xF;
            s->unk_1C = t;
            s->unk_3C = 3;
        }
        s->unk_29 = s->unk_1;
    }
    if ((a & 0xFF) == 5) {
        register Unk80072F3C *c asm("a0") = D_80072F3C;
        if (c->unk_0 & 0x10) {
            c->unk_8 = 2;
            c->unk_C = 0xC;
            if (D_80094C0C[0] != 0 && *(s32 *)((u8 *)c - 0x18) != 0) {
                D_80094C0C[0](5);
            }
        } else {
            c->unk_8 = 1;
            c->unk_C = 0xB;
        }
    }
}
