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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C__80038890__80038CA8", func_80038CA8);

void func_80039724(u8 ch, u16 note) {
    struct Voice9724 {
        u8 pad0[3];
        u8 ch;
        u8 pad4[2];
        u16 note;
        u8 pad8[0xE];
        s16 unk16;
        u8 pad18[2];
        u8 unk1A;
        u8 unk1B;
        u8 pad1C[0x24];
        u16 unk40;
        u16 unk42;
        u16 unk44;
        u8 pad46[8];
    };
    s32 i;
    s32 mask = 0;
    s32 status;

    for (i = 0; i < D_80078C78; i++) {
        if (ch == ((struct Voice9724 *)D_80093D68)[i].ch && (note & 0xFF) == ((struct Voice9724 *)D_80093D68)[i].note) {
            if (((struct Voice9724 *)D_80093D68)[i].unk1B == 0) {
                M2C_GFIELD(D_80093790, s32, 4) = 0x60100;
                M2C_GFIELD(D_80093790, s32, 0) = D_8007142C[i];
                M2C_GFIELD(D_80093790, u16, 0x3A) = ((struct Voice9724 *)D_80093D68)[i].unk40;
                M2C_GFIELD(D_80093790, u16, 0x3C) = ((struct Voice9724 *)D_80093D68)[i].unk42;
                M2C_GFIELD(D_80093790, s32, 0x24) = ((struct Voice9724 *)D_80093D68)[i].unk44;
                SpuSetVoiceAttr(D_80093790);
                mask |= D_8007142C[i];
                do {
                    SpuSetKey(0, D_8007142C[i]);
                    status = SpuGetKeyStatus(D_8007142C[i]);
                    if (status == 2) {
                        break;
                    }
                } while (status != 0);
                ((struct Voice9724 *)D_80093D68)[i].unk16 = 0;
            } else {
                ((struct Voice9724 *)D_80093D68)[i].unk1A |= 0x80;
            }
        }
    }

    if (mask != 0) {
        do {
            SpuSetKey(0, mask);
            status = SpuGetKeyStatus(mask);
            if (status == 2) {
                break;
            }
        } while (status != 0);
    }
}

void func_800398B4(void) {

}

s32 func_800398BC(u8 *p, u16 sub, u8 prog) {
    extern u8 D_800944B8[], D_800947E8[];
    register u8 *bank asm("t0") = D_800947E8;
    register u8 *seq asm("a3") = D_800944B8;
    register s32 k asm("v0");
    s32 data, offset;
    k = *(s16 *)(seq + (prog >> 4) * 0x2AC + 0x288);
    data = *(s32 *)(bank + k * 0x1C + 4);
    offset = (p[0] * 16 + sub) * 32 + 0x820;
    return data + offset;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C__80038890__80038CA8", func_8003992C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8003742C__80038890__80038CA8", func_80039E60);
