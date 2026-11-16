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

void func_80100AF4(S80100AF4 *p) {
    extern M2C_UNK D_8008ED68[];
    s32 v;
    s32 a;
    u8 t;
    p->f38 |= 1;
    if (M2C_GFIELD(D_8008ED68, u16, 0xDC) == 4) {
        if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 0) {
            p->f38 &= ~1;
            if (p->f58 < 0x80) {
                t = p->f58 + 1;
                p->f58 = t;
                p->f5A = t;
                p->f59 = t;
            }
        } else if (M2C_GFIELD(D_8008ED68, u16, 0xE0) == 1) {
            p->f38 &= ~1;
            v = func_800372B4();
            if (v >= 0xFB) a = 0x29;
            else if (v >= 0x7E) a = 0x2A;
            else a = 0x2B;
            p->f18 = func_80019F30(0x6000A, a);
        }
    }
}
