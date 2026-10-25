#include "common.h"

extern s32 D_80094BF8;
extern s32 D_80094B78[];
extern s32 D_80094A68[];
extern void func_80044B6C();
extern void func_800458A0();

s32 DsSync(s32 id, u8 *result) {
    u8 *q;
    s32 i, k;

    if (id == 0) {
        k = D_80094BF8 - 1;
        if (k < 0) {
            k = 7;
        }
        if (D_80094B78[k * 4] == 0) {
            q = 0;
            goto end;
        }
        goto found;
    }
    func_80044B6C(0);
    k = D_80094BF8;
    for (i = 0; i < 8; i++) {
        if (D_80094B78[k * 4] == id) {
            goto busy;
        }
        k++;
        if (k >= 8) {
            k = 0;
        }
    }
    if (!(id < D_80094B78[D_80094BF8 * 4])) {
        return 0;
    }
busy:
    k = D_80094BF8 - 1;
    if (k < 0) {
        k = 7;
    }
    for (i = 0; i < 8; i++) {
        if (D_80094B78[k * 4] == id) {
            goto found;
        }
        k--;
        if (k < 0) {
            k = 7;
        }
    }
    q = 0;
    goto end;
found:
    D_80094A68[0] = D_80094B78[k * 4];
    D_80094A68[1] = D_80094B78[k * 4 + 1];
    D_80094A68[2] = D_80094B78[k * 4 + 2];
    D_80094A68[3] = D_80094B78[k * 4 + 3];
    q = (u8 *)D_80094A68;
end:
    if (q != 0) {
        func_800458A0(result, q + 5);
        return q[4];
    }
    return 6;
}
