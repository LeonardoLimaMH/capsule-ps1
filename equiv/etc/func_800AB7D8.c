#include "common.h"

extern u8 D_80085428[], D_800B3D38[], D_800B3D44[];
extern u8 D_800B3D24, D_800B3D25;

void func_800AB7D8(void) {
    u8 t, j, cnt;
    for (t = 0; t < 2; t++) {
        u8 *flags = D_800B3D38 + t * 6;
        cnt = 0;
        for (j = 0; j < 5; j++) {
            u8 *e = D_80085428 + j * 124 + t * 0x2E8;
            if (e[0x5F6] == 0 && e[0x613] != 1) {
                flags[j] = 1;
                cnt++;
            } else {
                flags[j] = 0;
            }
        }
        if (D_800B3D25 == 1 && D_800B3D24 != t) {
            D_800B3D38[t * 6 + 5] = D_800B3D25;
            cnt++;
        }
        D_800B3D44[t] = cnt;
    }
}
