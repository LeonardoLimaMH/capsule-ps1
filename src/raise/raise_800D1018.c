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

INCLUDE_ASM("asm/raise/nonmatchings/raise_800D1018", func_800D1404);
