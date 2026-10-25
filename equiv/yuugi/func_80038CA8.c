/* stub-ret: mixed */
#include "common.h"

extern u8 D_800937D0[];
extern u8 D_800944B8[];
extern u8 D_800947E8[];
extern u8 D_80093D68[];
extern u32 D_8007142C[];
extern u32 D_80093790;
extern s32 D_80078C78;
extern u16 D_80078D54, D_80078D56;
extern void SpuSetVoiceAttr(void *);
extern void SpuSetKey(s32, u32);
extern s32 SpuGetKeyStatus(u32);
extern void SpuSetKeyOnWithAttr(void *);
extern void SpuSetReverbVoice(s32, u32);
extern u32 SpuGetReverbVoice(void);
extern s16 func_80038ABC(s32, s32, s32);
extern void func_80037A7C(u8 *, u8 *);
extern u16 func_800375C0(s32, s32, s32, s32);

#define ATTR ((u8 *)&D_80093790)
#define CH(c) (D_800937D0 + (c) * 0x54)
#define VOICE(i) (D_80093D68 + (i) * 0x4E)
#define TBL(i) (D_800947E8 + (i) * 28)

static void stop_voice(u32 *k) {
    s32 st;
    *(u32 *)(ATTR + 4) = 0x60100;
    *(u16 *)(ATTR + 0x3A) = 0;
    *(u16 *)(ATTR + 0x3C) = 0;
    *(s32 *)(ATTR + 0x24) = 5;
    D_80093790 = *k;
    SpuSetVoiceAttr(ATTR);
    do {
        SpuSetKey(0, *k);
        st = SpuGetKeyStatus(*k);
    } while (st != 2 && st != 0);
}

void func_80038CA8(u8 ch, u8 note, u8 vel) {
    u8 *s1, *P, *end, *s4, *e;
    s32 idx, count, i, found, sum, d, t0, a1;
    u16 n, j;
    u32 chn;
    u8 s7;
    s16 s3;

    s1 = CH(ch);
    idx = *(s16 *)(D_800944B8 + (ch >> 4) * 0x2AC + 0x288);
    P = *(u8 **)(TBL(idx) + 4);
    n = s1[0];
    count = 0;
    for (i = 0; i < n; i++)
        if (P[0x20 + i * 16]) count++;
    end = P + n * 16 + 0x20;
    s7 = note;
    j = 0;
    if (*end == 0) return;
    chn = ch;
    do {
        s4 = P + 0x820 + ((count * 16 + j) << 5);
        found = 0;
        if (note < s4[6] || s4[7] < note) goto next;
        if (s1[0x12]) {
            s3 = 0;
            do {
                if (chn == VOICE(s3)[3]) goto have;
                s3++;
            } while (s3 < D_80078C78);
            s3 = -1;
        have:
            if (s3 != -1) {
                if (*(u16 *)(VOICE(s3) + 0x16) == 0) stop_voice(&D_8007142C[s3]);
                else found = 1;
            } else {
                s3 = func_80038ABC(chn, note, 1);
            }
        } else {
            s3 = -1;
        }
        if (*(s16 *)(s1 + 0x26) == 0) {
            *(u16 *)(s1 + 0x28) = 0;
        } else {
            u8 cur = s1[0x13];
            s7 = cur & 0x7F;
            *(u16 *)(s1 + 0x28) = 0;
            if (cur < note) {
                *(u16 *)(s1 + 0x2C) = (note - s1[0x13]) << 7;
                d = (*(u16 *)(s1 + 0x2C) << 2) / *(s16 *)(s1 + 0x26);
                *(u16 *)(s1 + 0x2E) = 1;
                *(u16 *)(s1 + 0x2A) = d;
            } else if (cur == note) {
                *(u16 *)(s1 + 0x2A) = 0;
                s7 = note;
            } else {
                *(u16 *)(s1 + 0x2C) = (s1[0x13] - note) << 7;
                d = (*(u16 *)(s1 + 0x2C) << 2) / *(s16 *)(s1 + 0x26);
                *(u16 *)(s1 + 0x2E) = 0;
                *(u16 *)(s1 + 0x2A) = d;
            }
        }
        if (s3 == -1) {
            s3 = func_80038ABC(ch, note, 0);
            if (s3 == -1) goto next;
        }
        e = VOICE(s3);
        if (s1[0x12] == 0) stop_voice(&D_8007142C[s3]);
        {
            u16 *q = (u16 *)(*(u8 **)(TBL(idx) + 4) + (*(u16 *)(*(u8 **)(TBL(idx) + 4) + 0x12) << 9) + 0x820);
            s16 cnt = *(s16 *)(s4 + 0x16);
            sum = 0;
            for (i = 0; i < cnt; i++) sum += *q++;
        }
        *(u32 *)(ATTR + 4) = 0x6019F;
        *(u16 *)(ATTR + 0xC) = 0;
        *(u16 *)(ATTR + 0xE) = 0;
        D_80093790 = D_8007142C[s3];
        *(u32 *)(ATTR + 0x1C) = *(u32 *)(TBL(idx) + 0x10) + sum * 8;
        *(u16 *)(ATTR + 0x3A) = *(u16 *)(e + 0x40) = *(u16 *)(s4 + 0x10);
        *(u16 *)(ATTR + 0x3C) = *(u16 *)(e + 0x42) = *(u16 *)(s4 + 0x12);
        *(s32 *)(ATTR + 0x24) = (*(u16 *)(s4 + 0x10) & 0x80) ? 5 : 1;
        *(u16 *)(e + 0x44) = *(u16 *)(ATTR + 0x24);
        s1[0x13] = note;
        s1[4] = vel;
        e[0x1E] = s4[4];
        e[0x1F] = s4[5];
        e[0x1D] = s4[0xC];
        {
            u8 b = s4[0xD];
            e[0] = s3;
            e[2] = n;
            *(u16 *)(e + 6) = s7 & 0x7F;
            *(u16 *)(e + 8) = s7 & 0x7F;
            *(u16 *)(e + 4) = j;
            *(u16 *)(e + 0x16) = 1;
            e[0x1C] = b;
        }
        e[3] = ch;
        *(u16 *)(s1 + 0x1E) = 0;
        e[0x10] = end[1];
        e[0x12] = end[4];
        e[0x11] = s4[2];
        {
            u8 b = s4[3];
            e[0x1A] = vel;
            e[0x13] = b;
        }
        if (*(u16 *)(s1 + 0x3C)) {
            u8 b;
            e[0x23] = 0; e[0x22] = 0; e[0x28] = 0;
            e[0x29] = s1[0x37];
            e[0x2B] = s1[0x39];
            *(u16 *)(e + 0x2C) = *(u16 *)(s1 + 0x3E);
            *(u16 *)(e + 0x26) = *(u16 *)(s1 + 0x3C);
            e[0x2A] = s1[0x38];
            b = s1[0x32];
            *(u16 *)(e + 0x24) = 0;
            *(u16 *)(e + 0x2E) = 0;
            e[0x20] = b;
        }
        if (*(u16 *)(s1 + 0x48)) {
            u8 b;
            e[0x33] = 0; e[0x32] = 0; e[0x38] = 0;
            e[0x39] = s1[0x4F];
            e[0x3B] = s1[0x51];
            *(u16 *)(e + 0x3C) = *(u16 *)(s1 + 0x4A);
            *(u16 *)(e + 0x36) = *(u16 *)(s1 + 0x48);
            e[0x3A] = s1[0x50];
            b = s1[0x42];
            *(u16 *)(e + 0x34) = 0;
            *(u16 *)(e + 0x3E) = 0;
            e[0x30] = b;
        }
        func_80037A7C(e, CH(chn));
        *(u16 *)(ATTR + 8) = (*(u16 *)(e + 0xC) * D_80078D54) >> 7;
        *(u16 *)(ATTR + 0xA) = (*(u16 *)(e + 0xE) * D_80078D56) >> 7;
        {
            u8 b = s1[6];
            *(u16 *)(e + 6) = note & 0x7F;
            e[0x1B] = b;
        }
        {
            u8 b = s1[7];
            *(u16 *)(e + 0x48) = 0xFFFF;
            *(u16 *)(e + 0x4A) = b;
        }
        if (s1[0x10] < 0x40) {
            u8 pan;
            s32 v;
            t0 = *(u16 *)(e + 0x2E) + (*(u16 *)(s1 + 0x1E) + *(u16 *)(s1 + 0x28));
            pan = s1[7];
            if (pan < 0x40) {
                if (e[0x1D] == 0) v = 0;
                else v = -(e[0x1D] * 2 * (0x40 - pan));
            } else if (pan == 0x40) {
                v = 0;
            } else if (e[0x1C] == 0) {
                v = 0;
            } else {
                v = e[0x1C] * 2 * (pan - 0x3F);
            }
            a1 = t0 + ((*(u16 *)(e + 8) << 7) + v);
            *(u16 *)(ATTR + 0x14) = func_800375C0((s16)a1 >> 7, a1 & 0x7F, s4[4], s4[5]);
        } else {
            s1[7] = 0x40;
            *(u16 *)(ATTR + 0x14) = func_800375C0(s7, 0, s4[4], s4[5]);
        }
        if (!found) {
            u32 *k = &D_8007142C[s3];
            do {
                SpuSetKeyOnWithAttr(ATTR);
            } while (SpuGetKeyStatus(*k == 1) == 0);
        }
        {
            u32 *k = &D_8007142C[s3];
            u8 r = s1[0x22];
            s32 on;
            if (r == 0) on = (s4[1] & 4) != 0;
            else on = r != 1;
            if (on) {
                do SpuSetReverbVoice(1, *k); while (!(SpuGetReverbVoice() & *k));
            } else {
                do SpuSetReverbVoice(0, *k); while (SpuGetReverbVoice() & *k);
            }
        }
    next:
        j++;
    } while (j < *end);
}
