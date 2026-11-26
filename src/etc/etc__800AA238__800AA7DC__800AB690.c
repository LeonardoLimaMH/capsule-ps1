#include "common.h"

#include "ghidra.h"

#define AA280_CREATE(x, y, z, id, cb) func_80032DB0(x, y, z, 0x12, id, cb)

#define M14(i) (*(u32 *)(D_80063940 + (i) * 60 + 0x14))

void func_800AB690(void) {
    extern u8 D_8002E38C[];
    extern u8 D_8008ED68[];
    extern u16 D_800B3D22[];
    extern u8 D_800B3D46[];
    extern int func_8009C970();
    u8 *s1 = D_8008ED68;
    u8 *s2;
    int s0;

    s0 = *(u16 *)(s1 + 0xE0);
    switch (s0) {
    case 0:
        func_8001AD74(2);
        func_800339D8(-3, 0);
        func_80033974(D_800B3D22[0]);
        func_80012578();
        break;
    case 1:
        if (*(s32 *)(s1 + 0xA68) == 0) {
            s2 = D_800B3D46;
            if (s2[0] != 0) {
                func_800AC20C(0);
            }
            if (s2[1] != 0) {
                func_800AC20C(1);
            }
            if (*(s32 *)(s1 + 0xA1C) == 3) {
                *(s32 *)(s1 + 0xA18) = s0;
                func_80012200(D_8002E38C);
            } else {
                *(s32 *)(s1 + 0xA18) = 3;
                func_80012200(func_8009C970);
            }
        }
        break;
    }
}

