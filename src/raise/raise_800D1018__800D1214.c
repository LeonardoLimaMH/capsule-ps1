#include "common.h"

extern u16 D_8006AFCC[];
extern u16 D_800F1C98[];
extern s16 D_80105990[];
extern void func_8003422C();
extern void func_80034AB0();


extern u8 D_80085428[];
extern void func_800A5E54();

void func_800D1214(u8 *arg0) {
    extern u16 D_8006AF80[];
    extern u8 D_8008EE6A[];
    extern s32 D_8008F7D0[];
    extern s16 D_800F0710[];
    extern u8 *D_80103EC8[];
    extern u8 *func_8001ADF8();
    extern s32 func_800D1404(void);
    extern int func_8001AD74();
    extern int func_80020EB4();
    extern void func_8001E310();
    extern void func_800339D8();
    extern void func_80033974();
    extern void func_80013668();
    extern void func_800267F0();
    extern void func_8001FD74();
    s32 i;

    switch (arg0[0xE]) {
    case 0:
        *D_80103EC8 = func_8001ADF8(1, 0, 2, 1);
        arg0[0xBE8] = 1;
        arg0[0xE]++;
        func_800D1404();
        break;
    case 1:
        arg0[0xF] = 1;
        *(s32 *)(*D_80103EC8 + 0x38) = 4;
        arg0[0xE]++;
        break;
    case 2:
        if (*D_8008F7D0 == 0) {
            arg0[0xF] = 2;
            arg0[0xE]++;
        }
        break;
    case 3:
        if (arg0[0xF] == 3) {
            func_8001AD74(4);
            arg0[0xE]++;
        }
        break;
    case 4:
        if (func_80020EB4() != 0 && *D_8008F7D0 == 0) {
            arg0[0xBE8] = 0;
            func_8001E310();
            *D_800F0710 = 0;
            if (*D_8006AF80 != 0xFFFF) {
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
            func_800339D8(-0x80, 0);
            func_80033974(0x8000);
            *D_8008EE6A = 0;
            func_80013668();
            func_800267F0();
            func_8001FD74();
        }
        break;
    default:
        break;
    }
}

extern s32 D_8008ED80[], D_800F1CC4[], D_800F1C78[];
extern s32 D_80103ED0[];
extern u8 D_800F1AA0[], D_800EFF58[];
extern s32 D_800F1C2C[], D_800F1C40[], D_800F1C5C[], D_800F1C7C[];
extern u16 D_800ED886[];
extern s32 func_800202A4(s32), func_800D1558(void);

