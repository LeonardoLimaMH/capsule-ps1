/* rand-u16: 0x800F1ED2 1 0,1,2,3 */
/* rand-u16: 0x800F1ED4 1 0,1,2 */
/* rand-u16: 0x80091618 1 0,1,2,3,0x66 */
/* rand-u16: 0x800917C0 1 0,1,2,3,0x66 */
/* rand-u16: 0x8009161A 1 0,1,2,3 */
/* rand-u16: 0x800917C2 1 0,1,2,3 */
/* rand-ptr: 0x80091790 1 */
/* rand-ptr: 0x80091938 1 */
/* rand-ptr: 0x80091AE0 1 */
/* rand-ptr: 0x80091C88 1 */
#include "common.h"

extern u8 D_800F1EB4[], D_80091618[], D_800F2D30[], D_800F2D98[], D_80100F38[], D_80063940[], D_8008ED68[];
extern u16 D_80100DBA, D_80100DBC, D_80100DB8;
extern s16 D_800F066A;
extern s32 func_800A0E6C(s32);
extern void func_8001A49C(s32), SpuInitHot(void), raise_SpuInit(void), func_800A1F44(s32, s32, s32);
extern void func_800C62A4(s32, s32), func_800C0E1C(s32, s32, s32), func_800DBAA8(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)

s32 func_800E2714(void) {
    u16 k = *(u16 *)(D_800F1EB4 + 0x1E);
    u8 *e = E(k);
    u16 c = *(u16 *)e;
    s16 s0 = *(s16 *)(D_800F1EB4 + 0x20);
    u16 d = *(u16 *)(e + 2);
    u16 i;
    u8 *o;
    for (i = 0; i < 6; i++) {
        if (i == k) continue;
        if (*(u16 *)(E(i) + 0x10) == 0xFFFF) continue;
        if (*(u16 *)E(i) == d) break;
    }
    if (D_800F2D30[c] == 0xFF) {
        if (i == 6) {
            u8 b = D_800F2D30[d];
            s32 a = b * 0x15800 + 0x80146A18;
            D_800F2D98[b] = c;
            D_800F2D30[c] = D_800F2D30[d];
            D_800F2D30[d] = 0xFF;
            func_8001A49C(a);
        } else {
            func_8001A49C(func_800A0E6C(c));
        }
    } else if (i == 6) {
        D_800F2D98[D_800F2D30[d]] = 0xFF;
        D_800F2D30[d] = 0xFF;
    }
    if (s0 == 1) SpuInitHot();
    else raise_SpuInit();
    func_800A1F44(s0, 0, 0);
    func_800C62A4(s0, 1);
    o = *(u8 **)(e + 0x178);
    *(s16 *)(o + 0x46) = D_80100DBA - *(s32 *)(D_8008ED68 + 0x108) / 2;
    *(s16 *)(*(u8 **)(e + 0x178) + 0x4A) = D_80100DBC - *(s32 *)(D_8008ED68 + 0x10C) / 2;
    D_800F066A = 1;
    *(u16 *)(*(u8 **)(e + 0x178) + 0x4E) = D_80100DB8;
    func_800C0E1C(s0, 0, 0);
    *(u16 *)(D_80100F38 + k * 0x79C + 0x386) = 0;
    func_800DBAA8((s16)k);
    *(u16 *)(e + 0x92) = (*(u32 *)(D_80063940 + c * 60 + 8) >> 8) & 0xF;
    return 1;
}
