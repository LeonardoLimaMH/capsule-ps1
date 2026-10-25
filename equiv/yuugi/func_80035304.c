#include "common.h"

extern u8 D_80093710[], D_800922F0[];
extern u8 *D_80092430;
extern u8 D_80078C74, D_80092403;
extern s32 DsReadyCallback();
extern void DsGetSector(), SpuWritePartly(), DsControlF();
extern s32 DsPosToInt(), SpuIsTransferCompleted();

#define W(o) (*(s32 *)(D + (o)))

s32 func_80035304(s32 intr) {
    s32 ret;
    u8 *D = D_80093710;
    u8 *buf, *e;
    u16 *p;
    s32 t0, t1, v;
    u16 n;

    DsReadyCallback(0);
    if (D_80078C74 != 0) {
        D_80092403 = 5;
        return 5;
    }
    D_80078C74 = 1;
    if ((intr & 0xFF) == 1) {
        DsGetSector(D, 3);
        if (W(0x40) < 0 && DsPosToInt(D) == W(0x3C)) {
            buf = (u8 *)W(0x40);
        } else {
            buf = (u8 *)0x801ED000;
        }
        DsGetSector(buf, 0x800);
        if (DsPosToInt(D) != W(0x3C)) {
            if (W(0x3C) < DsPosToInt(D)) {
                goto fail0;
            }
            goto rearm;
        }
        if (*(u32 *)buf != *(u32 *)(buf + 0x7F0) || *(u32 *)(buf + 0x7F4) != 0x557733) {
            goto fail0;
        }
        if ((u32)W(0x38) >= 0x7F1) {
            if (W(0x40) >= 0) {
                if (SpuIsTransferCompleted(0) == 0) {
                    D_80092403 = 5;
                    ret = 5;
                    goto end;
                }
                SpuWritePartly(0x801ED000, 0x7F0);
            }
            W(0x38) -= 0x7F0;
            W(0x3C) += 1;
            W(0x40) += 0x7F0;
            goto rearm;
        }
        if (W(0x40) >= 0) {
            if (SpuIsTransferCompleted(0) == 0) {
                D_80092403 = 5;
                goto end;
            }
            SpuWritePartly(0x801ED000, W(0x38));
        }
        t0 = W(0x40) + W(0x38);
        n = *(u16 *)(D + 0x48) - 1;
        *(u16 *)(D + 0x48) = n;
        W(0x40) = t0;
        W(0x44) = t0;
        if (n == 0) {
            DsControlF(9, 0);
            D_80092403 = 4;
            ret = 4;
            goto end;
        }
        p = *(u16 **)(D + 0x30);
        *(u16 **)(D + 0x30) = p + 1;
        *(u16 *)(D + 0x34) = p[1];
        e = *(u8 **)(D_800922F0 + 0x140) + *(u16 *)(D + 0x34) * 16;
        t1 = *(u32 *)(e + 8) & 0xFFFFFF;
        W(0x38) = t1;
        e = *(u8 **)(D_800922F0 + 0x140) + *(u16 *)(D + 0x34) * 16;
        W(0x3C) = (*(u32 *)(e + 4) & 0xFFFFFF) + *(s32 *)(D_800922F0 + 0x138);
        if (t0 >= 0 && 0x40330 < (u32)(t0 + t1)) {
            W(0x40) = 0x801D0000;
        }
        v = W(0x40);
        if ((u32)(v + 0x7FE107FF) < 0x7FF || (u32)(v + W(0x38) + 0x7FE107FF) < 0x7FF) {
            W(0x40) = 0x801F0000;
        }
        v = W(0x40);
        if (v < 0 && 0x801ED000 < (u32)(v + W(0x38))) {
            D_80092403 = 4;
            ret = 4;
            goto end;
        }
        *(s32 *)(D_80092430 + *(u16 *)(D + 0x34) * 16 + 0xC) = W(0x40);
        goto rearm;
    }
    if ((intr & 0xFF) == 5) {
        D_80092403 = 0;
    }
    ret = ((u32)&D_80092403 + 0x8000) & 0xFFFF0000;
    goto end;
fail0:
    D_80078C74 = 0;
    D_80092403 = 0;
    return ((u32)&D_80092403 + 0x8000) & 0xFFFF0000;
rearm:
    ret = DsReadyCallback(func_80035304);
end:
    D_80078C74 = 0;
    return ret;
}
