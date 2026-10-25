/* compiler: 2.8.1-psx */
#include "common.h"

typedef struct {
    u32 voice, mask;
    s16 vol[2], volmode[2], volx[2];
    u16 pitch, note, sample_note;
    s16 envx;
    u32 addr, loop_addr;
    s32 a_mode, s_mode, r_mode;
    u16 ar, dr, sr, rr, sl, adsr1, adsr2;
} VoiceAttr;
extern void _spu_setInTransfer(s32);
extern void slpm_SpuInitMalloc(s32, u8 *);
extern void slpm_SpuSetVoiceAttr(VoiceAttr *);
extern void _SsVmKeyOffNow(s32);
extern void _SsVmFlush(void);
extern u8 D_80138548[], D_80138198[], D_801384A0[], D_80138388[];
extern u16 D_801381B8[];
extern u16 D_80138420, D_801384F8, D_8013849A;
extern s8 D_8013847C;
extern u8 D_80137C88[];
extern u16 D_80137C78, D_80137C7A, D_80138380, D_80137C7C, D_80137C7E, D_80137C80, D_80137C82;
extern u8 D_801384B0;
extern u16 D_80138468, D_8013846A;

#define E16(o) (*(u16 *)(e + (o)))

void _SsVmInit(s8 nvoice) {
    VoiceAttr attr;
    volatile s32 pad[4]; /* o original guarda 3 registros a mais: mesmo frame */
    u16 i;

    _spu_setInTransfer(0);
    D_80138420 = 0;
    slpm_SpuInitMalloc(0x20, D_80138548);
    for (i = 0; i < 0xC0; i++) D_801381B8[i] = 0;
    for (i = 0; i < 0x18; i++) D_80138198[i] = 0;
    D_801384F8 = 0;
    for (i = 0; i < 0x10; i++) D_801384A0[i] = 0;
    if ((u32)nvoice >= 0x18) D_8013847C = 0x18;
    else D_8013847C = nvoice;
    attr.mask = 0x60093;
    attr.pitch = 0x1000;
    attr.addr = 0x1000;
    attr.adsr1 = 0x80FF;
    attr.vol[0] = 0;
    attr.vol[1] = 0;
    attr.adsr2 = 0x4000;
    for (i = 0; i < D_8013847C; i++) {
        u8 *e = D_80137C88 + i * 0x36;
        E16(2) = 0x18;
        E16(0) = 0xFF;
        e[0x1D] = 0;
        E16(4) = 0;
        E16(6) = 0;
        E16(0x10) = -1;
        E16(0x12) = 0;
        E16(0x14) = 0;
        E16(0x16) = 0xFF;
        E16(8) = 0;
        E16(0xC) = 0;
        e[0xA] = 0x40;
        E16(0x1E) = 0;
        E16(0x20) = 0;
        E16(0x22) = 0;
        E16(0x24) = 0;
        E16(0x2A) = 0;
        E16(0x2C) = 0;
        E16(0x2E) = 0;
        E16(0x30) = 0;
        E16(0x32) = 0;
        E16(0x26) = 0;
        attr.voice = 1 << i;
        slpm_SpuSetVoiceAttr(&attr);
        D_8013849A = i;
        _SsVmKeyOffNow(1);
    }
    *(u32 *)(D_80138388 + 0) = 0;
    *(s16 *)(D_80138388 + 8) = 0x3FFF;
    *(s16 *)(D_80138388 + 0xA) = 0x3FFF;
    *(u32 *)(D_80138388 + 4) = 0;
    D_80137C78 = 0;
    D_80137C7A = 0;
    D_80138380 = 0;
    D_80137C7C = 0;
    D_80137C7E = 0;
    D_80137C80 = 0;
    D_80137C82 = 0;
    D_801384B0 = 0;
    D_80138468 = 0;
    D_8013846A = 0x80;
    _SsVmFlush();
}
