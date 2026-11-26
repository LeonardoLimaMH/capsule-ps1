#include "common.h"
#include "yuugi.h"

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_2pitch);

INCLUDE_ASM("asm/yuugi/nonmatchings/sdk_libspu_s_n2p", _spu_note2pitch);

/* _spu_pitch2note: C de sozud/psy-q-decomp (src/spu/s_n2p.c), licença MIT, ver docs/terceiros/README.md */
typedef struct {
    s16 left;
    s16 right;
} SpuVolume;

typedef struct {
    unsigned long voice;
    unsigned long mask;
    SpuVolume volume;
    SpuVolume volmode;
    SpuVolume volumex;
    unsigned short pitch;
    unsigned short note;
    unsigned short sample_note;
    short envx;
    unsigned long addr;
    unsigned long loop_addr;
    long a_mode;
    long s_mode;
    long r_mode;
    unsigned short ar;
    unsigned short dr;
    unsigned short sr;
    unsigned short rr;
    unsigned short sl;
    unsigned short adsr1;
    unsigned short adsr2;
} SpuVoiceAttr;

extern unsigned long SpuWrite (unsigned char *addr, unsigned long size);

extern unsigned long SpuWrite0 (unsigned long size);

extern unsigned long SpuRead (unsigned char *addr, unsigned long size);

extern unsigned long SpuSetTransferStartAddr (unsigned long addr);

extern unsigned long SpuWritePartly (unsigned char *addr, unsigned long size);

extern void SpuSetVoiceAttr (SpuVoiceAttr *arg);

extern void SpuGetVoiceAttr (SpuVoiceAttr *arg);

extern void SpuGetAllKeysStatus (char *status);

extern long SpuMalloc (long size);

extern long SpuMallocWithStartAddr (unsigned long addr, long size);

extern void SpuFree (unsigned long addr);

extern long SpuRGetAllKeysStatus (long min_, long max_, char *status);

extern long SpuRSetVoiceAttr (long min_, long max_, SpuVoiceAttr *arg);

extern void SpuNSetVoiceAttr (int vNum, SpuVoiceAttr *arg);

extern void SpuNGetVoiceAttr (int vNum, SpuVoiceAttr *arg);

extern void SpuSetVoiceVolume (int vNum, short volL, short volR);

extern void SpuSetVoiceVolumeAttr (int vNum, short volL, short volR,
       short volModeL, short volModeR);

extern void SpuSetVoicePitch (int vNum, unsigned short pitch);

extern void SpuSetVoiceNote (int vNum, unsigned short note);

extern void SpuSetVoiceSampleNote (int vNum, unsigned short sampleNote);

extern void SpuSetVoiceStartAddr (int vNum, unsigned long startAddr);

extern void SpuSetVoiceLoopStartAddr (int vNum, unsigned long lsa);

extern void SpuSetVoiceAR (int vNum, unsigned short AR);

extern void SpuSetVoiceDR (int vNum, unsigned short DR);

extern void SpuSetVoiceSR (int vNum, unsigned short SR);

extern void SpuSetVoiceRR (int vNum, unsigned short RR);

extern void SpuSetVoiceSL (int vNum, unsigned short SL);

extern void SpuSetVoiceARAttr (int vNum, unsigned short AR, long ARmode);

extern void SpuSetVoiceSRAttr (int vNum, unsigned short SR, long SRmode);

extern void SpuSetVoiceRRAttr (int vNum, unsigned short RR, long RRmode);

extern void SpuSetVoiceADSR (int vNum, unsigned short AR, unsigned short DR,
        unsigned short SR, unsigned short RR,
        unsigned short SL);

extern void SpuSetVoiceADSRAttr (int vNum,
     unsigned short AR, unsigned short DR,
     unsigned short SR, unsigned short RR,
     unsigned short SL,
     long ARmode, long SRmode, long RRmode);

extern void SpuGetVoiceVolume (int vNum, short *volL, short *volR);

extern void SpuGetVoiceVolumeAttr (int vNum, short *volL, short *volR,
       short *volModeL, short *volModeR);

extern void SpuGetVoiceVolumeX (int vNum, short *volXL, short *volXR);

extern void SpuGetVoicePitch (int vNum, unsigned short *pitch);

extern void SpuGetVoiceNote (int vNum, unsigned short *note);

extern void SpuGetVoiceSampleNote (int vNum, unsigned short *sampleNote);

extern void SpuGetVoiceEnvelope (int vNum, short *envx);

extern void SpuGetVoiceStartAddr (int vNum, unsigned long *startAddr);

extern void SpuGetVoiceLoopStartAddr (int vNum, unsigned long *loopStartAddr);

extern void SpuGetVoiceAR (int vNum, unsigned short *AR);

extern void SpuGetVoiceDR (int vNum, unsigned short *DR);

extern void SpuGetVoiceSR (int vNum, unsigned short *SR);

extern void SpuGetVoiceRR (int vNum, unsigned short *RR);

extern void SpuGetVoiceSL (int vNum, unsigned short *SL);

extern void SpuGetVoiceARAttr (int vNum, unsigned short *AR, long *ARmode);

extern void SpuGetVoiceSRAttr (int vNum, unsigned short *SR, long *SRmode);

extern void SpuGetVoiceRRAttr (int vNum, unsigned short *RR, long *RRmode);

extern void SpuGetVoiceADSR (int vNum,
        unsigned short *AR, unsigned short *DR,
        unsigned short *SR, unsigned short *RR,
        unsigned short *SL);

extern void SpuGetVoiceADSRAttr (int vNum,
     unsigned short *AR, unsigned short *DR,
     unsigned short *SR, unsigned short *RR,
     unsigned short *SL,
     long *ARmode, long *SRmode, long *RRmode);

extern void SpuGetVoiceEnvelopeAttr (int vNum, long *keyStat, short *envx );

extern s32 _spu_init(s32 arg0);

extern void _spu_Fr_(s32 arg0, u16 arg1, s32 arg2);

extern s32 _spu_t(s32 arg0, ...);

extern u32 _spu_Fw(void* arg0, u32 arg1);

extern u32 _spu_Fr(u32 arg0, u32 arg1);

extern u32 _spu_FsetRXXa(s32 arg0, u32 arg1);

extern s32 _spu_FgetRXXa(s32 arg0, s32 arg1);

extern void _spu_FsetPCR(s32 arg0);

s32 _spu_pitch2note(u16 arg0, u16 arg1, u16 arg2) {
    s32 lsb;
    s32 i;
    u16 inv;
    s32 octave;
    u32 mask;
    u32 t0;
    u32 val1, val2;
    u32 step;
    s32 j;
    u32 base;
    u32 acc, acc_step;
    s32 val;
    s32 s, f;
    s32 note, fine;

    inv = ~arg2;
    lsb = 0;
    i = 15;
    while (i >= 0) {
        if (!((inv >> i) & 1)) {
            lsb = i;
            break;
        }
        i--;
    }

    octave = lsb - 12;
    mask = 1 << lsb;
    t0 = 0x1000;
    for (i = 0; i < 48; i++) {
        val1 = mask * t0;
        t0 *= 0x103B;
        t0 >>= 12;
        val2 = mask * t0;
        j = 0;
        base = i << 5;
        acc = 0;
        step = (val2 - val1) >> 5;
        acc_step = step;
        for (; j < 32; j++) {
            u32 p0 = val1 + acc;
            u32 p1 = val1 + acc_step;
            p0 >>= 12;
            p1 >>= 12;
            if (arg2 >= p0 && arg2 < p1) {
                val = base + j;
                goto epilogue;
            }
            acc_step += step;
            acc += step;
        }
    }
    val = 0x600;

epilogue:
    s = val / 128;
    f = val % 128;
    note = arg0 + s + octave * 12;
    fine = arg1 + f;
    return (note << 8) | fine;
}
