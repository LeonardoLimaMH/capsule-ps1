#include "common.h"

typedef struct {
    u8 pad[4];
    s16 unk4;
    s16 unk6;
    s16 unk8;
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u16 unk10;
} Struct_800AF000;


extern u16 D_8008EE44[];
extern void (*D_800AEFDC[])(void);



extern s32 D_800B3AD0[];
extern s32 func_80019F30(s32, s32);
extern void func_80012A20(s32, s32, s32, s32);
extern void func_80032DB0(s32, s32, s32, s32, s32, void (*)(void));
extern void func_8009A160();
extern void func_8001ADCC(s32);
extern s32 func_80012508(void);





extern char D_800AEFB4[], D_800AEFC8[], D_800AEFD8[];
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);


void func_8009AA0C(void) {
    extern u16 D_8008EE48[];
    extern s32 D_800B3ADC[];
    extern s32 D_800B3B20[];
    extern s32 D_800B3B24[];
    extern void func_8009BDD8(s32, s32, s32);
    extern void func_80012578(void);
    extern int func_80012508();

    if (*D_800B3B20 != 0) {
        func_8009BDD8(0, 0xA0, 5);
    }
    switch (*D_8008EE48) {
    case 0:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80012578();
        break;
    case 1:
        if (*D_800B3B20 < 10) return;
        *D_800B3ADC = 0x90;
        func_80012578();
        break;
    case 2:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0x70;
        func_80012578();
        break;
    case 3:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        *D_800B3ADC = 0x30;
        func_80012578();
        break;
    case 4:
        *D_800B3ADC = *D_800B3ADC - 1;
        if (*D_800B3ADC > 0) return;
        func_80012508();
        *D_800B3B24 = 0;
        break;
    }
}





