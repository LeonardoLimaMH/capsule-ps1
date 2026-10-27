/* rand-u16: 0x800EF2D8 1 0,1,2,3 */
/* rand-ptr: 0x800917A4 2 */
/* rand-ptr: 0x8009194C 2 */
/* rand-ptr: 0x80091AF4 2 */
/* rand-ptr: 0x80091C9C 2 */
/* rand-u16: 0x800900CC 1 0,1,2 */
/* rand-u16: 0x800900CE 1 0 */
/* rand-u16: 0x80090188 1 0,1,2 */
/* rand-u16: 0x8009018A 1 0 */
/* rand-ptr: 0x80090160 1 */
/* rand-ptr: 0x8009021C 1 */
/* arg0: small */
#include "common.h"

extern u8 D_80091618[], D_800EF524[], D_800900C0[];
extern s16 D_80078C28, D_800EEA90, D_80078C26;
extern u16 D_8006AF80, D_800EF2D8;
extern s32 D_800EEBA8, D_800F0550, D_800F0578, D_80078C34;
extern u8 D_80085429;
extern void func_800E1B30(void), func_800E2AA0(s32, s32, s32), func_800B4C40(s32), func_800B9F50(s32);
extern void func_80024990(s32, s32, s32, s32), func_800D1404(void), func_800282A0(s32);

s32 func_800A9D6C(s32 a0) {
    s32 i, j, b;
    if (D_80078C28 != 0) return 0;
    if (D_800EEA90 != 0) {
        if (D_800EEA90 == 4) func_800E1B30();
        D_800EEA90 -= 1;
        return 0;
    }
    D_800EEA90 = 8;
    D_8006AF80 = D_800EF2D8;
    func_800E2AA0(7, 1, a0);
    func_800B4C40(D_8006AF80);
    func_800B9F50(1);
    b = (a0 == 1) << 3;
    for (i = 0; i < 2; i++) {
        u8 *o, *q;
        s32 n;
        *(s32 *)(D_800EF524 + i * 0x34 + 0x448) = a0 == 1 ? a0 : -1;
        o = *(u8 **)(D_80091618 + D_8006AF80 * 0x1A8 + 0x18C + i * 4);
        *(s32 *)(o + 0x50) = (*(s32 *)(o + 0x50) & ~8) | b;
        n = *(s32 *)(D_800900C0 + i * 0xBC + 0xC);
        q = *(u8 **)(D_800900C0 + i * 0xBC + 0xA0);
        for (j = 0; j < n; j++, q += 0x2C) {
            q[0x2A] = 0x80;
            q[0x29] = 0x80;
            q[0x28] = 0x80;
            q[0x2B] = 0x28;
        }
    }
    if (a0 == 0) {
        func_80024990(*(s32 *)(D_800EF524 + 0x474), 1, 0x32, D_80078C26 == 3 ? 6 : 8);
        D_800EEBA8 = 0;
        D_800F0550 = D_800F0578;
        if (D_80085429) func_800D1404();
    }
    if (D_80078C34 != 0x7006) func_800282A0(0x7006);
    return 1;
}
