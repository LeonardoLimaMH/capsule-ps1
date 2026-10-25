#include "common.h"

extern u8 D_80093710[], D_800922F0[], D_80070714[];
extern u8 D_80092403;
extern s32 DsReadyCallback(), DsPosToInt(), SpuIsTransferCompleted();
extern s32 func_8003C990(), func_8003CC00();
extern void DsGetSector(), DsIntToPos(), DsControlF(), SpuSetTransferStartAddr();
extern void SpuWritePartly(), func_8003CA90();

#define W(o) (*(s32 *)(D + (o)))

s32 func_80034F74(s32 intr) {
    u8 *D = D_80093710;
    u8 *g = D_800922F0;
    u8 *e;
    s16 r;

    DsReadyCallback(0);
    intr &= 0xFF;
    if (intr == 5) {
        goto fail7;
    }
    if (intr != 1) {
        goto rearm;
    }
    DsGetSector(D, 3);
    if (DsPosToInt(D) != DsPosToInt(D + 0x20)) {
        goto fail7;
    }
    DsIntToPos(DsPosToInt(D + 0x20) + 1, D + 0x20);
    switch (g[0x113]) {
    case 3:
        DsGetSector(W(0x40), 0x800);
        if (--W(0x74) != 0) {
            goto adv;
        }
        r = func_8003C990(0x801F1800, 0, 0x40330);
        *(s16 *)(g + 0x118E) = r;
        if (r != 0) {
            goto ctlfail;
        }
        e = D_80070714 + *(u16 *)(g + 0x116) * 8;
        W(0x3C) += W(0x38);
        W(0x78) = *(u16 *)(e + 4) << 4;
        W(0x74) = (u32)(W(0x78) + 0x7FF) >> 11;
        SpuSetTransferStartAddr(0x40330);
        g[0x113] = 4;
        goto rearm;
    case 4:
        DsGetSector(0x801ED000, 0x800);
        if (*(s16 *)(g + 0x118E) != 0) {
            goto ctlfail;
        }
        if (*(u32 *)0x801ED000 != *(u32 *)0x801ED7F0 || *(u32 *)0x801ED7F4 != 0x557733) {
            goto fail7;
        }
        if (SpuIsTransferCompleted(0) == 0) {
            if (*(s16 *)(g + 0x118E) != -1) {
                func_8003CA90(*(s16 *)(g + 0x118E));
            }
            *(s16 *)(g + 0x118C) = -1;
            *(s16 *)(g + 0x118E) = -1;
            g[0x113] = 7;
            return 7;
        }
        if ((u32)W(0x78) >= 0x7F1) {
            SpuWritePartly(0x801ED000, 0x7F0);
            W(0x78) -= 0x7F0;
        } else {
            SpuWritePartly(0x801ED000, W(0x78));
            W(0x78) = 0;
        }
        if (W(0x78) != 0) {
            goto rearm;
        }
        e = D_80070714 + *(u16 *)(g + 0x116) * 8;
        W(0x40) = 0x801F6800;
        W(0x3C) += W(0x74);
        g[0x113] = 5;
        W(0x38) = *(u16 *)(e + 6);
        W(0x74) = (u32)(W(0x38) + 0x7FF) >> 11;
        goto rearm;
    case 5:
        DsGetSector(W(0x40), 0x800);
        if (*(s16 *)(g + 0x118E) != 0) {
            g[0x113] = 7;
            return 7;
        }
        if (--W(0x74) != 0) {
            goto adv;
        }
        r = func_8003CC00(0x801F6800, 0);
        *(s16 *)(g + 0x1192) = r;
        if (r != 0) {
            goto ctlfail;
        }
        DsControlF(9, 0);
        g[0x113] = 6;
        *(u16 *)(g + 0x1190) = *(u16 *)(g + 0x116);
        return 6;
    default:
        goto rearm;
    }
adv:
    W(0x40) += 0x800;
rearm:
    return DsReadyCallback(func_80034F74);
ctlfail:
    DsControlF(9, 0);
    g[0x113] = 7;
    return 7;
fail7:
    DsControlF(9, 0);
    D_80092403 = 7;
    return 7;
}
