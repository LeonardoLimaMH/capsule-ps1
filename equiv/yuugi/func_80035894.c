/* stub-ret: mixed */
/* rand-mem: 0x80092402 1 0x54 */
/* rand-mem: 0x80092403 1 14 */
#include "common.h"

/* máquina de estados do streaming de CD/SPU: estado em D_80092402 (G+0x112),
   subestado em D_80092403 (G+0x113); área de trabalho do CD em D_80093710 (H) */
extern u8 D_800922F0[];
extern u8 D_80093710[];
extern u8 D_80070714[];
extern u8 D_80078D51, D_80078D52, D_80078D53;
extern s32 DsIntToPos(s32, u8 *);
extern s32 DsControlF(s32, u8 *);
extern s32 DsControl(s32, u8 *, u8 *);
extern s32 DsSync(s32, u8 *);
extern void *DsSyncCallback(void *);
extern void *DsReadyCallback(void *);
extern s32 SpuIsTransferCompleted(s32);
extern void SpuSetKey(s32, u32);
extern u32 SpuSetTransferStartAddr(u32);
extern void func_8004749C(u8 *, u32, u32, s32);
extern s32 func_8004784C(u8 *);
extern void func_800371A4(s32);
extern void func_8003C950(s32, s32);
extern void func_8003CA90(s32);
extern s32 func_8003CC00(u32, s32);
extern void func_8003CCAC(s32, s32, s32);
extern void func_8003CD70(s32);
extern void func_8003CE14(s32);
extern void func_8003CEF8(s32, s32, s32);
extern void func_8003CF68(void);
extern s32 func_8003D518(s32);
extern void func_80035304(void), func_80035810(void), func_8003577C(void), func_80034F74(void);

#define G D_800922F0
#define H D_80093710
#define FL (*(u16 *)G)
#define ST G[0x112]
#define SB G[0x113]
#define G16(o) (*(u16 *)(G + (o)))
#define GS16(o) (*(s16 *)(G + (o)))
#define G32(o) (*(u32 *)(G + (o)))
#define H32(o) (*(u32 *)(H + (o)))
#define H16(o) (*(u16 *)(H + (o)))
#define CNT H16(0x28)
#define SCNT (*(s16 *)(H + 0x28))
#define SYNCID (*(s32 *)(H + 0x2C))
#define RES (H + 0x10)
#define POS (H + 0x20)
#define TAB (*(u8 **)(G + 0x140))
#define VOL(v) ((s32)((v) * G16(6) << 7) >> 16)

static void setup_xfer(void) {
    u16 i = H16(0x34);
    *(u32 *)(TAB + i * 16 + 0xC) = H32(0x40);
    DsIntToPos(H32(0x3C), POS);
    FL |= 2;
    H[0x4C] = 0xA0;
    SYNCID = DsControlF(0xE, H + 0x4C);
    SB = 1;
}

void func_80035894(void) {
    s32 r;
    u32 v, w;

    switch (ST) {
    case 1:
        if (G[0x114]) G[0x114]--;
        else ST = 0;
        return;

    case 32:
        switch (SB) {
        case 0:
            DsIntToPos(G32(0x118), POS);
            v = G32(0x11C);
            w = G32(0x120);
            H32(0x78) = v;
            H32(0x74) = (v + 0x7FF) >> 11;
            func_8004749C(POS, (v + 0x7FF) >> 11, w, 0xA0);
            SB = 1;
            return;
        case 1:
            r = func_8004784C(RES);
            if (r == -1) { SB = 0; return; }
            if (r != 0) return;
            SB = 0;
            ST = 0;
            return;
        }
        return;

    case 80:
        switch (SB) {
        case 0:
            CNT = 0;
        case 1:
            SpuSetKey(0, 0xF00000);
            SB = 2;
            return;
        case 2:
            if (H[0x70] + H[0x71] + H[0x72] + H[0x73] == 0) {
                SB = 0;
                ST = 0;
                return;
            }
            v = CNT + 1;
            SB = 1;
            CNT = v;
            if ((u16)v >= 0x3D) {
                ST = 0;
                SB = 0;
            }
            return;
        }
        return;

    case 82:
        switch (SB) {
        case 0: {
            u16 *p;
            u32 a, b;
            if (!SpuIsTransferCompleted(0)) return;
            p = (u16 *)G32(0x120);
            CNT = 0;
            H32(0x30) = (u32)p;
            v = *p;
            H32(0x40) = 0x5010;
            H32(0x44) = 0x5010;
            H16(0x34) = v;
            a = *(u32 *)(TAB + H16(0x34) * 16 + 8);
            H32(0x38) = a & 0xFFFFFF;
            b = *(u32 *)(TAB + H16(0x34) * 16 + 4);
            H16(0x48) = G16(0x116);
            H16(0x4A) = G16(0x116);
            H32(0x3C) = (b & 0xFFFFFF) + G32(0x138);
            SpuSetTransferStartAddr(0x5010);
            setup_xfer();
            return;
        }
        case 1:
            r = DsSync(SYNCID, RES);
            if (r == 2) { CNT = 0; SB = r; return; }
            if (r == 5) SB = 0;
            return;
        case 2:
            if (SCNT < 0) CNT = 0;
            CNT++;
            if (SCNT < 4) return;
            DsReadyCallback(func_80035304);
            DsControl(6, POS, RES);
            SB = 3;
            return;
        case 3:
            if (H16(0x48) == H16(0x4A)) {
                CNT++;
                if (SCNT >= 0x12D) SB = 5;
            } else {
                CNT = 0;
                H16(0x4A) = H16(0x48);
            }
            return;
        case 4:
            if (!SpuIsTransferCompleted(0)) return;
            SB = 0;
            ST = 0;
            return;
        case 5: {
            s32 addr;
            u32 a, b;
            if (!SpuIsTransferCompleted(0)) return;
            addr = H32(0x44);
            CNT = 0;
            H32(0x40) = addr;
            a = *(u32 *)(TAB + H16(0x34) * 16 + 8);
            H32(0x38) = a & 0xFFFFFF;
            b = *(u32 *)(TAB + H16(0x34) * 16 + 4);
            H16(0x4A) = H16(0x48);
            H32(0x3C) = (b & 0xFFFFFF) + G32(0x138);
            if (addr >= 0) SpuSetTransferStartAddr(addr);
            setup_xfer();
            return;
        }
        }
        return;

    case 0:
        SB = 0;
        ST = 0;
        return;

    case 17:
        switch (SB) {
        case 0:
            DsSyncCallback(func_80035810);
            DsControlF(1, 0);
            SB = 1;
            CNT = 0;
            return;
        case 1:
            CNT++;
            if (CNT < 0x1F) return;
            DsSyncCallback(0);
            SB = 0;
            if (FL & 0xF) ST = 0x26;
            else ST = 0;
            SB = 0;
            return;
        }
        return;

    case 33:
        switch (SB) {
        case 0:
            DsIntToPos(G32(0x11C), POS);
            SYNCID = DsControlF(0x15, POS);
            CNT = 0;
            SB = 1;
            FL |= 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r == 2) goto stop33;
            if (r == 5) {
                CNT++;
                if (SCNT < 0x1E) { SB = 0; return; }
                goto stop33;
            }
            CNT++;
            if (SCNT < 0x259) return;
        stop33:
            ST = 0;
            FL &= 0xFFFE;
            return;
        }
        return;

    case 39:
        switch (SB) {
        case 0:
            *(s32 *)(H + 0x2C) = DsControlF(0xE, G + 0x114);
            SB = 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r != 2) { if (r == 5) SB = 0; return; }
            ST = 0;
            SB = 0;
            return;
        }
        return;

    case 37:
        switch (SB) {
        case 0:
            *(s32 *)(H + 0x2C) = DsControlF(0xC, 0);
            SB = 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r != 2) { if (r == 5) SB = 0; return; }
            ST = 0;
            FL &= 0xFFFB;
            SB = 0;
            return;
        }
        return;

    case 38:
    case 44:
        switch (SB) {
        case 0:
            G16(0x144) = 0;
            func_800371A4(0);
            *(s32 *)(H + 0x2C) = DsControlF(1, 0);
            SB = 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r != 2) { if (r == 5) SB = 0; return; }
            if (H[0x10] & 0xE0) {
                SYNCID = DsControlF(9, 0);
                SB = r;
                CNT = 0;
                return;
            }
            if (ST == 38) {
                FL &= 0xFFF8;
                ST = 0;
                SB = 0;
            } else {
                ST = 0;
                SB = 0;
            }
            return;
        case 2:
            r = DsSync(SYNCID, RES);
            if (r == 2) { SB = 0; return; }
            CNT++;
            if (SCNT >= 0x12D) SB = 0;
            return;
        default:
            SB = 0;
            return;
        }

    case 36:
        switch (SB) {
        case 0:
            *(s32 *)(H + 0x2C) = DsControlF(1, 0);
            SB = 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r == 2) {
                if (!(H[0x10] & 0xE0)) { SB = 3; return; }
                G16(0x144) = 0;
                func_800371A4(0);
                SYNCID = DsControlF(9, 0);
                SB = r;
                CNT = 0;
                return;
            }
            if (r == 5) SB = 0;
            return;
        case 2:
            if (DsSync(SYNCID, RES) == 2) { SB = 0; return; }
            CNT++;
            if (SCNT >= 0x12D) SB = 0;
            return;
        case 3:
            *(s32 *)(H + 0x2C) = DsControlF(0xF, 0);
            SB = 4;
            return;
        case 4:
            r = DsSync(SYNCID, RES);
            if (r != 2) { if (r == 5) SB = 0; return; }
            if (H[0x11] == 0xCA) { SB = 9; return; }
            SB = 5;
            G[0x114] = 0xCA;
            SYNCID = DsControlF(0xE, G + 0x114);
            return;
        case 5:
            r = DsSync(SYNCID, RES);
            if (r != 2) { if (r == 5) SB = 0; return; }
            SB = 6;
            return;
        case 6: case 7: case 8:
            SB++;
            return;
        case 9: {
            u8 *e = *(u8 **)(G + 0x1170) + G16(0x116) * 8;
            u32 base = G32(0x1188);
            u32 t1 = *(u32 *)e, a3 = *(u32 *)(e + 4);
            u8 b1 = (t1 & 0x1F000000) >> 24, b2 = (a3 & 0x1F000000) >> 24;
            G32(0x117C) = (t1 & 0xFFFFFF) + base;
            G32(0x1180) = (a3 & 0xFFFFFF) + base + 0x20;
            G[0x1185] = b1;
            G[0x1184] = b2;
            G[0x1186] = a3 >> 31;
            G[0x1187] = t1 >> 29;
            H[0x25] = b2;
            H[0x24] = b1;
            SYNCID = DsControlF(0xD, H + 0x24);
            SB = 10;
            return;
        }
        case 10:
            r = DsSync(SYNCID, RES);
            if (r == 2) {
                func_800371A4(0xFF);
                DsIntToPos(G32(0x117C), POS);
                SB = 11;
                SYNCID = DsControlF(0x1B, POS);
                return;
            }
            if (r == 5) SB = 9;
            return;
        case 11:
            r = DsSync(SYNCID, RES);
            if (r == 2) {
                CNT = 0;
                SB = 12;
                DsSyncCallback(func_8003577C);
                DsControlF(1, 0);
                return;
            }
            if (r == 5) SYNCID = DsControlF(0x1B, POS);
            return;
        case 12: {
            u16 t;
            if (SCNT < 0) CNT = 0;
            CNT++;
            if (SCNT < 0x259) return;
            t = G16(0x116);
            v = FL;
            CNT = 0;
            ST = 0;
            SB = 0;
            G16(0x1174) = t;
            FL = (v & 0xFFFE) | 4;
            DsSyncCallback(0);
            return;
        }
        }
        return;

    case 41:
    case 42:
        if (GS16(0x146) == 0) { ST = 0; return; }
        G16(0x144) += G16(0x146);
        if (GS16(0x144) < G[8] && ST == 0x2A) {
            G16(0x146) = 0;
            ST = 0;
            G16(0x144) = G[8];
        }
        if (G[8] < GS16(0x144) && ST == 0x29) {
            G16(0x146) = 0;
            ST = 0;
            G16(0x144) = G[8];
        }
        func_800371A4(GS16(0x144));
        return;

    case 68:
    case 69:
        if (GS16(0x1196) == 0) { ST = 0; return; }
        G16(0x1194) += G16(0x1196);
        if (GS16(0x1194) < G[9] && ST == 0x45) {
            G16(0x1196) = 0;
            ST = 0;
            G16(0x1194) = G[9];
        }
        if (G[9] < GS16(0x1194) && ST == 0x44) {
            G16(0x1196) = 0;
            ST = 0;
            G16(0x1194) = G[9];
        }
        if (GS16(0x1192) != -1)
            func_8003CEF8(GS16(0x1192), VOL(GS16(0x1194)), VOL(GS16(0x1194)));
        return;

    case 70:
        switch (SB) {
        case 0:
            if (GS16(0x118E) == -1) {
                G16(0x1192) = -1;
                G16(0x1190) = -1;
                ST = 0;
                SB = 0;
                return;
            }
            if (GS16(0x1192) == -1) { SB = 2; return; }
            if ((s16)func_8003D518(GS16(0x1192)) == 1) func_8003CD70(GS16(0x1192));
            SB = 1;
            return;
        case 1:
            if ((s16)func_8003D518(GS16(0x1192)) == 1) return;
            func_8003CE14(GS16(0x1192));
            SB = 2;
            G16(0x1192) = -1;
            return;
        case 2: {
            s32 h = func_8003CC00(G32(0x120), GS16(0x118E));
            u16 t = G16(0x116);
            G16(0x1192) = h;
            SB = 3;
            G16(0x1190) = t;
            return;
        }
        case 3:
            ST = 0;
            SB = 0;
            return;
        }
        return;

    case 72:
        switch (SB) {
        case 0:
            func_8003C950(0x7F, 0x7F);
            if (GS16(0x1192) != -1)
                func_8003CEF8(GS16(0x1192), VOL(GS16(0x1194)), VOL(GS16(0x1194)));
            SB = 1;
            return;
        case 1:
            if (GS16(0x1192) != -1) {
                func_8003CF68();
                func_8003CCAC(GS16(0x1192), 1, 1);
                G16(0x1190) = G16(0x116);
            }
            v = FL;
            ST = 0;
            SB = 0;
            FL = v | 0x80;
            return;
        }
        return;

    case 73:
        if (GS16(0x1192) != -1) func_8003CD70(GS16(0x1192));
        v = FL;
        ST = 0;
        SB = 0;
        FL = v & 0xFF7F;
        return;

    case 71:
        switch (SB) {
        case 0:
            if (GS16(0x1192) != -1) {
                func_8003CD70(GS16(0x1192));
                func_8003CE14(GS16(0x1192));
                G16(0x1192) = -1;
            }
            v = FL;
            SB = 1;
            FL = v & 0xFF7F;
            return;
        case 1: {
            s32 i, sum = 0;
            for (i = 0x5C; i < 0x70; i++) sum += H[i];
            if (sum) SpuSetKey(0, 0xFFFFF);
            SB = 0;
            ST = 0;
            return;
        }
        }
        return;

    case 74:
        switch (SB) {
        case 0:
            if (!SpuIsTransferCompleted(0)) return;
            if (GS16(0x118E) == 0) {
                u8 *e = D_80070714 + G16(0x116) * 8;
                if (e[2] == GS16(0x118C)) {
                    u8 *f = D_80070714 + G16(0x116) * 8;
                    u32 len = *(u16 *)(e + 6);
                    u32 q;
                    H32(0x38) = len;
                    q = ((*(u16 *)(f + 4) << 4) + 0x7EF) >> 4;
                    q = q / 127;
                    D_80078D53 = 5;
                    H32(0x40) = 0x801F6800;
                    H32(0x74) = (len + 0x7FF) >> 11;
                    H32(0x3C) = *(u16 *)f + (((*(u16 *)(f + 2) & 0xFF00) + 0xA1F) >> 11) + q + G32(0x1198);
                    goto go74;
                }
                func_8003CA90(0);
                G16(0x118C) = -1;
                G16(0x118E) = -1;
            }
            {
                u32 hi;
                G16(0x118C) = D_80070714[G16(0x116) * 8 + 2];
                hi = *(u16 *)(D_80070714 + G16(0x116) * 8 + 2) & 0xFF00;
                H32(0x38) = hi + 0x220;
                v = *(u16 *)(D_80070714 + G16(0x116) * 8);
                D_80078D53 = 3;
                H32(0x40) = 0x801F1800;
                H32(0x74) = (hi + 0xA1F) >> 11;
                H32(0x3C) = v + G32(0x1198);
            }
        go74:
            FL = 2;
            H[0x4C] = 0xA0;
            SYNCID = DsControlF(0xE, H + 0x4C);
            SB = 1;
            return;
        case 1:
            r = DsSync(SYNCID, RES);
            if (r == 2) { CNT = 0; SB = r; return; }
            if (r == 5) SB = 0;
            return;
        case 2:
            CNT++;
            if (SCNT < 4) return;
            v = H32(0x3C);
            CNT = 0;
            DsIntToPos(v, POS);
            DsSyncCallback(0);
            DsReadyCallback(func_80034F74);
            DsControl(6, POS, RES);
            v = D_80078D53;
            D_80078D52 = 1;
            D_80078D51 = 0;
            SB = v;
            return;
        case 6:
            v = FL;
            SB = 0;
            ST = 0;
            FL = v & 0xFFFD;
            return;
        case 7:
            CNT = 0;
            SB = 8;
            return;
        case 8:
            CNT++;
            if (SCNT < 6) return;
            if (GS16(0x118E) == 0) func_8003CA90(0);
            G16(0x118C) = -1;
            G16(0x118E) = -1;
            SB = 0;
            CNT = 0;
            D_80078D51 = 0;
            return;
        }
        return;
    }
}
