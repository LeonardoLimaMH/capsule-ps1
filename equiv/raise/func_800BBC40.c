/* rand-u16: 0x800F0174 1 0,1,2,3 */
/* rand-u16: 0x800F0176 1 0 */
/* rand-u16: 0x800F0178 1 0,1,2,3 */
/* rand-u16: 0x800F017A 1 0 */
/* rand-u16: 0x800F017C 1 0,1,2,3 */
/* rand-u16: 0x800F017E 1 0 */
/* rand-u16: 0x800F0180 1 0,1,2,3 */
/* rand-u16: 0x800F0182 1 0 */
/* rand-u16: 0x800F0184 1 0,1,2,3 */
/* rand-u16: 0x800F0186 1 0 */
/* rand-u16: 0x800F0188 1 0,1,2,3 */
/* rand-u16: 0x800F018A 1 0 */
/* rand-u16: 0x800F018C 1 0,1,2,3 */
/* rand-u16: 0x800F018E 1 0 */
/* rand-u16: 0x800F0190 1 0,1,2,3 */
/* rand-u16: 0x800F0192 1 0 */
/* rand-u16: 0x800F0194 1 0,1,2,3 */
/* rand-u16: 0x800F0196 1 0 */
/* rand-u16: 0x800F0198 1 0,1,2,3 */
/* rand-u16: 0x800F019A 1 0 */
/* rand-u16: 0x800F019C 1 0,1,2,3 */
/* rand-u16: 0x800F019E 1 0 */
/* rand-u16: 0x800F01A0 1 0,1,2,3 */
/* rand-u16: 0x800F01A2 1 0 */
/* rand-u16: 0x800F01A4 1 0,1,2,3 */
/* rand-u16: 0x800F01A6 1 0 */
/* rand-u16: 0x800F01A8 1 0,1,2,3 */
/* rand-u16: 0x800F01AA 1 0 */
/* rand-ptr: 0x800F0070 1 */
/* rand-ptr: 0x800F0078 14 */
/* rand-ptr: 0x800F01E8 60 */
/* rand-ptr: 0x800F0264 6 */
/* rand-ptr: 0x800F0550 1 */
/* rand-ptr: 0x800EFF6C 1 */
#include "common.h"

/* desloca os objetos do menu 8 pixels para a direita (a0 = 1) ou para a esquerda (a0 = 2) */
extern u8 D_800EFF58[];
extern s16 D_800ED88C;

#define FP(x) (*(u8 **)(D_800EFF58 + (x)))
#define F32(x) (*(s32 *)(D_800EFF58 + (x)))
#define X(o) (*(s16 *)((o) + 0x46))
#define Y(o) (*(s16 *)((o) + 0x4A))

s32 func_800BBC40(s32 a0) {
    s32 d, dy, i, j;
    if (a0 == 1) {
        d = 8;
        dy = -3;
        if (D_800ED88C == 1) Y(FP(0x14)) += 2;
    } else if (a0 == 2) {
        d = -8;
        dy = 3;
        if (D_800ED88C == 1) Y(FP(0x14)) -= 2;
    } else {
        return a0 < 2 ? 1 : 2;
    }
    X(FP(0x118)) += d;
    for (i = 0; i < 14; i++) {
        X(FP(0x120 + i * 4)) += d;
        if (F32(0x21C + i * 4) != -1) {
            X(FP(0x290 + i * 4)) += d;
            for (j = 0; j < F32(0x21C + i * 4); j++) X(FP(0x2A0 + i * 12 + j * 4)) += d;
        }
    }
    for (i = 0; i < 2; i++) X(FP(0x31C + i * 4)) += d;
    Y(FP(0x30C)) += dy;
    X(FP(0x314)) += d;
    return Y(FP(0x5F8)) += dy;
}
