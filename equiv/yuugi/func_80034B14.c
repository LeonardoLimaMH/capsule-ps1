#include "common.h"

void func_80034B14(void) {
    extern M2C_UNK D_800922F0[];
    s32 temp_v0;

    M2C_FIELD(D_800922F0, s16 *, 0x1194) = 0;
    M2C_FIELD(D_800922F0, s16 *, 0x1196) = 0;
    M2C_FIELD(D_800922F0, s16 *, 0x118C) = -1;
    M2C_FIELD(D_800922F0, s16 *, 0x118E) = -1;
    M2C_FIELD(D_800922F0, s16 *, 0x1190) = -1;
    M2C_FIELD(D_800922F0, s16 *, 0x1192) = -1;
    func_8003C844(0x1000);
    temp_v0 = M2C_FIELD(D_800922F0, s32 *, 0xC) + 0x17C;
    M2C_FIELD(D_800922F0, s32 *, 0x119C) = temp_v0;
    M2C_FIELD(D_800922F0, s32 *, 0x1198) = temp_v0;
    func_8003C894(0x14);
    func_8003C808();
}
