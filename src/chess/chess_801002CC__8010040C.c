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

void func_8010040C(void) {
    extern u16 D_8008EE48[];
    extern u8 D_80085428[];
    extern u8 D_80069AD4[];
    u8 *p = D_80085428;
    switch ((s32)D_8008EE48[0]) {
    case 0: func_8009B4C8(p); func_80012578(); break;
    case 1: func_8009C964(p); func_80012578(); break;
    case 2: func_8009B814(p); func_80012578(); break;
    case 3: func_8009B948(p, 2); func_80012578(); break;
    case 4: func_8009B948(p, 1); func_80012578(); break;
    case 5: func_8009B948(p, 0); func_80012578(); break;
    case 6: func_8009BAD8(p); func_80012578(); break;
    case 7: func_800B0530(p); func_80012578(); break;
    case 8: {
        u8 *q = D_80069AD4;
        M2C_FIELD(q, s32 *, 0xDC) = 0x400;
        M2C_FIELD(q, s32 *, 0xE0) = 0x400;
        M2C_FIELD(q, s16 *, 0xE8) = 0x100;
        M2C_FIELD(q, s32 *, 0xD8) = 0;
        M2C_FIELD(q, s16 *, 0xEA) = 0x200;
        func_8002CC74();
        func_8002CD50();
        func_80012508();
        break;
    }
    }
}


