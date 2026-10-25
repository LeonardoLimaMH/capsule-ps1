/* rand-mem: 0x800B3CF8 1 0x50 */
/* rand-mem: 0x800B3C4C 1 2 */
/* rand-mem: 0x8008EDE8 1 0x40 */
/* rand-mem: 0x8008EDF8 1 0x40 */
/* rand-mem: 0x8008ED80 1 2 */
/* rand-mem: 0x8008EDF1 1 0x10 */
/* rand-mem: 0x8008EE01 1 0x10 */
/* rand-mem: 0x800B3C58 0xA0 0x80 */
#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_800B3D08, D_800B3CF8;
extern u8 D_800B3C4C;
extern s16 D_800B3C58[];
extern u8 D_800B3924[];
extern s16 D_800B3888[];
extern char D_800B2E88[], D_800B3828[], D_800B3840[];
extern void func_80020844(s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern void func_8001AD74(s32), func_80034BD8(s32, s32), func_80033974(s32);
extern s32 func_80012508(void);

#define D32(o) (*(u32 *)(D_8008ED68 + (o)))

s32 func_800A92D4(void) {
    s32 i;
    u16 a, b;
    D_800B3D08++;
    func_80020844(-0xA0, -0x78, 0x140, 0xF0, 0, 0, 0, 0, 4);
    for (i = 0; i < D_800B3CF8 + 1; i++) {
        s16 y = D_800B3C58[i];
        if (y < -0x7F) continue;
        func_8001F1A8(-0x78, y, D_800B3924[i], 1, 0, D_800B2E88 + i * 32, 1, 0x10, 2);
        if (D_800B3CF8 >= 0x4C) {
            if (!D_800B3C4C && i == 0x4C && D_800B3C58[0x4C] < 0x11) D_800B3C4C = 1;
        } else if (i == D_800B3CF8 && !(D_800B3888[i] < D_800B3C58[i])) {
            D_800B3CF8 = i + 1;
        }
        if ((D32(0x80) & 0x20) || (D32(0x90) & 0x20)) D_800B3C58[i] -= 2;
        else if (D32(0x18) & 1) D_800B3C58[i] -= 1;
    }
    if (!D_800B3C4C) return 0;
    func_8001F1A8(-0x78, D_800B3C58[0x4D], 0, 1, 0, D_800B3828, 1, 0xC, 2);
    func_8001F1A8(-0x78, D_800B3C58[0x4E], 0, 1, 0, D_800B3840, 1, 0xE, 2);
    a = D_800B3C58[0x4D];
    if ((s16)a >= -0x13) {
        if ((D32(0x80) & 0x20) || (D32(0x90) & 0x20)) {
            b = D_800B3C58[0x4E];
            D_800B3C58[0x4D] = a - 2;
            D_800B3C58[0x4E] = b - 2;
            return b - 2;
        }
        if (!(D32(0x18) & 1)) return 0;
        b = D_800B3C58[0x4E];
        D_800B3C58[0x4D] = a - 1;
        D_800B3C58[0x4E] = b - 1;
        return b - 1;
    }
    if (!(D_800B3C58[0x4C] < -0x7F)) return 0;
    if (!(D32(0x88) & 0x8F0) && !(D32(0x98) & 0x8F0)) return 0;
    func_8001AD74(4);
    func_80034BD8(-3, 0);
    func_80033974(0x8000);
    return func_80012508();
}
