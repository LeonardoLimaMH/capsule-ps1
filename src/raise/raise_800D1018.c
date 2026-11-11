#include "common.h"

extern u16 D_8006AFCC[];
extern u16 D_800F1C98[];
extern s16 D_80105990[];
extern void func_8003422C();
extern void func_80034AB0();
void func_800D1018(void) {
    s32 i;
    for (i = 0; i < 11; i++) {
        struct { u8 _p[0x30]; u16 f30; } *q = (void *)&D_8006AFCC[i];
        if (q->f30 == 1) {
            q->f30 = 0;
            if (D_800F1C98[i] != 0xFFFF) {
                func_8003422C(D_800F1C98[i]);
            }
        }
    }
}

void func_800D10A8(void) {
    s32 i;
    for (i = 0; i < 11; i++) {
        struct { u8 _p[0x30]; u16 f30; } *q = (void *)&D_8006AFCC[i];
        if (q->f30 == 1) {
            if (D_800F1C98[i] != 0xFFFF) {
                func_8003422C(D_800F1C98[i]);
            }
        }
    }
}

void func_800D1134(void) {
    s32 i;
    for (i = 0; i < 11; i++) {
        struct { u8 _p[0x30]; u16 f30; } *q = (void *)&D_8006AFCC[i];
        if (q->f30 == 1) {
            if (i != 0 || *D_80105990 != 1) {
                if (D_800F1C98[i] != 0xFFFF) {
                    func_80034AB0(D_800F1C98[i]);
                }
            }
        }
    }
}

#include "common.h"

extern u8 D_80085428[];
extern void func_800A5E54();

void func_800D11CC(void)
{
  D_80085428[0xF] = 0;
  D_80085428[0xE] = 0;
  ((struct 
  {
    u8 _p[0xA];
    s16 v;
  } *) D_80085428)->v = 0;
  func_80012200(func_800A5E54);
  D_80085428[0xBE8] = 1;
  return 1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1214);

void func_800D13EC(void *arg0) {
    extern s32 D_8008F780[];
    M2C_FIELD(arg0, s8 *, 0xF) = 3;
    (*D_8008F780) = 1;
}

extern s32 D_8008ED80[], D_800F1CC4[], D_800F1C78[];
extern s32 D_80103ED0[];
extern u8 D_800F1AA0[], D_800EFF58[];
extern s32 D_800F1C2C[], D_800F1C40[], D_800F1C5C[], D_800F1C7C[];
extern u16 D_800ED886[];
extern s32 func_800202A4(s32), func_800D1558(void);
s32 func_800D1404(void) {
    s32 r = func_800202A4(100) + *D_8008ED80;
    u8 *f;
    D_80103ED0[0] = 0x10;
    D_80103ED0[1] = (s32)D_800F1AA0;
    D_80103ED0[2] = D_800F1C2C[r % 5];
    D_80103ED0[3] = D_800F1C40[r % 7];
    *D_800ED886 = 0;
    D_80103ED0[4] = D_800F1C5C[r % 7];
    *D_800F1CC4 = r;
    D_80103ED0[5] = *D_800F1C78;
    f = D_800EFF58;
    *(s32 *)(f + 0x1C) = 1;
    *(s32 *)(f + 0x344) = 0;
    *(s32 *)(f + 0x114) = 0;
    *(s32 *)(f + 0x28C) = 0;
    *(s32 *)(f + 0x32C) = 0;
    *(s32 *)(f + 0x330) = 4;
    D_80103ED0[6] = D_800F1C7C[r % 7];
    return func_800D1558();
}
