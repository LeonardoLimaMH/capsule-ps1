#include "common.h"
#include "yuugi.h"

extern u16 D_80078C20[];
extern u8 D_80069EC4[];

#include "ghidra.h"

void func_80024A7C(void *);
void func_800248E8(void *arg0) {
    extern u8 D_80085428[];
    s32 mode = *D_80085428;

    switch (mode) {
    case 0:
        mode = 1;
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == mode && M2C_FIELD(M2C_FIELD(arg0, s32 **, 0x18), s32 *, 4) == 0) {
            func_80024A7C(arg0);
        }
        break;
    case 1:
        if (((M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == mode) {
            func_80024A7C(arg0);
        }
        break;
    }
    func_8002475C(arg0, 1);
}
