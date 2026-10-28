/* stub-ret: mixed */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-ptr: 0x800F0078 10 */
/* rand-ptr: 0x800F01F8 30 */
/* rand-u16: 0x800F0174 1 0,1,2,3 */
/* rand-u16: 0x800F0176 1 0 */
/* rand-u16: 0x800F01AC 1 0,1,2 */
/* rand-u16: 0x800F01AE 1 0 */
/* rand-u16: 0x800F0178 1 0,1,2,3 */
/* rand-u16: 0x800F017A 1 0 */
/* rand-u16: 0x800F01B0 1 0,1,2 */
/* rand-u16: 0x800F01B2 1 0 */
/* rand-u16: 0x800F017C 1 0,1,2,3 */
/* rand-u16: 0x800F017E 1 0 */
/* rand-u16: 0x800F01B4 1 0,1,2 */
/* rand-u16: 0x800F01B6 1 0 */
/* rand-u16: 0x800F0180 1 0,1,2,3 */
/* rand-u16: 0x800F0182 1 0 */
/* rand-u16: 0x800F01B8 1 0,1,2 */
/* rand-u16: 0x800F01BA 1 0 */
/* rand-u16: 0x800F0184 1 0,1,2,3 */
/* rand-u16: 0x800F0186 1 0 */
/* rand-u16: 0x800F01BC 1 0,1,2 */
/* rand-u16: 0x800F01BE 1 0 */
/* rand-u16: 0x800F0188 1 0,1,2,3 */
/* rand-u16: 0x800F018A 1 0 */
/* rand-u16: 0x800F01C0 1 0,1,2 */
/* rand-u16: 0x800F01C2 1 0 */
/* rand-u16: 0x800F018C 1 0,1,2,3 */
/* rand-u16: 0x800F018E 1 0 */
/* rand-u16: 0x800F01C4 1 0,1,2 */
/* rand-u16: 0x800F01C6 1 0 */
/* rand-u16: 0x800F0190 1 0,1,2,3 */
/* rand-u16: 0x800F0192 1 0 */
/* rand-u16: 0x800F01C8 1 0,1,2 */
/* rand-u16: 0x800F01CA 1 0 */
/* rand-u16: 0x800F0194 1 0,1,2,3 */
/* rand-u16: 0x800F0196 1 0 */
/* rand-u16: 0x800F01CC 1 0,1,2 */
/* rand-u16: 0x800F01CE 1 0 */
/* rand-u16: 0x800F0198 1 0,1,2,3 */
/* rand-u16: 0x800F019A 1 0 */
/* rand-u16: 0x800F01D0 1 0,1,2 */
/* rand-u16: 0x800F01D2 1 0 */
/* rand-u16: 0x800F019C 1 0,1,2,3 */
/* rand-u16: 0x800F019E 1 0 */
/* rand-u16: 0x800F01D4 1 0,1,2 */
/* rand-u16: 0x800F01D6 1 0 */
/* rand-u16: 0x800F01A0 1 0,1,2,3 */
/* rand-u16: 0x800F01A2 1 0 */
/* rand-u16: 0x800F01D8 1 0,1,2 */
/* rand-u16: 0x800F01DA 1 0 */
/* rand-u16: 0x800F01A4 1 0,1,2,3 */
/* rand-u16: 0x800F01A6 1 0 */
/* rand-u16: 0x800F01DC 1 0,1,2 */
/* rand-u16: 0x800F01DE 1 0 */
/* rand-u16: 0x800F01A8 1 0,1,2,3 */
/* rand-u16: 0x800F01AA 1 0 */
/* rand-u16: 0x800F01E0 1 0,1,2 */
/* rand-u16: 0x800F01E2 1 0 */
#include "common.h"

extern u8 D_800EFF58[], D_80091618[], D_800EC198[], D_8008542E;
extern s16 D_800ED88E;
extern s16 D_800F0568[];
extern u16 D_8006AF80;
extern void func_8001611C(s32), func_8001A998(void *, s32), func_800BC31C(void), func_800BC438(s32);
extern void func_800BC50C(s32, s32, s32), func_800BC394(s32, s32), func_800BC5FC(void), func_800BC674(void);
extern void func_800BC728(s32);
extern s32 func_800BE020(s32);

#define F32(x) (*(s32 *)(D_800EFF58 + (x)))
#define FP(x) (*(u8 **)(D_800EFF58 + (x)))
#define T(v) (*(s16 *)(D_800EC198 + (v) * 14 + *(u16 *)(D_80091618 + D_8006AF80 * 0x1A8 + 0x10) * 2))
#define BIT6(o) ((*(u32 *)((o) + 0x38) >> 6) & 1)

s32 func_800BBF9C(void) {
    s32 i, j, a2, first = 1;
    func_8001611C(0x1000);
    F32(0x84) = 0;
    F32(0x88) = 0x20;
    F32(0x8C) = 0;
    if (D_800ED88E == 0) {
        F32(0x90) = 0;
        func_8001A998(D_800EFF58 + 0x94, 0x80);
    }
    F32(0x32C) = 0;
    F32(0x330) = 4;
    func_800BC31C();
    for (i = 0; i < 14; i++) {
        s32 cnt = 0;
        if ((u32)(i - 10) < 3) {
            if (D_8008542E & D_800F0568[i]) a2 = T(i + 3) == 0;
            else a2 = 1;
        } else if (i == 13) {
            a2 = 0;
        } else if (F32(0x21C + i * 4) == -1) {
            a2 = T(i + 3) == 0;
        } else {
            func_800BC438(i);
            for (j = 0; j < F32(0x21C + i * 4); j++) {
                if (T(i * 3 + j) == 0) {
                    cnt++;
                    a2 = 1;
                } else {
                    F32(0x254 + i * 4) = j;
                    a2 = 0;
                }
                func_800BC50C(i, j, a2);
            }
            a2 = cnt == F32(0x21C + i * 4);
        }
        func_800BC394(i, a2);
    }
    for (i = 0; i < 10; i++) {
        s32 n;
        if (BIT6(FP(0x120 + i * 4))) continue;
        if (first) {
            F32(0x114) = i;
            first = 0;
        }
        n = F32(0x21C + i * 4);
        if (n == -1) continue;
        for (j = 0; j < n; j++) {
            if (!BIT6(FP(0x2A0 + i * 12 + j * 4))) {
                F32(0x28C) = j;
                F32(0x254 + i * 4) = j;
                break;
            }
        }
        *(u16 *)(FP(0x2A0 + i * 12 + F32(0x254 + i * 4) * 4) + 0x66) = 1;
    }
    func_800BC5FC();
    func_800BC674();
    for (i = 0; i < 2; i++) func_800BC728(i);
    return func_800BE020(1);
}
