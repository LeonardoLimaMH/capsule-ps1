#include "common.h"

typedef struct {
    s16 unk_0;
    s16 unk_2;
    u16 idx;
    u16 cnt;
    s16 unk_8;
    s16 a[32];
    s16 b[32];
    s16 c[32];
} D_80100E60_t;

extern D_80100E60_t D_80100E60;
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern s32 func_800E1820(s32);
extern s32 func_800E17F8(s32);
extern void func_800C0EE8(s32, s16, s16);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern u8 D_800F170C[];

s32 func_800C1280(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return (*(s32 (**)(s32, s32))(D_800F170C + **(u8 **)(p + 0x2C4) * 4))(a0, a1);
}

#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

s32 func_800C1310(s32 a0, s32 a1) {
    u8 *p = PL(a1);
    return P32(0x2BC);
}
