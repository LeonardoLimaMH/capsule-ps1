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

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libgpu_sys__80049BC0", DrawPrim);

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
