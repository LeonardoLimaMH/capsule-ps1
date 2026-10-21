#include "common.h"

void slpm_StopPAD(void) {
    extern s32 D_801208B4[];
    slpm_DisablePAD();
    func_80111FF4();
    func_80111EF0();
    (*D_801208B4) = 0;
}
