/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-u16: 0x8009162A 1 0,1,2,3 */
/* rand-u16: 0x800917D2 1 0,1,2,3 */
/* rand-u16: 0x8009197A 1 0,1,2,3 */
/* rand-u16: 0x80091B22 1 0,1,2,3 */
/* rand-ptr: 0x800F19C8 40 */
/* rand-ptr: 0x80091790 2 */
/* rand-ptr: 0x80091938 2 */
/* rand-ptr: 0x80091AE0 2 */
/* rand-ptr: 0x80091C88 2 */
/* rand-ptr: 0x800FDE0C 1 */
#include "common.h"

extern u8 D_80091618[], D_800EE710[], D_800ED8F0[], D_800F1EE4[];
extern s32 D_800F1988[];
extern u8 *D_800F19C8[];
extern u8 *D_800FDE08[];
extern s32 D_800FAE10[];
extern u16 D_8006AF80;
extern s16 D_80078C20;
extern s32 func_80019F30(s32, s32), func_800A8CB4(s32);
extern void func_80012A20(s32, s32, s32, s32), func_800C60E0(s32, s32), func_800C62A4(s32, s32);
extern void func_800C5EFC(s32, s32), func_800B9F50(s32);
extern void func_800BA190(void), func_800BA1B4(void);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define W(o, x) (*(s32 *)((o) + (x)))

s32 func_800E2110(void) {
    s32 i, b;
    u8 *t, *o;
    s16 c;
    for (i = 0; i < *(u16 *)(E(D_8006AF80) + 0x12); i++) {
        u16 n = *(u16 *)(E(D_8006AF80) + 0x14 + i * 2);
        s32 *s0 = (s32 *)(D_800EE710 + n * 32);
        s32 s3 = s0[3];
        s32 v;
        u8 *o2;
        func_80012A20(func_80019F30(s0[0] | 0x20000, D_800F1988[n]), 3, (s16)(0x340 + i * 0x20), 0x80);
        v = func_80019F30(s0[0] | 0x60000, s3);
        o = D_800F19C8[D_8006AF80 * 3 + i];
        W(o, 0x18) = v;
        c = D_80078C20;
        *(s16 *)(o + 0x28) = i * 32;
        W(o, 0x7C) = s3;
        b = (c & 1) << 8;
        W(o, 0x34) |= 0x200;
        W(o, 0x34) = (W(o, 0x34) & ~0x100) | b;
        o2 = D_800F19C8[D_8006AF80 * 3 + 0x12 + i];
        W(o2, 0x34) = ((W(o2, 0x34) | 0x200) & ~0x100) | b;
        s3 = s0[3] + 1;
        v = func_80019F30(s0[0] | 0x60000, s3);
        *(s16 *)(o2 + 0x28) = i * 32;
        W(o2, 0x7C) = s3;
        W(o2, 0x18) = v;
    }
    t = (u8 *)func_80019F30(func_800A8CB4(*(u16 *)E(D_8006AF80)) | 0x10000,
                            *(s32 *)(D_800ED8F0 + *(u16 *)E(D_8006AF80) * 32 + 4));
    for (i = 0; i < 14; i++)
        func_80012A20(*(s32 *)(t + 0xC + i * 4), 3, *(s16 *)(D_800F1EE4 + D_80078C20 * 56 + i * 4),
                      *(s16 *)(D_800F1EE4 + D_80078C20 * 56 + i * 4 + 2));
    c = D_80078C20;
    o = *(u8 **)(E(D_8006AF80) + 0x178);
    *(void **)(o + 0x10) = func_800BA190;
    *(s16 *)(o + 0x2A) = c << 7;
    b = (c & 1) << 8;
    W(o, 0x34) = (W(o, 0x34) & ~0x100) | b;
    D_800FDE08[0] = D_800FDE08[1];
    W(D_800FDE08[1], 0x34) = (W(D_800FDE08[1], 0x34) & ~0x80) | ((c & 1) << 7);
    W(D_800FDE08[0], 0x38) |= 0x80;
    o = *(u8 **)(E(D_8006AF80) + 0x17C);
    *(void **)(o + 0x10) = func_800BA1B4;
    W(o, 0x34) = (W(o, 0x34) & ~0x100) | b;
    D_800FAE10[0] = D_800FAE10[1];
    func_800C60E0(1, 1);
    func_800C62A4(1, 1);
    func_800C5EFC(1, 1);
    func_800B9F50(1);
    return 1;
}
