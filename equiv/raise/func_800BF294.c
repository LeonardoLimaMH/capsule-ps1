#include "common.h"

/* stub-ret: mixed */
/* max-insns: 20000 */
/* rand-u16: 0x800F1ED2 1 0,1,2,3 */
/* rand-ptr: 0x80091790 1 */
/* rand-ptr: 0x80091938 1 */
/* rand-ptr: 0x80091AE0 1 */
/* rand-ptr: 0x80091C88 1 */
extern u8 D_800F1EB4[], D_80091618[], D_8008ED68[];
extern s16 D_80100DBA, D_80100DBC, D_80100DB8, D_80100D80;
extern s32 D_800EEBC0;
extern s32 func_800AECC8(s32), func_800DEB28(void);
extern void func_800BF220(s32), func_800DEB38(void), func_800E1720(s32), func_800D8E90(s32);
extern void func_800B7FA8(s32), func_800AC9E8(s32), func_800AC34C(s32);

s32 func_800BF294(void) {
    u16 s1 = *(u16 *)(D_800F1EB4 + 0x1E);
    s32 r = func_800AECC8(s1);
    u8 *o;
    if (r == -1 || r == 2) {
        func_800BF220(s1);
        for (;;) {
            if (func_800DEB28() == 1) return 2;
            func_800DEB38();
            func_800BF220(*(u16 *)(D_800F1EB4 + 0x1E));
        }
    }
    func_800E1720(s1);
    func_800D8E90(r);
    o = *(u8 **)(D_80091618 + (s16)s1 * 0x1A8 + 0x178);
    D_80100DBA = *(u16 *)(o + 0x46) + *(s32 *)(D_8008ED68 + 0x108) / 2;
    D_80100DBC = *(u16 *)(o + 0x4A) + *(s32 *)(D_8008ED68 + 0x10C) / 2;
    D_80100DB8 = *(u16 *)(o + 0x4E);
    if (D_800EEBC0 == 5) func_800B7FA8(0);
    func_800AC9E8(0);
    func_800AC34C(0);
    D_80100D80 = 0;
    return 1;
}
