#include "common.h"

#include "common.h"

/* objeto de peça usado por func_80100AF4 */
typedef struct {
    u8 _p0[0x18];
    s32 f18;
    u8 _p1[0x1C];
    s32 f38;
    u8 _p2[0x1C];
    u8 f58;
    u8 f59;
    u8 f5A;
} S80100AF4;

extern void func_80012578();

void func_801007D8(void) {
    extern u16 D_8008EE48[];
    extern u8 D_80085428[];
    extern u8 D_80069AD4[];
    u8 *p = D_80085428;
    switch ((s32)D_8008EE48[0]) {
    case 0: break;
    case 1:
        if (func_800220D4(p, 1, 1, 4) != 0) func_80012578();
        break;
    case 2:
        p = D_80069AD4;
        if (M2C_FIELD(p, s32 *, 0xDC) > 0) {
            M2C_FIELD(p, s32 *, 0xDC) -= 2;
        } else {
            M2C_FIELD(p, u16 *, 0xEA) += 8;
            if (M2C_FIELD(p, s16 *, 0xE8) < 0x140) M2C_FIELD(p, u16 *, 0xE8) += 1;
            if (M2C_FIELD(p, s32 *, 0xE0) < 0xC80) M2C_FIELD(p, s32 *, 0xE0) += 6;
        }
        func_8002CC74();
        if (M2C_GFIELD(D_80069AD4, s32, 0xE0) >= 0xC80 && M2C_GFIELD(D_80069AD4, s16, 0xE8) >= 0x140) {
            func_8001AD74(2);
            func_80034BD8(-3, 0);
            func_80033974(0x701F);
            func_80012508();
        }
        break;
    }
}

#include "common.h"

void func_80100900(void) {
    extern M2C_UNK D_8002E4D0[];
    extern M2C_UNK D_80069AD4[];
    extern M2C_UNK D_8008ED68[];
    M2C_GFIELD(D_80069AD4, u16, 0xEA) = (u16) (M2C_GFIELD(D_80069AD4, u16, 0xEA) + 8);
    func_8002CC74();
    if (M2C_GFIELD(D_8008ED68, s32, 0xA68) == 0) {
        M2C_GFIELD(D_8008ED68, s32, 0xA18) = 3;
        M2C_GFIELD(D_8008ED68, s32, 0xA1C) = 0;
        M2C_GFIELD(D_8008ED68, s32, 0xA24) = 1;
        func_80012200(D_8002E4D0);
    }
}
