#include "common.h"

/* reinicia o estado da tela de criação */
extern u8 D_80100F38[], D_800F2D30[], D_800F2D98[];
extern u16 D_800F1A58[];
extern s32 D_800ED8DC, D_80078C34, D_800EF360, D_800F1924, D_800EEA8C, D_800EE9B0;
extern s32 D_800EE9B8[], D_800FDE08[], D_800FAE10[], D_800EFF4C[];
extern s16 D_800F2D9E, D_800EEAA4, D_800F0708, D_800ED88C, D_800ED88E, D_800EFA50, D_800EEA88;
extern s16 D_80078C20, D_80078C22, D_800EEB90, D_800F1EDC, D_800F1EDE, D_800F1EE0;
extern void func_8009BA00(void), func_800D8FB0(s32), func_800ABF7C(s32), func_800BE1F0(void), func_8002835C(void);
extern void func_800A95D4(void), func_800246E4(void), SetGeomOffset(s32, s32), func_80048A2C(s32);
extern void func_800D0C14(void), func_800C083C(void), func_800DEAE8(void), func_80027A88(void), func_800CC34C(void);
extern void func_800BF154(void), func_800B1150(void), func_8009DFF8(void), func_800E1780(void);

void func_800A6ED4(void) {
    s32 i;
    func_8009BA00();
    for (i = 0; i < 6; i++) {
        func_800D8FB0((u16)i);
        *(u16 *)(D_80100F38 + i * 0x79C + 0x386) = 0;
        D_800F1A58[i] = 0;
    }
    D_800ED8DC = 1;
    func_800ABF7C(0);
    func_800BE1F0();
    D_80078C34 = -1;
    D_800EF360 = -1;
    func_8002835C();
    D_800F2D9E = 0;
    for (i = 0x66; i >= 0; i--) D_800F2D30[i] = 0xFF;
    for (i = 5; i >= 0; i--) D_800F2D98[i] = 0xFF;
    func_800A95D4();
    for (i = 0; i < 2; i++) {
        D_800EE9B8[i] = 0;
        D_800FDE08[i] = 0;
        D_800FAE10[i] = 0;
        D_800EFF4C[i] = 0;
    }
    func_800246E4();
    SetGeomOffset(0xA0, 0x78);
    func_80048A2C(0x200);
    D_800F1924 = -1;
    D_800EEAA4 = 0;
    D_800F0708 = 0;
    D_800ED88C = 0;
    D_800ED88E = 0;
    D_800EFA50 = 0;
    D_800EEA88 = 0;
    D_800EEA8C = 0;
    D_80078C20 = 0;
    D_80078C22 = 0;
    D_800EEB90 = 1;
    D_800F1EDC = 8;
    D_800F1EDE = 8;
    D_800F1EE0 = 0;
    func_800D0C14();
    func_800C083C();
    func_800DEAE8();
    func_80027A88();
    func_800CC34C();
    func_800BF154();
    func_800B1150();
    func_8009DFF8();
    func_800E1780();
    D_800EE9B0 = 0;
}
