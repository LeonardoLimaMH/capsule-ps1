/* stub-ret: mixed */
/* max-insns: 400000 */
/* rand-u16: 0x80105990 1 0,1,2 */
/* rand-u16: 0x80105992 1 0,1 */
/* rand-u16: 0x80105994 1 0,1 */
/* rand-u16: 0x80105996 1 0,1,2 */
/* rand-u16: 0x80105998 1 0,1 */
/* rand-u16: 0x8010599A 1 0,1 */
/* rand-u16: 0x800F1FAC 1 0,1,2,3 */
/* rand-u16: 0x80105988 2 0,1,2,5,100,65535 */
#include "common.h"

/* anima e desenha a grade 8x8 de ladrilhos do fundo (G = D_80105990): desloca os vértices
 * conforme o modo e desenha as casas "pares" cujo tamanho bate com D_80105988/8A.
 * A projeção usa a GTE inline como o original (não emulada pelo difftest). */
extern u8 D_80105990[], D_8008ED68[], D_80091558[];
extern u16 D_800F1F88[], D_800F1F94[], D_800F1FA0[];
extern u16 D_80105980[], D_80105984[];
#define D_80105982 D_80105980[1]
#define D_80105986 D_80105984[1]
extern s16 D_80105988, D_8010598A, D_800F1FAC;
extern u16 D_8006AFFC;
extern s32 rand(void);
extern void PushMatrix(void), PopMatrix(void), func_8002D48C(void *);
extern void SetPolyFT4(u8 *), SetShadeTex(u8 *, s32), SetSemiTrans(u8 *, s32), AddPrim(void *, void *);

#define G16(o) (*(u16 *)(D_80105990 + (o)))
#define GS16(o) (*(s16 *)(D_80105990 + (o)))
#define WORK (*(u8 **)D_8008ED68)
/* vértice k da casa (i, j): SVECTOR em G+0x10 */
#define VX(i, j, k) (*(s16 *)(D_80105990 + 0x10 + (i) * 256 + (j) * 32 + (k) * 8))
#define VY(i, j, k) (*(s16 *)(D_80105990 + 0x12 + (i) * 256 + (j) * 32 + (k) * 8))
/* volta a coordenada para o intervalo [-800, 800) */
#define WRAP(x) ((s16)(x) + 1600) % 1600 - 800

typedef struct {
    s32 sxy[4];
    s32 otz;
} L;

s32 func_800E4AD0(void) {
    L l;
    s32 s7, s6, x, y;
    s16 i, j, k, dir;
    s7 = D_8008ED68[0x103] < 2 ? 5 : D_8008ED68[0x103] * 5;
    s6 = D_8008ED68[0x103] < 2 ? 12 : D_8008ED68[0x103] * 12;
    if (GS16(0xA) == 0) {
        s16 m;
        D_800F1FAC = G16(0);
        m = G16(0);
        GS16(0xA) = 1;
        D_80105980[0] = D_800F1F88[m * 2];
        D_80105982 = D_800F1F88[m * 2 + 1];
        D_80105984[0] = D_800F1F94[m * 2];
        D_80105986 = D_800F1F94[m * 2 + 1];
        D_80105988 = D_800F1FA0[m * 2];
        D_8010598A = D_800F1FA0[m * 2 + 1];
    }
    if (GS16(2) == 0) return 0;
    if (D_8008ED68[0x99A] == 0 && GS16(4) == 1) {
        if (GS16(6) == 0) G16(2) = 0;
        else if (GS16(6) > 0) G16(6) -= 1;
    }
    dir = GS16(8) == 0 ? 1 : -1;
    PushMatrix();
    func_8002D48C(D_80091558);
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            u8 *q, *w, *next, *t;
            if ((i + j) & 1) continue;
            for (k = 0; k < 4; k++) {
                if (D_8008ED68[0x99A] != 0) continue;
                if (D_800F1FAC == 0) {
                    x = (u16)VX(i, j, k) - s7 * dir;
                    if (GS16(4) != 1) x = WRAP(x);
                    y = VY(i, j, k);
                    VX(i, j, k) = x;
                    if (rand() & 1) y += s6;
                    else y += s6 * 2;
                } else if (D_800F1FAC == 2) {
                    x = (u16)VX(i, j, k) - s7 * dir;
                    if (GS16(4) != 1) x = WRAP(x);
                    y = (u16)VY(i, j, k);
                    VX(i, j, k) = x;
                    y += s6;
                } else {
                    if (D_8008ED68[0x99A] == 0) {
                        x = (u16)VX(i, j, k);
                        if (i & 1) x += (u32)s7 >> 1;
                        else x -= (u32)s7 >> 1;
                        if (GS16(4) != 1) x = WRAP(x);
                        VX(i, j, k) = x;
                    }
                    y = (u16)VY(i, j, k) + s6 / 4;
                }
                if (D_8008ED68[0x99A] == 0 && GS16(4) != 1) y = WRAP(y);
                VY(i, j, k) = y;
            }
            if (VX(i, j, 1) - VX(i, j, 0) != D_80105988) continue;
            if (VX(i, j, 3) - VX(i, j, 2) != VX(i, j, 1) - VX(i, j, 0)) continue;
            if (D_800F1FAC != 0) {
                if (VY(i, j, 2) - VY(i, j, 0) != D_8010598A) continue;
                if (VY(i, j, 3) - VY(i, j, 1) != VY(i, j, 2) - VY(i, j, 0)) continue;
            }
            q = (u8 *)&VX(i, j, 0);
            __asm__ volatile(
                "lwc2 $0, 0(%0)\n lwc2 $1, 4(%0)\n lwc2 $2, 8(%0)\n lwc2 $3, 12(%0)\n"
                "lwc2 $4, 16(%0)\n lwc2 $5, 20(%0)\n nop\n nop\n .word 0x4A280030\n nop\n nop\n"
                ".word 0x4B58002D\n swc2 $12, 0(%1)\n swc2 $13, 4(%1)\n swc2 $14, 8(%1)\n"
                "lwc2 $0, 24(%0)\n lwc2 $1, 28(%0)\n nop\n nop\n .word 0x4A180001\n swc2 $14, 12(%1)\n"
                "nop\n nop\n .word 0x4B68002E\n swc2 $7, 16(%1)\n"
                :: "r"(q), "r"(&l) : "memory");
            w = WORK;
            q = *(u8 **)(w + 0x1090);
            next = 0;
            if (q != 0 && !(w + 0x4594 < q + 0x28)) next = q + 0x28;
            *(u8 **)(w + 0x1090) = next;
            SetPolyFT4(q);
            *(u16 *)(q + 0xE) = G16(0xC);
            *(u16 *)(q + 0x16) = G16(0xE);
            SetShadeTex(q, 0);
            SetSemiTrans(q, 0);
            q[4] = q[5] = q[6] = 0x80;
            t = D_80105990 + 0x810 + i * 8 + j;
            q[0xC] = (u8)D_80105980[0] + *t * 8;
            q[0xD] = (u8)D_80105982;
            q[0x14] = (u8)D_80105984[0] + ((u8)D_80105980[0] + *t * 8);
            q[0x15] = (u8)D_80105982;
            q[0x1C] = (u8)D_80105980[0] + *t * 8;
            q[0x1D] = (u8)D_80105982 + (u8)D_80105986;
            q[0x24] = (u8)D_80105984[0] + ((u8)D_80105980[0] + *t * 8);
            q[0x25] = (u8)D_80105982 + (u8)D_80105986;
            *(u16 *)(q + 0x8) = ((u16 *)l.sxy)[0];
            *(u16 *)(q + 0xA) = ((u16 *)l.sxy)[1];
            *(u16 *)(q + 0x10) = ((u16 *)l.sxy)[2];
            *(u16 *)(q + 0x12) = ((u16 *)l.sxy)[3];
            *(u16 *)(q + 0x18) = ((u16 *)l.sxy)[4];
            *(u16 *)(q + 0x1A) = ((u16 *)l.sxy)[5];
            *(u16 *)(q + 0x20) = ((u16 *)l.sxy)[6];
            *(u16 *)(q + 0x22) = ((u16 *)l.sxy)[7];
            AddPrim(WORK + l.otz * 4 + 0x70, q);
        }
    }
    PopMatrix();
    if (GS16(2) != 0) return 0x800F0000; /* %hi(D_800F1FAC) no delay slot */
    if (D_800F1FAC < 2) {
        if (D_800F1FAC >= 0) D_8006AFFC = 0;
    }
    *(u16 *)(D_80105990 + 0xA) = 0;
    return 0x80100000;
}
