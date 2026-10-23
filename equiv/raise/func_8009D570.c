#include "common.h"

void func_8009D570(void) {
    extern s32 D_800EBDE4[];
    func_8001A49C(0x80113000);
    func_8001A49C(0x80146A18);
    if ((*D_800EBDE4) >= 0xA) {
        func_8001A49C(0x80146A18);
    } else {
        func_800C0C60(0x80140000);
    }
    func_80013668();
    func_8009DAAC();
    func_80012508();
}
