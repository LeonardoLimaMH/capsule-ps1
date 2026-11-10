#include "common.h"

extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800EE5F0[];
extern u8 D_800EFF58[];
extern u8 D_800F05E8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, void *, s32, s32, s32);

extern u8 *D_800EF300[];
extern u16 D_80100D44[];
extern u16 D_80100D46[];
extern u16 D_80100D4C[];
extern u16 D_800F060A[];
extern u16 D_800F0614[];
void func_800BE7B4(void);
void func_800BE7A0(void);
void func_80034AB0(s32);
s32 func_800BE674(void)
{
    u16 n;

    if (*D_80100D46 == 0) {
        if (*D_80100D4C != 1) {
            return 1;
        }
        func_800BE7B4();
        return 0;
    }
    if ((n = *D_80100D44) != 0) {
        u16 *p = (u16 *)(*D_800EF300 + 0x4a);
        u16 v = *p + D_800F0614[*D_80100D46];
        u16 c;
        *D_80100D44 = n - 1;
        c = *D_80100D4C;
        *p = v;
        if (c == 1) {
            func_800BE7B4();
        }
        if (*D_80100D46 == 2 && *D_80100D44 == 0x18) {
            *D_80100D4C = 1;
            func_800BE7A0();
        }
        return 0;
    }
    *D_80100D44 = D_800F060A[*D_80100D46];
    if (--*D_80100D46 == 0) {
        func_80034AB0(0x7f);
    }
    return 0;
}
