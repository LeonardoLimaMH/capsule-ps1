/* stub-ret: mixed */
/* arg0: small */
#include "common.h"

extern u8 D_800EEB9C[], D_800EEA08[], D_800EEA00[];
extern s32 D_800EEFD0[];
extern s32 func_800D1548(void), func_800AA77C(s32), func_800B9C3C(void), func_800B9CEC(void), func_800B9E34(void);
extern u8 func_800B7E70(s32);

#define E32(o) (*(s32 *)(D_800EEB9C + (o)))

void func_800ABF7C(s32 a0) {
    s32 i, j;
    E32(0x7BC) = a0;
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 8; j++) {
            s32 *d = (s32 *)(D_800EEB9C + i * 0x24 + 0x3C8 + j * 4);
            *d = D_800EEA08[a0 * 56 + i * 8 + j];
            if (a0 == 1) {
                if (i == 0 || (i == 1 && j < 7)) {
                    if (func_800D1548() == a0) *d = 1;
                    else *d = func_800AA77C(i);
                    continue;
                }
                if (i == 1) continue;
                if (i == 3 && j < 2) {
                    if (func_800D1548() == a0) D_800EEFD0[j] = 1;
                    else D_800EEFD0[j] = func_800AA77C(3);
                    continue;
                }
                if (i == 4 && j > 0 && j < 4 && func_800D1548() == 0) {
                    if (j == 1) E32(0x45C) = func_800B9C3C();
                    else if (j == 2) E32(0x460) = func_800B9CEC();
                    else D_800EEFD0[9 + j] = func_800B9E34();
                }
            }
        }
        D_800EEA00[i] = func_800B7E70(i);
    }
}
