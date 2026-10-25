/* stub-ret: mixed */
#include "common.h"

extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))
extern s32 D_8008ED80;
extern s16 func_800CF4BC(s32, s32, s32);
extern s32 rand(void);

s32 func_800CF304(s32 a0) {
    u8 *p = PL(a0);
    s32 i, j, n = 7;
    for (i = 0; i < 8; i++) *(s16 *)(p + 0x346 + i * 2) = func_800CF4BC(a0, i, 0);
    j = (rand() + D_8008ED80) & 7;
    if (*(s16 *)(p + 0x346 + j * 2) != 0xFF) return j;
    for (;;) {
        j = j == 7 ? 0 : j + 1;
        if (n == 0) return -1;
        if (*(s16 *)(p + 0x346 + j * 2) != 0xFF) return j;
        n--;
    }
}
