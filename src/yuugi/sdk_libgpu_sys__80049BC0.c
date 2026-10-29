#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", func_80049BC0);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearImage2);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", LoadImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", StoreImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", MoveImage);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearOTag);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", ClearOTagR);

#include "common.h"

void DrawPrim(void *arg0) {
    extern void * D_80078914;
    u8 temp_s1;

    temp_s1 = M2C_FIELD(arg0, u8 *, 3);
    M2C_FIELD(D_80078914, M2C_UNK (**)(M2C_UNK), 0x3C)(0);
    M2C_FIELD(D_80078914, M2C_UNK (**)(void *, u8), 0x14)(arg0 + 4, temp_s1);
}

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", DrawOTag);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", PutDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", DrawOTagEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", GetDrawEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", PutDispEnv);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", GetDispEnv);

u32 GetODE(void) {
    extern void * D_80078914[];
    return M2C_FIELD((*D_80078914), u32 (**)(), 0x38)() >> 0x1F;
}
