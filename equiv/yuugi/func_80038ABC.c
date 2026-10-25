#include "common.h"

extern s32 D_8007142C[];
extern s32 D_80078C78;
extern u8 D_80093D68[];
extern s32 SpuGetKeyStatus();

s32 func_80038ABC(s32 prog, s32 note, s32 flag) {
    s32 i, r, n;

    i = 0;
    do {
        if (SpuGetKeyStatus(D_8007142C[(s16)i]) == 0) {
            return (s16)i;
        }
        i++;
    } while ((s16)i < D_80078C78);
    i = 0;
    do {
        r = SpuGetKeyStatus(D_8007142C[(s16)i]);
        if (r == 2 || r == 0) {
            return (s16)i;
        }
        i++;
        n = D_80078C78;
    } while ((s16)i < n);
    if (flag != 0) {
        return -1;
    }
    i = 0;
    do {
        u8 *e = D_80093D68 + (s16)i * 0x4E;
        if (prog == e[3] && *(u16 *)(e + 6) == note) {
            return (s16)i;
        }
        i++;
    } while ((s16)i < n);
    i = 0;
    do {
        if (*(u16 *)(D_80093D68 + (s16)i * 0x4E + 0x16) == 0) {
            return (s16)i;
        }
        i++;
    } while ((s16)i < D_80078C78);
    return -1;
}
