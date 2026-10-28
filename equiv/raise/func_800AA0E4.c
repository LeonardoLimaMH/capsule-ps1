/* stub-ret: mixed */
/* max-insns: 50000 */
/* rand-u16: 0x8006AF80 1 0,1,2,3 */
/* rand-ptr: 0x800917A4 4 */
/* rand-ptr: 0x8009194C 4 */
/* rand-ptr: 0x80091AF4 4 */
/* rand-ptr: 0x80091C9C 4 */
/* rand-ptr: 0x80091E44 4 */
/* rand-ptr: 0x80091FEC 4 */
/* rand-ptr: 0x80092194 4 */
/* rand-ptr: 0x8009233C 4 */
/* rand-ptr: 0x800924E4 4 */
/* rand-ptr: 0x8009268C 4 */
/* rand-ptr: 0x80092834 4 */
/* rand-ptr: 0x800929DC 4 */
/* rand-ptr: 0x80092B84 4 */
/* rand-ptr: 0x80092D2C 4 */
/* rand-ptr: 0x80092ED4 4 */
/* rand-ptr: 0x8009307C 4 */
/* rand-ptr: 0x80093224 4 */
/* rand-ptr: 0x800933CC 4 */
/* rand-ptr: 0x80093574 4 */
/* rand-ptr: 0x8009371C 4 */
/* rand-ptr: 0x800938C4 4 */
/* rand-ptr: 0x80093A6C 4 */
/* rand-ptr: 0x80093C14 4 */
/* rand-ptr: 0x80093DBC 4 */
/* rand-ptr: 0x80093F64 4 */
/* rand-ptr: 0x8009410C 4 */
/* rand-ptr: 0x800942B4 4 */
/* rand-ptr: 0x8009445C 4 */
/* rand-ptr: 0x80094604 4 */
/* rand-ptr: 0x800947AC 4 */
/* rand-ptr: 0x80094954 4 */
/* rand-ptr: 0x80094AFC 4 */
#include "common.h"

typedef struct { s32 w[47]; } S188;
typedef struct { s32 w[96]; } S384;
extern u8 D_80091618[], D_800900C0[];
extern s32 D_800EE9B8[], D_800ED8DC, D_800EF2D8;
extern u16 D_8006AF80;
extern s16 D_800EEA90;
extern S188 D_80091558;
extern S384 D_800913D8, D_80069AD4;
extern s32 func_800D1548(void), func_800B1260(s32), func_800A8E1C(s32);
extern void func_800A9F84(s32, s32, s32), func_800A8EAC(void), func_800A8EE0(void);
extern void func_80029B28(s32), func_800A9D6C(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define OBJ(e, j) (*(u8 **)((e) + 0x18C + (j) * 4))

void func_800AA0E4(void) {
    s32 i, j, n;
    for (i = 1; i >= 0; i--) D_800EE9B8[i] = 0;
    if (D_800ED8DC != 1) return;
    D_800EF2D8 = D_8006AF80;
    if (func_800D1548() != 1 && *(u16 *)(E(D_8006AF80) + 0x10) != 0xFFFF) {
        D_800EEA90 = 8;
        for (i = 1; i >= 0; i--) {
            u16 k = func_800B1260(i);
            u16 c;
            if (k == 0xFFFF) continue;
            c = *(u16 *)(E(k) + 0x10);
            func_800A9F84(c, i, 1);
            n = func_800A8E1C(c);
            for (j = 0; j < n; j++) *(s32 *)(OBJ(E(k), j) + 0x50) |= 1;
        }
        func_800A8EAC();
        for (i = 1; i >= 0; i--) {
            u16 k = func_800B1260(i);
            if (k == 0xFFFF) continue;
            n = func_800A8E1C(*(u16 *)(E(k) + 0x10));
            for (j = 0; j < n; j++) func_80029B28(*(s32 *)(OBJ(E(k), j) + 0x18));
        }
    } else {
        D_800EEA90 = 0;
        func_800A9D6C(1);
        for (j = 0; j < 2; j++) *(s32 *)(OBJ(E(D_8006AF80), j) + 0x50) |= 1;
        func_800A8EAC();
        for (j = 0; j < 2; j++) func_80029B28(*(s32 *)(OBJ(E(D_8006AF80), j) + 0x18));
    }
    func_800A8EE0();
    D_80091558 = *(S188 *)(D_800900C0 + 0xBC);
    D_800913D8 = D_80069AD4;
}
