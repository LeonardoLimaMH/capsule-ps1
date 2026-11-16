#include "common.h"

#include "ghidra.h"

void func_800AC650(void *arg0)
{
    extern u8 D_8008ED68[];
    extern u8 D_800B3D20[];
    extern u8 D_800B3D24[];
    extern u8 D_800B3D25[];
    extern u8 D_800B3D38[][6];
    s32 temp_a1 = *((s32 *) (((s8 *) arg0) + 0x7C));
    u8 *d = D_8008ED68;
    s32 temp_a3 = *((s32 *) (((s8 *) arg0) + 0x80));
    s16 var_v1;
    register s32 var_v0 asm("v0");

    if (((*((u16 *) (d + 0xDC)) == 5) && (*((u16 *) (d + 0xE0)) >= 2)) || (*((u16 *) (d + 0xDC)) >= 7))
    {
        if (temp_a3 == 5)
        {
            if ((*D_800B3D24 != temp_a1) && (*D_800B3D25 == 1))
            {
                *((s32 *) (((s8 *) arg0) + 0x38)) &= ~1;
            }
        }
        else if (D_800B3D38[temp_a1][temp_a3] != 0)
        {
            *((s32 *) (((s8 *) arg0) + 0x38)) &= ~1;
        }
    }
    else
    {
        *((s32 *) (((s8 *) arg0) + 0x38)) |= 1;
    }

    {
        u8 *d2 = D_8008ED68;
        if ((*((u16 *) (d2 + 0xDC)) == 5) && (*((u16 *) (d2 + 0xE0)) == 4))
        {
            if (*D_800B3D20 != 0)
            {
                return;
            }
            var_v1 = -2;
            if (*((s32 *) (((s8 *) arg0) + 0x84)) != 0)
            {
                var_v1 = 2;
            }
            *((s16 *) (((s8 *) arg0) + 0x6A)) = var_v1;
            var_v0 = *((s32 *) (((s8 *) arg0) + 0x38)) | 8;
        }
        else
        {
            var_v0 = *((s32 *) (((s8 *) arg0) + 0x38));
            var_v0 &= ~8;
        }
        *((s32 *) (((s8 *) arg0) + 0x38)) = var_v0;
    }
}
