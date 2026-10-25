#include "common.h"

extern s16 D_80078CC4;
extern s32 D_80078C78;
extern u8 D_80093D68[];
extern s32 D_8007142C[];
extern s32 SpuGetKeyStatus();

void func_8003CAD8(void) {
    u8 *e = D_80093D68;
    s32 *ids = D_8007142C;
    s32 mask = 0;
    s32 i, st;
    u16 v;

    if (D_80078CC4 == 0) {
        for (i = 0; i < D_80078C78; i++, e += 0x4E, ids++) {
            if (*(u16 *)(e + 0x16) == 0 || SpuGetKeyStatus(*ids) != 3) {
                continue;
            }
            v = *(u16 *)(e + 0x16);
            if (v < 2) {
                *(u16 *)(e + 0x16) = v + 1;
                continue;
            }
            mask |= *ids;
            do {
                SpuSetKey(0, *ids);
                st = SpuGetKeyStatus(*ids);
            } while (st != 2 && st != 0);
            *(s16 *)(e + 0x16) = 0;
        }
    }
    if (mask != 0) {
        SpuSetKey(0, mask);
    }
}
