#include "common.h"
#include "yuugi.h"

/* fila de vozes SPU em D_800922F0 */
typedef struct { u8 _p[0x125]; u8 f125; u8 f126; u16 _1[2]; u16 f12c[4]; } SpuVoices;
#define VOZ ((SpuVoices *)D_800922F0)

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033C10);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033CEC);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80033E5C);

s16 func_800340B4(u16 a0) {
    extern u8 D_800922F0[];
    s16 n = 0;
    s32 i;
    u8 idx;
    u32 bit;
    if (!(a0 & 0x8000)) {
        a0 = 0xFFFF;
    }
    idx = VOZ->f126;
    bit = 1 << idx;
    for (i = 3; i >= 0; i--) {
        if ((VOZ->f125 & bit) && VOZ->f12c[idx] == a0) {
            n++;
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        idx = (idx + 1) & 3;
    }
    return n;
}

void func_80034148(u16 a0) {
    extern u8 D_800922F0[];
    extern void SpuSetKey();
    s32 i;
    u8 idx;
    u32 bit;
    if (!(a0 & 0x8000)) {
        a0 = 0xFFFF;
    }
    idx = VOZ->f126;
    bit = 1 << idx;
    for (i = 0; i < 4; i++) {
        if ((VOZ->f125 & bit) && VOZ->f12c[idx] == a0) {
            SpuSetKey(0, 1 << (idx + 0x14));
            VOZ->f125 &= ~bit;
            VOZ->f126 = idx;
            return;
        }
        bit <<= 1;
        if (bit & 0x10) {
            bit = 1;
        }
        idx = (idx + 1) & 3;
    }
}

void func_8003422C(u16 a0) {
    extern u8 D_800922F0[];
    extern void SpuSetKey(), func_800373A0();
    s32 i;
    u32 keys = 0;
    u8 bit = 1;
    if (a0 & 0x8000) {
        func_800373A0();
    } else {
        for (i = 0; i < 4; i++) {
            if (VOZ->f12c[i] == a0) {
                keys |= 1 << (i + 0x14);
                VOZ->f125 &= ~bit;
            }
            bit <<= 1;
        }
        if (keys != 0) {
            SpuSetKey(0, keys);
        }
    }
}

#include "ghidra.h"
void func_800342CC(void)

{
  undefined1 auStack_18 [16];
  
  auStack_18[0] = 0x50;
  func_80036DB0(auStack_18);
  return;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800342F4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_800343C4);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_80033C10", func_80034714);

void func_80034AB0(s32 arg0) {
    func_80034714(arg0 & 0xFFFF, 0);
}

#include "common.h"

void func_80034AD4(void) {
    extern s16 D_80078D3C;
    extern u8 D_80078D4E;
    extern M2C_UNK D_800934D0[];
    SpuSetTransferCallback(0);
    D_80078D4E += 1;
    SpuSetKeyOnWithAttr(D_800934D0);
    D_80078D3C = 0;
}

#include "common.h"

void func_80034B14(void) {
    extern M2C_UNK D_800922F0[];
    s32 temp_v0;

    M2C_GFIELD(D_800922F0, s16, 0x1194) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x1196) = 0;
    M2C_GFIELD(D_800922F0, s16, 0x118C) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x118E) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1190) = -1;
    M2C_GFIELD(D_800922F0, s16, 0x1192) = -1;
    func_8003C844(0x1000);
    temp_v0 = M2C_GFIELD(D_800922F0, s32, 0xC) + 0x17C;
    M2C_GFIELD(D_800922F0, s32, 0x119C) = temp_v0;
    M2C_GFIELD(D_800922F0, s32, 0x1198) = temp_v0;
    func_8003C894(0x14);
    func_8003C808();
}

void func_80034B80(void) {
    func_8003C850();
}
