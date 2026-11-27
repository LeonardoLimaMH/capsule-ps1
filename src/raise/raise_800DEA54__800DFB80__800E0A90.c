#include "common.h"

typedef struct { u8 pad[0x90]; u16 f90; u8 pad2[0x118]; } Rec_800E0A90;

s32 func_800E0A90(s32 ctx, s32 vec, u8 **objp);




#include "ghidra.h"

s32 func_800E0A90(s32 ctx, s32 vec, u8 **objp) {
    extern u8 D_80091618[];
    extern u8 D_800900C0[];
    extern s32 D_8008ED68[];
    register s32 n asm("s0") = 1;
    register s32 tmp asm("a0");
    s32 xy, p, flag;
    register s32 height asm("v1");
    u32 idx = func_800B1260(ctx) & 0xFFFF;

    if (ctx != 0 && ctx == n) {
        if (((Rec_800E0A90 *)(D_80091618 + idx * 0x1A8))->f90 == n) {
            n = 4;
        }
    } else {
        n = 4;
        if (((Rec_800E0A90 *)(D_80091618 + idx * 0x1A8))->f90 == 1) {
            n = 1;
        }
    }
    PushMatrix();
    tmp = n * 0xBC;
    func_8002CEC0(tmp + D_800900C0);
    n = RotTransPers(vec, &xy, &p, &flag);
    *(s16 *)((u8 *)*objp + 0x46) = (u16)xy - D_8008ED68[0x108 / 4] / 2;
    height = D_8008ED68[0x10C / 4];
    tmp = (u32)height >> 31;
    height = (height + tmp) >> 1;
    tmp = (u16)((u32)xy >> 16) - height + 2;
    {
        register u8 *obj asm("v1") = *objp;
        *(s16 *)(obj + 0x4A) = tmp;
    }
    PopMatrix();
    n -= 4;
    n = (u32)n << 16;
    return n >> 16;
}


#include "ghidra.h"


extern u8 D_80091618[];

#include "ghidra.h"
