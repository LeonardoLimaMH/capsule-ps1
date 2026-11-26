#include "common.h"
#include "yuugi.h"

extern u8 D_800922FA[];
extern u8 D_800922F0[];
extern void func_80036DB0();

struct VoiceE {
    u8 _p0[0xC];
    u16 l;
    u16 r;
    u8 _p1[0x2E];
    s16 cur;
    u8 _p2[6];
    s16 last;
    u8 _p3[0x4E - 0x48];
};

typedef struct {
    u8 pad0[2];
    u8 f2;
    u8 pad3[0x11];
    u16 f14;
    u8 pad16[6];
    s16 f1c;
    s16 f1e;
    s16 f20;
    u8 pad22[4];
    s16 f26;
    s16 f28;
    s16 f2a;
    u16 f2c;
    u16 f2e;
} OscObj;

extern u16 D_8007082C[][128];


extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54, D_80078D56;
extern void SpuSetVoiceAttr();

extern u8 D_80078CC8[];
extern u16 D_80078C7C;


extern u8 D_80093790[];
extern s32 D_8007142C[];
extern u16 D_80078D54;
extern u16 D_80078D56;

extern u8 D_80093790[];
extern s32 D_8007142C[];
extern s32 D_80078C78;
extern struct VoiceE D_80093D68[];

extern u8 D_800944B8[], D_800937D0[];
extern s32 SpuSetKey(s32, s32), SpuGetKeyStatus(s32);
void func_8003860C(s32 n) {
    s32 i, bit, mask = 0;
    u8 *c;
    D_80078C7C = 0x7F;
    for (i = 0; i < 16; i++) {
        register u8 *q asm("v0");
        q = D_800944B8 + n * 684 + i * 0x28;
        q[0x20] = 1;
        q[0x24] = 0xFF;
        *(s32 *)(q + 0) = 0;
        *(s32 *)(q + 4) = 0;
        q[0x22] = 0;
        *(s16 *)(q + 0x1C) = 0;
        *(s32 *)(q + 8) = 0;
        *(s32 *)(q + 0xC) = 0;
        *(s16 *)(q + 0x14) = 0x72;
        *(s16 *)(q + 0x16) = 0x72;
        *(s32 *)(q + 0x10) = 0;
        *(s16 *)(q + 0x18) = 0;
        q[0x23] = 0;
        q[0x25] = 0;
        q[0x27] = n << 4;
    }
    for (i = 0; i < D_80078C78; i++) {
        c = (u8 *)&D_80093D68[i];
        if ((c[3] >> 4) != n) continue;
        c[0] = i;
        *(s16 *)(c + 0x16) = 0;
        *(s16 *)(c + 0x14) = 0x40;
        c[0x1B] = 0;
        c[0x23] = 0;
        c[0x22] = 0;
        c[0x28] = 0;
        *(s16 *)(c + 0x24) = 0;
        *(s16 *)(c + 0x26) = 0;
        *(s16 *)(c + 0x2E) = 0;
        c[0x33] = 0;
        c[0x32] = 0;
        c[0x38] = 0;
        *(s16 *)(c + 0x34) = 0;
        *(s16 *)(c + 0x36) = 0;
        *(s16 *)(c + 0x3E) = 0;
        *(s16 *)(c + 0x48) = 0x40;
        *(s16 *)(c + 0x4A) = 0x40;
        bit = D_8007142C[i];
        mask |= bit;
        func_80038A60(i);
        for (;;) {
            s32 r;
            SpuSetKey(0, bit);
            r = SpuGetKeyStatus(bit);
            if (r == 2 || r == 0) break;
        }
    }
    for (i = 0; i < 16; i++) {
        c = D_800937D0 + (n * 16 + i) * 0x54;
        c[3] = 0x7F;
        c[0x13] = 0x3C;
        c[1] = 0x40;
        c[6] = 0;
        c[7] = 0x40;
        c[5] = 0x7F;
        *(s32 *)(c + 8) = 0x7F;
        *(s32 *)(c + 0xC) = 0x7F;
        c[2] = 0;
        *(s16 *)(c + 0x1E) = 0;
        *(s16 *)(c + 0x18) = 0;
        *(s16 *)(c + 0x20) = 0;
        c[0x1A] = 0;
        *(s16 *)(c + 0x30) = 0;
        c[0x22] = 0;
        c[0x35] = 0;
        c[0x34] = 0;
        c[0x36] = 0;
        *(s16 *)(c + 0x3A) = 0;
        *(s16 *)(c + 0x3C) = 0;
        c[0x45] = 0;
        c[0x44] = 0;
        c[0x4E] = 0;
        *(s16 *)(c + 0x46) = 0;
        *(s16 *)(c + 0x48) = 0;
        c[0x10] = 0;
        c[0x11] = 0;
        *(s16 *)(c + 0x26) = 0;
        c[0x12] = 0;
    }
    SpuSetKey(0, mask);
}

extern u8 D_80093D10[];
extern s32 D_8007142C[], D_80078C78;
extern void func_8003860C(s32);
extern void func_80038A60(s32);
extern s32 SpuSetKey(s32, s32);
extern s32 SpuGetKeyStatus(s32);


extern u8 D_80093790[];
extern s32 D_8007142C[];


extern u8 D_80093790[];
extern s32 D_8007142C[];

extern u8 D_800947E8[];
extern s32 SpuSetKeyOnWithAttr();
extern void SpuSetReverbVoice();
extern s32 SpuGetReverbVoice();
#define B8(q, o) (*(u8 *)((q) + (o)))
#define U16(q, o) (*(u16 *)((q) + (o)))
#define S16(q, o) (*(s16 *)((q) + (o)))
#define W(q, o) (*(s32 *)((q) + (o)))
#define ATTR D_80093790
#define VOICE(v) ((u8 *)&D_80093D68[v])
#define MASK(v) D_8007142C[v]
#define PROG(p, o) (*(s32 *)(D_800947E8 + (p) * 28 + (o)))
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
typedef struct { s32 f0; s32 f4; s32 f8; s32 fC; s32 f10; s32 f14; s32 f18; } ProgE;
typedef struct { u8 pad[0x288]; s16 prog; u8 pad2[0x2AC - 0x28A]; } SeqE;
#define PROGT ((ProgE *)D_800947E8)
#define NOTE_VOICE_OFF(v) \
    do { \
        W(attr, 4) = 0x60100; \
        S16(attr, 0x3A) = 0; \
        S16(attr, 0x3C) = 0; \
        W(attr, 0x24) = 5; \
        W(D_80093790, 0) = MASK(v); \
        SpuSetVoiceAttr(attr); \
        do { \
            SpuSetKey(0, MASK(v)); \
            r = SpuGetKeyStatus(MASK(v)); \
        } while (r != 2 && r != 0); \
    } while (0)

extern u8 D_800947E8[], D_800944B8[];
extern s32 D_80078CCC;
extern s32 SpuGetReverb();
extern void SpuSetReverb(), SpuSetReverbModeParam();
#define H10 (*(u16 *)(e + 0x10))
#define H12 (*(u16 *)(e + 0x12))

#define UPD_8003(ch) \
    i = 0; \
    *(s16 *)(p + 0x1E) = 0; \
    for (; i < D_80078C78; i++) { \
        if (D_80093D68[i]._p0[3] == ch) { \
            func_800380C8((u8 *)&D_80093D68[i], 1); \
        } \
    }
#define REFRESH_39E60(ch) do { \
    s32 count = D_80078C78; \
    i = 0; \
    *(s16 *)(p + 0x1E) = 0; \
    if (count > 0) { \
        do { \
            if (D_80093D68[i]._p0[3] == ch) \
                func_800380C8((u8 *)&D_80093D68[i], 1); \
        } while (++i < D_80078C78); \
    } \
} while (0)

