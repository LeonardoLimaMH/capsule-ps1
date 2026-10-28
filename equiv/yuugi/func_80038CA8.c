/* stub-ret: mixed */
/* arg0: small */
/* arg1: small */
/* max-insns: 400000 */
/* rand-u16: 0x80094740 1 0,1,2,3 */
/* rand-u32-strided: 0x800947EC 4 28 0x80150000 */
/* rand-mem: 0x80150020 0x40 4 */
/* rand-u16: 0x80150012 1 0 */
/* rand-mem: 0x80150820 0xC00 8 */
/* rand-u32-strided: 0x80078C78 1 4 0,1,4,24 */
/* rand-mem: 0x800937D0 1 4 */
/* rand-mem: 0x80093824 1 4 */
/* rand-mem: 0x80093878 1 4 */
/* rand-mem: 0x800938CC 1 4 */
/* rand-mem: 0x800937E2 1 2 */
/* rand-mem: 0x80093836 1 2 */
/* rand-mem: 0x8009388A 1 2 */
/* rand-mem: 0x800938DE 1 2 */
/* rand-mem: 0x80093D6B 1 4 */
/* rand-mem: 0x80093DB9 1 4 */
/* rand-mem: 0x80093E07 1 4 */
/* rand-mem: 0x80093E55 1 4 */
#include "common.h"

/* "note on" do driver de som: toca a nota note com volume vel no canal ch. Para cada camada
 * do timbre (instrumento do programa da sequência) cuja faixa de notas contém a nota: escolhe
 * a voz (mono: reaproveita a do canal; senão func_80038ABC), calcula o portamento, programa
 * os atributos da voz no SPU, liga a tecla e ajusta o reverb */
extern u8 D_800937D0[], D_800944B8[], D_800947E8[], D_80093D68[], D_80093790[];
extern s32 D_8007142C[], D_80078C78;
extern u16 D_80078D54, D_80078D56;
extern s32 func_80038ABC(s32, s32, s32), func_80037A7C(void *, void *), func_800375C0(s32, s32, s32, s32);
extern s32 SpuSetVoiceAttr(void *), SpuSetKey(s32, s32), SpuGetKeyStatus(s32), SpuSetKeyOnWithAttr(void *);
extern s32 SpuSetReverbVoice(s32, s32), SpuGetReverbVoice(void);

#define B8(q, o) (*(u8 *)((q) + (o)))
#define U16(q, o) (*(u16 *)((q) + (o)))
#define S16(q, o) (*(s16 *)((q) + (o)))
#define W(q, o) (*(s32 *)((q) + (o)))
#define ATTR D_80093790
#define VOICE(v) (D_80093D68 + (v) * 78)
#define MASK(v) D_8007142C[v]
#define PROG(p, o) (*(s32 *)(D_800947E8 + (p) * 28 + (o)))

/* desliga a voz v antes de reprogramar: volume 0 e espera a tecla soltar */
#define VOICE_OFF(v) \
    do { \
        W(ATTR, 4) = 0x60100; \
        S16(ATTR, 0x3A) = 0; \
        S16(ATTR, 0x3C) = 0; \
        W(ATTR, 0x24) = 5; \
        W(ATTR, 0) = MASK(v); \
        SpuSetVoiceAttr(ATTR); \
        do { \
            SpuSetKey(0, MASK(v)); \
            r = SpuGetKeyStatus(MASK(v)); \
        } while (r != 2 && r != 0); \
    } while (0)

s32 func_80038CA8(s32 a0, s32 a1, s32 a2) {
    u8 ch = a0, vel = a2;
    u8 *t = D_800937D0 + ch * 84;
    s32 prog = S16(D_800944B8 + (ch >> 4) * 684, 0x288);
    u8 *bank = (u8 *)PROG(prog, 4);
    u16 tone = t[0];
    s32 base = 0, i, r, n, sum, keyed, v0;
    u32 note = a1 & 0xFF, s7 = a1 & 0xFF;
    u8 *hdr, *a, *v;
    s16 s3;
    u16 j;
    for (i = 0; i < tone; i++)
        if (bank[0x20 + i * 16] != 0) base++;
    hdr = bank + tone * 16 + 0x20;
    for (j = 0; j < hdr[0]; j++) {
        a = bank + (base * 16 + j) * 32 + 0x820;
        keyed = 0;
        if (note < a[6] || a[7] < note) continue;
        s3 = -1;
        if (t[0x12] != 0) {
            for (s3 = 0; s3 < D_80078C78; s3++)
                if (B8(VOICE(s3), 3) == ch) break;
            if (s3 >= D_80078C78) s3 = -1;
            if (s3 != -1) {
                if (U16(VOICE(s3), 0x16) == 0) VOICE_OFF(s3);
                else keyed = 1;
            } else {
                s3 = func_80038ABC(ch, note, 1);
            }
        }
        /* portamento: desliza da nota anterior (+0x13) em +0x26 passos */
        if (S16(t, 0x26) != 0) {
            u8 last = t[0x13];
            s7 = last & 0x7F;
            U16(t, 0x28) = 0;
            if (last < note) {
                S16(t, 0x2C) = (note - t[0x13]) << 7;
                S16(t, 0x2E) = 1;
                S16(t, 0x2A) = (U16(t, 0x2C) << 2) / S16(t, 0x26);
            } else if (last == note) {
                S16(t, 0x2A) = 0;
                s7 = note;
            } else {
                S16(t, 0x2C) = (t[0x13] - note) << 7;
                S16(t, 0x2E) = 0;
                S16(t, 0x2A) = (U16(t, 0x2C) << 2) / S16(t, 0x26);
            }
        } else {
            U16(t, 0x28) = 0;
        }
        if (s3 == -1) {
            s3 = func_80038ABC(ch, note, 0);
            if (s3 == -1) continue;
        }
        v = VOICE(s3);
        if (t[0x12] == 0) VOICE_OFF(s3);
        n = S16(a, 0x16);
        sum = 0;
        {
            u16 *tbl = (u16 *)(PROG(prog, 4) + (U16(bank, 0x12) << 9) + 0x820);
            for (i = 0; i < n; i++) sum += tbl[i];
        }
        W(ATTR, 4) = 0x6019F;
        S16(ATTR, 0xC) = 0;
        S16(ATTR, 0xE) = 0;
        W(ATTR, 0) = MASK(s3);
        W(ATTR, 0x1C) = PROG(prog, 0x10) + sum * 8;
        U16(ATTR, 0x3A) = U16(a, 0x10);
        U16(v, 0x40) = U16(a, 0x10);
        U16(ATTR, 0x3C) = U16(a, 0x12);
        U16(v, 0x42) = U16(a, 0x12);
        W(ATTR, 0x24) = (U16(a, 0x10) & 0x80) ? 5 : 1;
        U16(v, 0x44) = U16(ATTR, 0x24);
        t[0x13] = note;
        t[4] = vel;
        v[0x1E] = a[4];
        v[0x1F] = a[5];
        v[0x1D] = a[0xC];
        v[0] = s3;
        v[2] = tone;
        U16(v, 6) = s7 & 0x7F;
        U16(v, 8) = s7 & 0x7F;
        U16(v, 4) = j;
        U16(v, 0x16) = 1;
        v[0x1C] = a[0xD];
        v[3] = ch;
        U16(t, 0x1E) = 0;
        v[0x10] = hdr[1];
        v[0x12] = hdr[4];
        v[0x11] = a[2];
        v[0x1A] = vel;
        v[0x13] = a[3];
        if (U16(t, 0x3C) != 0) {
            v[0x23] = 0;
            v[0x22] = 0;
            v[0x28] = 0;
            v[0x29] = t[0x37];
            v[0x2B] = t[0x39];
            U16(v, 0x2C) = U16(t, 0x3E);
            U16(v, 0x26) = U16(t, 0x3C);
            v[0x2A] = t[0x38];
            U16(v, 0x24) = 0;
            U16(v, 0x2E) = 0;
            v[0x20] = t[0x32];
        }
        if (U16(t, 0x48) != 0) {
            v[0x33] = 0;
            v[0x32] = 0;
            v[0x38] = 0;
            v[0x39] = t[0x4F];
            v[0x3B] = t[0x51];
            U16(v, 0x3C) = U16(t, 0x4A);
            U16(v, 0x36) = U16(t, 0x48);
            v[0x3A] = t[0x50];
            U16(v, 0x34) = 0;
            U16(v, 0x3E) = 0;
            v[0x30] = t[0x42];
        }
        func_80037A7C(v, D_800937D0 + ch * 84);
        S16(ATTR, 8) = (U16(v, 0xC) * D_80078D54) >> 7;
        S16(ATTR, 0xA) = (U16(v, 0xE) * D_80078D56) >> 7;
        U16(v, 6) = note & 0x7F;
        v[0x1B] = t[6];
        U16(v, 0x48) = 0xFFFF;
        U16(v, 0x4A) = t[7];
        if (t[0x10] < 0x40) {
            s32 base2 = U16(v, 0x2E) + (U16(t, 0x1E) + U16(t, 0x28));
            s32 pan = t[7], p;
            if (pan < 0x40) v0 = v[0x1D] ? -(v[0x1D] * 2 * (0x40 - pan)) : 0;
            else if (pan == 0x40) v0 = 0;
            else v0 = v[0x1C] ? v[0x1C] * 2 * (pan - 0x3F) : 0;
            p = (U16(v, 8) << 7) + v0 + base2;
            r = func_800375C0((s16)p >> 7, p & 0x7F, a[4], a[5]);
        } else {
            t[7] = 0x40;
            r = func_800375C0(s7, 0, a[4], a[5]);
        }
        S16(ATTR, 0x14) = r;
        if (!keyed) {
            do {
                SpuSetKeyOnWithAttr(ATTR);
            } while (SpuGetKeyStatus(MASK(s3) == 1) == 0);
        }
        if (t[0x22] == 0) {
            if (a[1] & 4) {
                do {
                    SpuSetReverbVoice(1, MASK(s3));
                } while (!(SpuGetReverbVoice() & MASK(s3)));
            } else {
                do {
                    SpuSetReverbVoice(0, MASK(s3));
                } while (SpuGetReverbVoice() & MASK(s3));
            }
        } else if (t[0x22] == 1) {
            do {
                SpuSetReverbVoice(0, MASK(s3));
            } while (SpuGetReverbVoice() & MASK(s3));
        } else {
            do {
                SpuSetReverbVoice(1, MASK(s3));
            } while (!(SpuGetReverbVoice() & MASK(s3)));
        }
    }
    return 0;
}
