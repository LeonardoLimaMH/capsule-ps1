#include "common.h"

typedef struct {
    u8 pad[0x32C];
    s16 x32C;
    u8 pad2[8];
    s16 x336;
    s16 x338;
    u8 pad3[0x79C - 0x33A];
} RaiseSlot_800DCC94;
extern RaiseSlot_800DCC94 D_80100F38[];
u16 func_800B1260(void);
void func_800DCC94(void) {
    struct { u8 pad[0x32C]; s16 x32C; u8 pad2[8]; s16 x336; s16 x338; u8 pad3[0x79C - 0x33A]; } *p;
    s16 a;

    p = (void *)(D_80100F38 + func_800B1260() * 0x79C);
    a = p->x336;
    if (p->x336 > 0) {
        if (p->x336 >= 9) {
            a = 8;
        }
    } else {
        a = 1;
    }
    p->x336 = a;
    p->x338 = (p->x338 > 0) ? ((p->x338 >= 9) ? 8 : p->x338) : 1;
    p->x32C = (p->x336 - 1) * 8 + (p->x338 - 1);
}
