#include "common.h"

u8 func_800D7388(void *arg0, M2C_UNK arg1) {
    extern s32 D_80118C18[];
    extern s8 D_80119658[];
    extern u8 D_80119659[];
    u8 temp_s1;
    void *temp_a2;

    temp_a2 = (M2C_FIELD(arg0, u8 *, 0x16) * 4) + ((M2C_FIELD(arg0, u8 *, 0x15) * 0x34) + (*D_80118C18));
    temp_s1 = M2C_FIELD(temp_a2, u8 *, 3);
    func_8001A998(arg1, 0xC, temp_a2, D_80118C18);
    (*D_80119658) = 1;
    (*D_80119659) = 0;
    func_800D6DA4(temp_s1, arg1);
    return (*D_80119659);
}
