#include "common.h"

void func_80013668(void) {
    extern void * D_80078B7C;
    func_80013C14(D_80078B7C, 0xC588);
    M2C_FIELD(D_80078B7C, void **, 0xC578) = (void *) D_80078B7C;
    M2C_FIELD(D_80078B7C, s32 *, 0xC57C) = 0x90;
    M2C_FIELD(D_80078B7C, s32 *, 0xC584) = 0;
    M2C_FIELD(D_80078B7C, u32 *, 0xC580) = (u32) (0xC000U / 144U);
    func_8001611C(0, 0x90, D_80078B7C);
}
