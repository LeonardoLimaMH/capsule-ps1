#include "common.h"

void func_800248E8(void *arg0) {
    extern u8 D_80085428[];
    switch ((*D_80085428)) {                           /* irregular */
    case 0:
        if ((((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == 1) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s32 *, 4) != 0) {

            } else {
block_7:
                func_80024A7C(arg0);
            }
        }
        break;
    case 1:
        if ((((u32) M2C_FIELD(arg0, u32 *, 0x50) >> 3) & 1) == (*D_80085428)) {
            goto block_7;
        }
        break;
    }
    func_8002475C(arg0, 1);
}
