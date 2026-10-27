/* rand-u16: 0x800F006C 1 0,1,2,3,4,5,6,7,8,9,10,11,12 */
/* rand-u16: 0x800F006E 1 0 */
/* rand-ptr: 0x800F0078 14 */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* max-insns: 20000 */
#include "common.h"

extern u8 D_800EFF58[], D_80091618[];
extern u16 D_8006AF80;
extern void func_800A0014(s32, s32, s32), func_80034AB0(s32);

#define F32(x) (*(s32 *)(D_800EFF58 + (x)))
#define BIT6(n) ((*(u32 *)(*(u8 **)(D_800EFF58 + 0x120 + (n) * 4) + 0x38) >> 6) & 1)

s32 func_8009EDA0(s32 a0) {
    s32 cnt = 0;
    s32 s0, n, r;
    func_800A0014(2, 0, 0);
    s0 = F32(0x114);
    if (a0 == 2) {
        if (*(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) == 0) {
            do {
                n = F32(0x114) > 0 ? F32(0x114) - 1 : s0;
                F32(0x114) = n;
                if (n == s0) {
                    cnt = 0;
                    r = 1;
                } else {
                    cnt++;
                    if (BIT6(n)) {
                        if (n == 0) {
                            F32(0x114) = s0;
                            r = 2;
                        } else {
                            r = 0;
                        }
                    } else {
                        if (F32(0x21C + n * 4) != -1) F32(0x28C) = F32(0x254 + n * 4);
                        r = 1;
                    }
                }
            } while (r == 0);
        } else {
            do {
                n = F32(0x114) > 0 ? F32(0x114) - 1 : s0;
                F32(0x114) = n;
                if (n == s0) {
                    cnt = 0;
                    r = 1;
                } else {
                    cnt++;
                    if (BIT6(n)) {
                        r = 0;
                    } else {
                        if (F32(0x21C + n * 4) != -1) F32(0x28C) = F32(0x254 + n * 4);
                        r = 1;
                    }
                }
            } while (r == 0);
        }
    } else if (a0 == 3) {
        do {
            n = F32(0x114) < 13 ? F32(0x114) + 1 : s0;
            F32(0x114) = n;
            if (n == s0) {
                cnt = 0;
                r = 1;
            } else {
                cnt++;
                if (BIT6(n)) {
                    r = 0;
                } else {
                    if (F32(0x21C + n * 4) != -1) F32(0x28C) = F32(0x254 + n * 4);
                    r = 1;
                }
            }
        } while (r == 0);
    }
    func_800A0014(1, 0, cnt);
    if (s0 != F32(0x114)) func_80034AB0(0x84);
    return 1;
}
