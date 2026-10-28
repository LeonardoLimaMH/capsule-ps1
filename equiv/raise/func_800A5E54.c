/* stub-ret: mixed */
/* max-insns: 200000 */
/* rand-u16: 0x8008EE44 1 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,70 */
/* rand-u32-strided: 0x800F2D18 1 4 0xFFFFFFF6,0xFFFFFFF7,0xFFFFFFF8,0xFFFFFFF9,0xFFFFFFFA,0xFFFFFFFB,0xFFFFFFFC,0xFFFFFFFD,0xFFFFFFFE,4,0 */
/* rand-u16: 0x8006AF80 1 0,1,2,3,7,0xFFFF */
/* rand-u16: 0x800F1ED2 1 0,1,2 */
/* rand-mem: 0x800859F3 1 4 */
/* rand-mem: 0x80085429 1 2 */
/* rand-mem: 0x80086010 1 2 */
/* rand-mem: 0x8008F702 1 2 */
/* rand-u16: 0x8006AFFC 6 0,1 */
/* rand-u16: 0x80091628 1 0,0xFFFF */
/* rand-u16: 0x800917D0 1 0,0xFFFF */
/* rand-u16: 0x80091978 1 0,0xFFFF */
/* rand-u16: 0x80091B20 1 0,0xFFFF */
/* rand-u16: 0x80091CC8 1 0,0xFFFF */
/* rand-u16: 0x80091E70 1 0,0xFFFF */
/* rand-u32-strided: 0x80078C3C 3 4 0,1 */
/* rand-u32-strided: 0x8006AF84 1 4 0,0x2A30 */
/* rand-u16: 0x800EEA88 1 0,1 */
#include "common.h"

/* laço principal da tela de criação: máquina de estados em D_8008ED68+0xDC (D_8008EE44),
 * seguida das tarefas de fundo de cada quadro */
extern u8 D_8008ED68[], D_80091618[], D_80085428[], D_8006AFCC[], D_800859F3;
extern u16 D_8008EE44, D_8006AF80;
extern s16 D_800EEA88, D_800F1ED2;
extern s32 D_800F2D18, D_80078C44, D_80078C38, D_80078C34, D_80078C3C, D_800EF2D8, D_800ED8DC, D_8006AF84;
extern s32 func_800A6CAC(), func_800A6BDC(), func_80012508(), func_800A6CE8(), func_80019654(), func_800D1134();
extern s32 func_80025FC0(), func_800BCB58(), func_800A09E4(), func_800A0F4C(), func_800A11B8();
extern s32 func_800A16E8(), func_800282A0(), func_800A0A10(), func_800A0A30(), func_800A0A5C(), func_800A0A7C();
extern s32 func_8009DDB4(), func_8009DDDC(), func_8009DED0(), func_8009DEF0(), func_8009E040(), func_8009E048();
extern s32 func_8009E068(), func_8009E1C4(), func_8009E12C(), func_8009E21C(), func_8009E568(), func_8009E598();
extern s32 func_8009E72C(), func_8009E74C(), func_8009ED34(), func_800A1778(), func_800A18EC(), func_80027EAC();
extern s32 func_800A1FDC(), func_800A2A88(), func_800A52C4(), func_800A52F0(), func_800A5378(), func_800A53A4();
extern s32 func_800AA0E4(), func_800AA45C(), func_800AA494(), func_800AA60C(), func_800AAA44(), func_800E1B48();
extern s32 func_800E1DAC(), func_800D4858(), func_800E1C14(), func_800A9D6C(), func_800E1E50(), func_800B1260();
extern s32 func_800D4860(), func_800A1F44(), func_800D46A4(), func_800BF294(), func_800BF414();
extern s32 func_800E2558(), func_800E2714(), func_800DEB28(), func_800DEAE8(), func_800DEB38(), func_800ABF44();
extern s32 func_800A91A0(), func_800A9490(), func_800A95AC(), func_800A6DBC(), func_800A6DDC(), func_800A6E14();
extern s32 func_8002CC74(), func_8002CD50(), func_80015A74(), func_800D1214(), func_80034AB0();
extern s32 func_800D13EC(), func_800152C8(), func_800C0658(), func_800E47D8(), func_8009CE54(), func_8009C5C0();
extern s32 func_8009D274(), func_800D1BA8(), func_800282E0();

extern s32 rand_() __asm__("rand"); /* rand sem protótipo, para receber as sobras de a0..a3 */
#define E(i) (D_80091618 + (i) * 0x1A8)
#define STATE D_8008EE44
/* o original chega a cada chamada com as sobras de a0..a3 (a0 = &D_8008ED68 ou o último
 * argumento passado): g0..g3 reproduzem esses registradores */
#define C(f) f(g0, g1, g2, g3)
#define X16(o) (*(u16 *)(D_8006AFCC + (o)))

/* atualiza o painel do lado s conforme a criatura dele está fora de combate (+0x1A0) */
#define REFRESH(s)     do {         g0 = (s);         g1 = *(s16 *)(E((u16)C(func_800B1260)) + 0x1A0) == 1 ? 1 : 0;         g0 = (s);         g2 = 0;         C(func_800A1F44);     } while (0)

/* a0..a3 de entrada: só a1..a3 sobram nas chamadas (a função não usa argumentos) */
s32 func_800A5E54(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 r, i, any;
    s32 g0 = (s32)D_8008ED68, g1 = a1, g2 = a2, g3 = a3;
    if (D_8008ED68[0x103] < 2) *(s32 *)(D_8008ED68 + 0x1C) += 1;
    else *(s32 *)(D_8008ED68 + 0x1C) += D_8008ED68[0x103];
    if (D_8008ED68[0x99A] == 1 && D_800EEA88 == 0) goto tail;
    switch (STATE) {
    case 0:
        C(func_800A6CAC);
        C(func_800A6BDC);
        goto next;
    case 1:
        C(func_800A6CAC);
        break;
    case 2:
        C(func_800A6CAC);
        C(func_800A6CE8);
        goto next;
    case 3:
        g0 = 0xFFFF;
        C(func_80027EAC);
        goto next;
    case 4:
        if (C(func_80019654) == 0) break;
        C(func_800D1134);
        D_80078C44 = 0;
        if (D_8006AF80 == 0xFFFF || D_8006AF80 == 7) {
            STATE = 0x2C;
            D_8006AF80 = 0;
            D_800EF2D8 = 0;
        } else if (*(u16 *)(E(D_8006AF80) + 0x10) != 0xFFFF) {
            STATE = 6;
        } else {
            any = 0;
            for (i = 0; i < 6; i++) {
                if (*(u16 *)(E(i) + 0x10) != 0xFFFF) {
                    any = 1;
                    break;
                }
            }
            STATE = any ? 6 : 0x2C;
        }
        g0 = 0; g1 = 8; g2 = 8; g3 = 1;
        C(func_80025FC0);
        C(func_800BCB58);
        break;
    case 5:
        C(func_800A09E4);
        STATE = 0xB;
        break;
    case 6:
        if (C(func_800A0F4C) == 0) goto next;
        STATE = 8;
        break;
    case 8:
        C(func_800A11B8);
        goto next;
    case 9:
        C(func_800A16E8);
        goto next;
    case 10:
        if (C(func_80019654) == 0) break;
        g0 = D_80078C38;
            C(func_800282A0);
        C(func_800D1134);
        STATE = 0x2C;
        D_80078C44 = 0;
        break;
    case 11: r = C(func_800A0A10); goto store;
    case 12:
        D_800F2D18 = r = C(func_800A0A30);
        if (r == -1) goto next;
        if (r == -2) STATE = 0xE;
        break;
    case 13:
        D_800F2D18 = r = C(func_800A0A5C);
        if (r == -1) STATE = 0xF;
        break;
    case 14:
        D_800F2D18 = r = C(func_800A0A7C);
        if (r == -1) STATE = 0x2F;
        break;
    case 15: C(func_8009DDB4); goto next;
    case 16: r = C(func_8009DDDC); goto store;
    case 17: r = C(func_8009DED0); goto store;
    case 18: C(func_8009DEF0); goto next;
    case 19: C(func_8009E040); goto next;
    case 20:
        D_800F2D18 = r = C(func_8009E048);
        if (r == -1) goto next;
        if (r == -2) STATE = 0x16;
        break;
    case 21:
        C(func_8009E068);
        STATE = 0x17;
        break;
    case 22:
        D_800F2D18 = r = C(func_8009E1C4);
        if (r == -1) STATE = 0xB;
        break;
    case 23:
        D_800F2D18 = r = C(func_8009E12C);
        if (r == 1) goto next;
        break;
    case 24:
        D_800F2D18 = r = C(func_8009E21C);
        if (r == -1) STATE = 0x1C;
        break;
    case 28: C(func_8009E568); goto next;
    case 29: r = C(func_8009E598); goto store;
    case 30:
        D_800F2D18 = r = C(func_8009E72C);
        if (r == -1) goto next;
        if (r == -2) STATE = 0x20;
        break;
    case 31:
        D_800F2D18 = r = C(func_8009E74C);
        if (r == -1) STATE = 0x21;
        break;
    case 32:
        D_800F2D18 = r = C(func_8009ED34);
        if (r == -1) STATE = 0xF;
        break;
    case 33:
        if (C(func_800A1778) == 0) goto next;
        STATE = 0x23;
        break;
    case 35: C(func_800A18EC); goto next;
    case 36:
        g0 = *(u16 *)E(D_8006AF80);
        C(func_80027EAC);
        goto next;
    case 37:
        if (C(func_80019654) == 0) break;
        g0 = D_80078C38;
        if (D_80078C34 != D_80078C38) C(func_800282A0);
        goto done;
    case 38: r = C(func_800A1FDC); goto store;
    case 39: C(func_800A2A88); goto next;
    case 40: C(func_800A52C4); goto next;
    case 41: r = C(func_800A52F0); goto store;
    case 42: r = C(func_800A5378); goto store;
    case 43:
        D_800F2D18 = r = C(func_800A53A4);
        if (r != -1) break;
        D_800ED8DC = 0;
        goto next;
    case 44: C(func_800AA0E4); goto next;
    case 45: r = C(func_800AA45C); goto store;
    case 46: r = C(func_800AA494); goto store;
    case 47: r = C(func_800AA60C); goto store;
    case 48:
        D_800F2D18 = r = C(func_800AAA44);
        if (r == -1) STATE = 0x3D;
        else if ((u32)(r + 10) < 9) goto next;
        break;
    case 49:
        switch (D_800F2D18) {
        case -10:
        case -7:
            if ((g0 = 1, C(func_800D4858)) == 0) goto next;
            STATE = 0x33;
            break;
        case -9:
            if ((g0 = 0, C(func_800D4858)) == 0) goto next;
            STATE = 0x33;
            break;
        case -8:
        case -6:
            STATE = 0x33;
            break;
        case -5:
            STATE = 5;
            break;
        case -4:
            C(func_800DEB38);
            STATE = 0x34;
            break;
        case -3:
            if (C(func_800E1B48) == 0) goto next;
            STATE = 0x33;
            break;
        case -2:
            if (C(func_800E1DAC) == 0) goto next;
            STATE = 0x33;
            break;
        }
        break;
    case 51:
        switch (D_800F2D18) {
        case -10:
        case -7:
            if ((g0 = 1, C(func_800D4860)) == 0) break;
            STATE = 0x30;
            for (i = 1; i >= 0; i--) REFRESH(i);
            break;
        case -9:
            if ((g0 = 0, C(func_800D4860)) == 0) break;
            STATE = 0x30;
            REFRESH(1);
            break;
        case -8:
            if (C(func_800D46A4)) STATE = 0x30;
            break;
        case -6:
            if ((g0 = 0, C(func_800A9D6C))) STATE = 0x30;
            break;
        case -3:
            if (C(func_800E1C14)) STATE = 0x30;
            break;
        case -2:
            if (C(func_800E1E50) == 0) break;
            STATE = 0x30;
            REFRESH(1);
            break;
        }
        break;
    case 52:
        D_800F2D18 = r = C(func_800BF294);
        if (r == 1) goto next;
        if (r == 2) STATE = 0x30;
        break;
    case 53:
        D_800F2D18 = r = C(func_800BF414);
        if (r == 1) goto next;
        if (r == 4) STATE = 0x3C;
        break;
    case 54:
        C(func_800BF414);
        if (C(func_800E2558) == 0) goto next;
        STATE = 0x38;
        break;
    case 55:
        C(func_800BF414);
        break;
    case 56:
        C(func_800BF414);
        if (C(func_800E2714)) goto next;
        break;
    case 57:
        g0 = *(u16 *)E(D_800F1ED2);
        C(func_80027EAC);
        goto next;
    case 58:
        C(func_800BF414);
        if (C(func_80019654) == 0) break;
        goto done;
    case 59:
        goto next;
    case 60:
        if (D_800F2D18 == 4) {
            if (C(func_800DEB28) != 1) goto lost;
            g0 = D_80078C38;
            C(func_800282A0);
            C(func_800DEAE8);
            STATE = 0x30;
        } else {
            D_800F2D18 = r = C(func_800BF414);
            if (r != 3) break;
            if (C(func_800DEB28) != 1) goto lost;
            g0 = D_80078C38;
            C(func_800282A0);
            STATE = 0x30;
            C(func_800DEAE8);
        }
        break;
    lost:
        C(func_800DEB38);
        STATE = 0x34;
        break;
    case 61: C(func_800ABF44); goto next;
    case 62: C(func_800A91A0); goto next;
    case 63: r = C(func_800A9490); goto store;
    case 64: C(func_800A95AC); goto next;
    case 65: C(func_800A6DBC); goto next;
    case 66:
        D_800F2D18 = r = C(func_800A6DDC);
        if (r) C(func_800A6E14);
        break;
    }
    goto bg;
store:
    D_800F2D18 = r;
    if (r != -1) goto bg;
next:
    C(func_80012508);
    goto bg;
done:
    C(func_800D1134);
    C(func_80012508);
    D_80078C44 = 0;
bg:
    C(func_8002CC74);
    C(func_8002CD50);
    C(rand_);
    if (D_80085428[1] != 0 && STATE >= 3) {
        C(func_80015A74);
        g0 = (s32)D_80085428;
        C(func_800D1214);
        if (*(s32 *)(D_8008ED68 + 0x88) & 0x800) {
            g0 = 0x48;
            C(func_80034AB0);
            g0 = (s32)D_80085428;
            C(func_800D13EC);
        } else if (D_8006AF84 == 0x2A30) {
            g0 = (s32)D_80085428;
            C(func_800D13EC);
        }
    }
tail:
    if ((u16)(STATE - 3) < 0x40 && (D_80085428[1] == 0 || D_80085428[0xBE8] != 0)) C(func_800152C8);
    if ((u16)(STATE - 0xF) < 0x2F) C(func_800C0658);
    if (D_8006AF80 != 0xFFFF && (u32)(D_800859F3 - 1) >= 2) {
        g0 = (s32)D_8006AFCC;
        if (X16(0x34) == 1 || X16(0x30) == 1) C(func_800E47D8);
        if (X16(0x3C) == 1) C(func_8009CE54);
        if (X16(0x3E) == 1) C(func_8009C5C0);
        if (X16(0x3A) == 1) C(func_8009D274);
    }
    if (C(func_800D1BA8) != 0) return 0x80080000;
    if (D_80078C44 != 0) return 0x80080000;
    if (D_80078C3C != 1) return 1;
    return C(func_800282E0);
}
