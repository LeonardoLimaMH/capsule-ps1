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

s32 func_80038ABC(s32 prog, s32 note, s32 flag) {
    s32 r;
    s16 i;
    i = 0;
    do {
        if (SpuGetKeyStatus(D_8007142C[i]) == 0) {
            return i;
        }
        i++;
    } while (i < D_80078C78);
    i = 0;
    do {
        r = SpuGetKeyStatus(D_8007142C[i]);
        if (r == 2 || r == 0) {
            return i;
        }
        i++;
    } while (i < D_80078C78);
    if (!flag) {
        goto loop3;
    }
    return -1;
loop3:
    i = 0;
    do {
        u8 *e = (u8 *)D_80093D68 + i * 0x4E;
        if (prog == e[3] && *(u16 *)(e + 6) == note) {
            return i;
        }
        i++;
    } while (i < D_80078C78);
    i = 0;
    do {
        u8 *e = (u8 *)D_80093D68 + i * 0x4E;
        if (*(u16 *)(e + 0x16) != 0) {
            i++;
            continue;
        }
        return i;
    } while (i < D_80078C78);
    return -1;
}

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

