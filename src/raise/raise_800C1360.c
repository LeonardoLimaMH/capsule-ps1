#include "common.h"

#include "common.h"

extern u8 D_80100F38[];
typedef struct { u8 _p0[0x19C]; u16 f_19C; u8 _p19E[0xA]; } S_80091618;
extern S_80091618 D_80091618[];
extern s32 func_800B1260(s32);

#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C1360(s32 a0, s32 a1) {
    s32 k = func_800B1260(a1);
    u8 *p = D_80100F38 + (u16)k * 0x79C;
    u16 i;
    u16 c;
    if (PS16(0x228) == 0) P16(0x2CA) = 0;
    P16(0x2CC) = 0;
    P32(0x2BC) += 1;
    for (i = 0; i < 5; i++) {
        *(u16 *)(p + 0x2CE + i * 2) = 0;
        *(s32 *)(p + 0x2DC + i * 4) = 0;
        *(s32 *)(p + 0x2F4 + i * 4) = 0;
        *(u16 *)(p + 0x30C + i * 2) = 0;
        *(u16 *)(p + 0x318 + i * 2) = 1;
    }
    PS16(0x368) = -1;
    P16(0x36A) = 0;
    P16(0x324) = P16(0x326);
    c = D_80091618[(u16)k].f_19C;
    P16(0x372) = 1;
    P16(0x370) = 0;
    P16(0x374) = 0;
    P16(0x220) = 0x32;
    P16(0x376) = 0;
    P16(0x344) = 0;
    P16(0x342) = 0;
    P16(0x36E) = c;
    return P32(0x2BC);
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C147C(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2C4) += 1;
}
