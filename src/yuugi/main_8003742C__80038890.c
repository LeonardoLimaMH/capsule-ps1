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

void func_80038890(void) {
    s32 i, bit, status, mask = 0;
    u8 *v;
    register s32 two asm("s0");
    register u8 *p asm("v0");
    register u8 val asm("a0");

    for (i = 0; i <= 0; i++) {
        func_8003860C(i);
    }

    for (i = 0; i < D_80078C78; i++) {
        v = (u8 *)&D_80093D68[i];
        v[0] = i;
        *(s16 *)(v + 0x16) = 0;
        *(s16 *)(v + 0x14) = 0x40;
        *(s16 *)(v + 0x48) = 0x40;
        *(s16 *)(v + 0x4A) = 0x40;
        bit = D_8007142C[i];
        mask |= bit;
        func_80038A60(i);
        do {
            SpuSetKey(0, bit);
            status = SpuGetKeyStatus(bit);
            if (status == 2) {
                break;
            }
        } while (status != 0);
    }

    two = 2;
    p = D_80093D10;
    val = 0x7F;
    p[1] = 0x40;
    p[7] = 0x40;
    p[3] = val;
    p[6] = 0;
    p[5] = val;
    *(s32 *)(p + 8) = 0x7F;
    *(s32 *)(p + 0xC) = 0x7F;
    p[2] = 0;
    *(s16 *)(p + 0x30) = 0;
    *(s16 *)(p + 0x26) = 0;

    do {
        SpuSetKey(0, mask);
        status = SpuGetKeyStatus(mask);
        if (status == two) {
            break;
        }
    } while (status != 0);
}

void func_800389E8(void) {

}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_800389F0(s32 n, u8 *p) {
    M2C_GFIELD(D_80093790, s32, 4) = 0x60100;
    *(s32 *)D_80093790 = D_8007142C[n];
    M2C_GFIELD(D_80093790, u16, 0x3A) = *(u16 *)(p + 0x40);
    M2C_GFIELD(D_80093790, u16, 0x3C) = *(u16 *)(p + 0x42);
    M2C_GFIELD(D_80093790, s32, 0x24) = *(u16 *)(p + 0x44);
    SpuSetVoiceAttr(D_80093790);
}

#include "common.h"

extern u8 D_80093790[];
extern s32 D_8007142C[];

void func_80038A60(s32 n)
{
  unsigned long new_var;
  ((struct 
  {
    u8 _p[4];
    s32 v;
  } *) D_80093790)->v = 0x60100;
  new_var = (unsigned long) D_8007142C[n];
  ((struct 
  {
    u8 _p[0x3A];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x3C];
    s16 v;
  } *) D_80093790)->v = 0;
  ((struct 
  {
    u8 _p[0x24];
    s32 v;
  } *) D_80093790)->v = 5;
  *((s32 *) D_80093790) = new_var;
  SpuSetVoiceAttr(D_80093790);
}
