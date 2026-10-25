#include "common.h"

extern u8 D_80085428[], D_80063940[];
extern u32 D_8006B058[];
extern u16 D_8006B1EC[];
extern s32 D_80078C4C, D_80078C44;
extern u8 D_80078C50[];

s32 func_80028084(u16 id) {
    s32 found = 0;
    u8 *e;
    u32 key, n, i;
    s32 cnt;

    if (D_80085428[0] != 0) {
        return 0;
    }
    if (id != 0xFFFF) {
        e = D_80063940 + id * 0x3C;
        key = D_8006B058[((*(u32 *)(e + 0xC) & 0xF) << 1) | (*(u32 *)(e + 8) >> 31)];
        n = D_80078C4C - 1;
        i = 1;
        if (n != 0) {
            do {
                if (D_8006B1EC[i] == key) {
                    found = 1;
                }
                i++;
                if (n < i) {
                    break;
                }
            } while (!found);
        }
        if (found) {
            D_80078C50[i - 1] = 1;
            return 0;
        }
        cnt = D_80078C4C;
        if (cnt < 7) {
            D_80078C50[cnt] = 1;
            D_8006B1EC[D_80078C4C] = key;
            D_80078C4C++;
        } else {
            for (i = 1; i < 7; i++) {
                if (D_80078C50[i] == 0) {
                    D_80078C50[i] = 1;
                    D_8006B1EC[i] = key;
                    break;
                }
            }
        }
    }
    D_80078C44 = 1;
    return 1;
}
