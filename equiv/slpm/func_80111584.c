/* compiler: 2.8.1-psx */
/* stub-ret: mixed */
#include "common.h"

/* tocador de vídeo (MDEC) do loader */
typedef struct {
    u8 disp[0x14];  /* DISPENV: +4 = disp.w, +0x11 = isrgb24 */
    u8 pad[4];
    u8 draw[0x60];  /* DRAWENV */
    u8 file[0x18];  /* CdlFILE */
} Locals;
extern s32 D_80133480, D_8013347C, D_8013348C;
extern u8 *D_801334A0;
extern u8 D_8014003C[];
extern char D_801100F0[], D_80110110[], D_80110120[], D_8011012C[];
extern void slpm_ResetGraph(s32);
extern s32 slpm_printf(const char *, ...);
extern s32 CdSearchFile(u8 *, const char *);
extern void CdIntToPos(s32, u8 *);
extern void func_80110F10(u8 *, s32, s32, s32, s32);
extern void func_80110E90(u8 *, void (*)(void));
extern void func_80110FDC(void);
extern void func_801111D4(u8 *);
extern void func_80111464(u8 *, s32);
extern void SsSetSerialAttr(s8, s8, s8);
extern void SsSetSerialVol(s8, s16, s16);
extern void slpm_SetDefDispEnv(u8 *, s32, s32, s32, s32);
extern void slpm_SetDefDrawEnv(u8 *, s32, s32, s32, s32);
extern void slpm_PutDispEnv(u8 *);
extern void slpm_PutDrawEnv(u8 *);
extern void slpm_SetDispMask(s32);
extern void slpm_VSync(s32);
extern void DecDCTin(u32, s32);
extern void DecDCTout(u32, s32);
extern s32 func_801119E4(s32, s32);
extern void func_80110E10(void);
extern void StUnSetRing(void);

#define D D_801334A0
#define DS16(o) (*(s16 *)(D + (o)))
#define D32(o) (*(s32 *)(D + (o)))

static void rgb24(Locals *l) {
    if (D_8013348C & 1) {
        l->disp[0x11] = 1;
        *(s16 *)(l->disp + 4) = (*(s16 *)(l->disp + 4) * 2) / 3;
    }
}

void func_80111584(const char *name, s32 frames, s32 pos) {
    Locals l;
    s32 n, i, off, cnt = 0;

    D_80133480 = frames;
    slpm_ResetGraph(1);
    D_8013347C = 0;
    D = D_8014003C - 0x3C; /* estrutura em 0x80140000 */
    *(s32 *)(D_8014003C + 0) = 0x140; /* +0x3C: largura */
    *(s32 *)(D_8014003C + 4) = 0xF0;  /* +0x40: altura */
    n = 0;
    if (pos == 0) {
        slpm_printf(D_801100F0, name, frames, 0);
        for (;;) {
            if (CdSearchFile(l.file, name)) break;
            if (0xFFFF < n++) {
                slpm_printf(D_80110110);
                return;
            }
        }
        D[0] = l.file[0];
        D[1] = l.file[1];
        D[2] = l.file[2];
        slpm_printf(D_80110120, l.file[0], l.file[1], l.file[2]);
    } else {
        slpm_printf(D_8011012C, frames, pos);
        CdIntToPos(pos, D);
        slpm_printf(D_80110120, D[0], D[1], D[2]);
    }
    func_80110F10(D + 4, 0, 0, 0, 0xF0);
    func_80110E90(D, func_80110FDC);
    func_801111D4(D + 4);
    SsSetSerialAttr(0, 0, 1);
    SsSetSerialVol(0, 0x1FFF, 0x1FFF);
    slpm_SetDefDispEnv(l.disp, DS16(0x1C), DS16(0x1E), DS16(0x20), DS16(0x22));
    slpm_SetDefDrawEnv(l.draw, DS16(0x1C), DS16(0x1E), DS16(0x20), DS16(0x22));
    rgb24(&l);
    slpm_PutDispEnv(l.disp);
    slpm_PutDrawEnv(l.draw);
    for (;;) {
        DecDCTin(*(u32 *)(D + D32(0xC) * 4 + 4), (D_8013348C & 1) + 2);
        DecDCTout(D32(0x10), (DS16(0x2C) * DS16(0x2E)) / 2);
        func_801111D4(D + 4);
        func_80111464(D + 4, 0);
        slpm_VSync(0);
        off = (D32(0x24) == 0) * 8;
        slpm_SetDefDispEnv(l.disp, DS16(off + 0x14), DS16(off + 0x16), DS16(off + 0x18), DS16(off + 0x1A));
        slpm_SetDefDrawEnv(l.draw, DS16(off + 0x14), DS16(off + 0x16), DS16(off + 0x18), DS16(off + 0x1A));
        rgb24(&l);
        slpm_PutDispEnv(l.disp);
        slpm_PutDrawEnv(l.draw);
        slpm_SetDispMask(1);
        if (!(D_8013347C < frames - 3)) break;
        if (!(cnt < frames - 0xF)) break;
        cnt++;
        if (D32(0x34) == 1) break;
        for (i = 0; i < 2; i++) {
            if (~(func_801119E4(i, 0) & 0xFFFF) & 0x860) {
                func_80110E10();
                break;
            }
        }
        if (i != 2) break;
    }
    slpm_SetDispMask(0);
    l.disp[0x11] = 0;
    slpm_PutDispEnv(l.disp);
    SsSetSerialVol(0, 0, 0);
    StUnSetRing();
}
