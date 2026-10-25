/* stub-ret: mixed */
#include "common.h"

extern u8 D_80093D68[];
extern u8 D_80093D10[];
extern u32 D_8007142C[];
extern s32 D_80078C78;
extern void func_8003860C(s32);
extern void func_80038A60(s32);
extern void SpuSetKey(s32, u32);
extern s32 SpuGetKeyStatus(u32);

void func_80038890(void) {
    u8 *e;
    u32 *k;
    u32 mask = 0, key;
    s32 i, st;

    i = 0;
    do func_8003860C(i++); while (i <= 0);
    e = D_80093D68;
    k = D_8007142C;
    for (i = 0; i < D_80078C78; i++, k++, e += 0x4E) {
        e[0] = i;
        *(u16 *)(e + 0x16) = 0;
        *(u16 *)(e + 0x14) = 0x40;
        *(u16 *)(e + 0x48) = 0x40;
        *(u16 *)(e + 0x4A) = 0x40;
        key = *k;
        mask |= key;
        func_80038A60(i);
        do {
            SpuSetKey(0, key);
            st = SpuGetKeyStatus(key);
        } while (st != 2 && st != 0);
    }
    D_80093D10[1] = 0x40;
    D_80093D10[7] = 0x40;
    D_80093D10[3] = 0x7F;
    D_80093D10[6] = 0;
    D_80093D10[5] = 0x7F;
    *(u32 *)(D_80093D10 + 8) = 0x7F;
    *(u32 *)(D_80093D10 + 0xC) = 0x7F;
    D_80093D10[2] = 0;
    *(u16 *)(D_80093D10 + 0x30) = 0;
    *(u16 *)(D_80093D10 + 0x26) = 0;
    do {
        SpuSetKey(0, mask);
        st = SpuGetKeyStatus(mask);
    } while (st != 2 && st != 0);
}
