/* rand-mem: 0x800B3C20 1 6 */
/* rand-mem: 0x8008542A 1 0x20 */
#include "common.h"

extern u8 D_80091618[], D_80085428[], D_80063940[];
extern u8 D_8006AF80[], D_8006AFCC[];
extern s32 D_800B3C20;
extern void func_80027C14(u16), func_80027E04(u16), func_80026514(u16);

#define ENT(k) (D_80091618 + (k) * 0x1A8)

s32 func_800A7EB0(void) {
    u32 n = D_80085428[2];
    u8 *dst = D_80085428 + n * 14;
    u8 *m;
    s32 j, any;
    u16 k;
    dst[0x50] = ENT(D_800B3C20)[0];
    for (j = 0; j < 8; j++) dst[0x51 + j] = ENT(D_800B3C20)[8 + j];
    {
        u8 *src = ENT(D_800B3C20) + 0xB4;
        for (j = 0; j < 5; j++, src += 2) (D_80085428 + n * 14)[0x59 + j] = *src;
    }
    D_80085428[2] += 1;
    m = D_80063940 + *(u16 *)ENT(D_800B3C20) * 60;
    if (((*(u32 *)(m + 0x14) >> 5) & 1) != 1) {
        *(u32 *)(m + 0x14) |= 0x20;
        D_80085428[4] += 1;
    }
    func_80027C14(D_800B3C20);
    func_80027E04(D_800B3C20);
    {
        u8 *e = ENT(D_800B3C20);
        k = *(u16 *)(e + 0x8A);
        if (k != 0xFFFF) {
            *(u16 *)(ENT(k) + 0x8A) = 0xFFFF;
            *(u16 *)(ENT(*(u16 *)(e + 0x8A)) + 0x8C) = 0;
        }
    }
    func_80026514(D_800B3C20);
    {
        s32 v = D_800B3C20;
        u8 *e = ENT(v);
        *(u16 *)(e + 0x19C) = 0;
        *(u16 *)(e + 0x19E) = 0;
        *(u16 *)(e + 0x1A0) = 0;
        D_80085428[v + 0xD7C] = 0;
    }
    any = 0;
    for (j = 0; j < 6; j++)
        if (*(u16 *)(ENT(j) + 0x10) != 0xFFFF) any = 1;
    if (any) return 0;
    *(u16 *)D_8006AF80 = 0;
    *(u32 *)(D_8006AF80 + 4) = 0x20D0;
    for (j = 0; j < 5; j++) {
        *(s32 *)(D_8006AFCC + 8 + j * 4) = -1;
        *(s32 *)(D_8006AFCC + 0x1C + j * 4) = 0;
    }
    for (j = 0; j < 0xB; j++) {
        *(u16 *)(D_8006AFCC + 0x30 + j * 2) = 0;
        *(u32 *)(D_8006AFCC + 0x48 + j * 4) = 0;
        *(u16 *)(D_8006AFCC + 0x74 + j * 2) = 0;
    }
    return 0;
}
