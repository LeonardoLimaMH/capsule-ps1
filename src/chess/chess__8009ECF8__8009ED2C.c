#include "ghidra.h"
#include "matching.h"
#include "common.h"

s32 func_8009ED2C(u8 *arg0) {
    extern u8 D_8008ED68[];
    extern s32 func_8009DD64(u8 *);
    extern void func_8002CC74(void);
    extern void func_8002CD50(void);
    u8 *p = D_8008ED68;
    s32 r = 0;
    if (arg0[0x62A] != 0) {
        if (func_8009DD64(arg0) != 0) {
            arg0[0x62A] = 0;
            r = 1;
        }
        p[0xA66] = 1;
        func_8002CC74();
        func_8002CD50();
    }
    return r;
}
