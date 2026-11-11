#include "common.h"

typedef struct {
    u8 pad[0x18C];
    u32 value18C;
    u8 tail[0x18];
} MonsterValueRecord_800B15CC;

s32 func_800B1668(void) {
    extern s16 D_80103D38[];
    extern u8 D_800900C0[];
    u8 *p;
    register u8 *v1 asm("v1");
    s32 i;

    if (*D_80103D38 == 1) {
        p = D_800900C0;
        if (*(s32 *)(p + 0x34) == 0x320) {
            goto ret1;
        }
        i = 0;
        v1 = p;
        do {
            *(s32 *)(v1 + 0x34) += 0x14;
            i++;
            v1 += 0xBC;
        } while (i < 3);
        goto ret0;
    }
    p = D_800900C0;
    if (*(s32 *)(p + 0x268) == -0x640) {
ret1:
        return 1;
    }
    i = 3;
    v1 = p + 0x234;
    do {
        *(s32 *)(v1 + 0x34) -= 0x14;
        i++;
        v1 += 0xBC;
    } while (i < 6);
ret0:
    return 0;
}
