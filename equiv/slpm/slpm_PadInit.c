#include "common.h"

void slpm_PadInit(s32 arg0) {
    extern s32 D_80137338[];
    extern s32 D_80137348[];
    (*D_80137348) = arg0;
    (*D_80137338) = -1;
    slpm_ResetCallback();
    slpm_PAD_init(0x20000001, D_80137338);
    func_80111B54(0);
}
