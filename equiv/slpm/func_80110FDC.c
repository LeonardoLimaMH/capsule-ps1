#include "common.h"

typedef struct { s16 x, y, w, h; } Rect;
extern s32 D_8013348C, D_80133484, D_80133488;
extern s32 D_80134E9C;
extern u8 *D_801334A0;
extern void StCdInterrupt(void);
extern void slpm_LoadImage(Rect *, u32);
extern void slpm_DrawSync(s32);
extern void DecDCTout(u32, s32);

#define D16(o) (*(u16 *)(D_801334A0 + (o)))
#define DS16(o) (*(s16 *)(D_801334A0 + (o)))
#define D32(o) (*(s32 *)(D_801334A0 + (o)))

void func_80110FDC(void) {
    Rect r;
    s16 pos;
    if ((D_8013348C & 1) && D_80134E9C) {
        StCdInterrupt();
        D_80134E9C = 0;
    }
    r = *(Rect *)(D_801334A0 + 0x28);
    if (D_8013348C & 1) {
        r.x += (D_80133484 / 3) * 3;
        r.y += (D_80133488 / 3) * 3;
    } else {
        r.x += (u16)D_80133484;
        r.y += (u16)D_80133488;
    }
    slpm_LoadImage(&r, D32(0x10));
    slpm_DrawSync(0);
    pos = D16(0x28) + D16(0x2C);
    D16(0x28) = pos;
    if (pos < *(s16 *)(D_801334A0 + D32(0x24) * 8 + 0x14) + *(s16 *)(D_801334A0 + D32(0x24) * 8 + 0x18)) {
        DecDCTout(D32(0x10), (DS16(0x2C) * DS16(0x2E)) / 2);
    } else {
        D32(0x30) = 1;
        D32(0x24) = D32(0x24) == 0;
        D16(0x28) = *(u16 *)(D_801334A0 + D32(0x24) * 8 + 0x14);
        D16(0x2A) = *(u16 *)(D_801334A0 + D32(0x24) * 8 + 0x16);
    }
}
