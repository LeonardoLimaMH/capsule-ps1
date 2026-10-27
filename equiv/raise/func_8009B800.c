/* rand-ptr: 0x800EFF4C 2 */
/* rand-u16: 0x8008EE4C 1 0,1,2,3,4,5,6 */
#include "common.h"

extern u8 D_8008ED68[];
extern u8 *D_800EFF4C[];
extern u16 D_8006AF80;
extern s32 D_800F2CA4, D_8008F714;
extern void func_800B8700(s32, s32, s32), func_800125D8(void), func_8009AA50(void), func_80034AB0(s32);
extern void func_80012604(s32);

#define W32(x) (*(s32 *)(D_8008ED68 + (x)))

s32 func_8009B800(void) {
    s32 r = 0;
    if (D_8008ED68[0x99A] == 1) return 0;
    switch (*(u16 *)(D_8008ED68 + 0xE4)) {
    case 0:
        W32(0x9A0) = 0;
        W32(0x9AC) = 0;
        func_800B8700(0x19, D_8006AF80, 1);
        *(s32 *)(D_800EFF4C[0] + 0x38) |= 1;
        D_800F2CA4 = 0;
        *(s32 *)(D_800EFF4C[1] + 0x38) |= 1;
        func_800125D8();
        return 0;
    case 1:
        func_8009AA50();
        func_800125D8();
        return 0;
    case 3: {
        s32 v = W32(0x88);
        s32 s = 0;
        if (v & 0x20) {
            func_80034AB0(0x48);
            s = W32(0x9A0) ? -1 : 1;
        } else if (v & 0x40) {
            func_80034AB0(0x5D);
            s = -1;
        } else if ((v & 0x2000) || (v & 0x8000)) {
            func_80034AB0(0x84);
            W32(0x9A0) ^= 1;
        }
        if (s > 0) {
            D_8008F714 = 2;
            func_800125D8();
        } else if (s < 0) {
            D_8008F714 = 3;
            func_800125D8();
        }
        return 0;
    }
    case 5:
        if (D_8008F714 == 2) {
            func_800B8700(0x19, D_8006AF80, 0);
            r = 1;
        } else if (D_8008F714 == 3) {
            func_800B8700(0x19, D_8006AF80, 0);
            r = -1;
        }
        func_80012604(0);
        return r;
    }
    return 0;
}
