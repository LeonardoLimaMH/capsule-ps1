/* rand-mem: 0x8008EDF0 2 0xFF */
/* rand-mem: 0x8008EE00 2 0xFF */
/* rand-mem: 0x800B3C1C 1 4 */
/* rand-mem: 0x8008542A 1 2 */
#include "common.h"

extern u8 D_8008ED68[];
extern char D_800B2DA8[];
extern s32 D_800B3C1C, D_800B3C24, D_800B3C20;
extern u8 D_800B3C28, D_800B3C29, D_8008542A;
extern s32 func_8001F1A8(s32, s32, s32, s32, s32, char *, s32, s32, s32);
extern s32 func_80034AB0(s32);
extern void func_80034BD8(s32, s32);
extern void func_80033974(s32);
extern s32 func_80012544(s32);

#define PAD (*(u32 *)(D_8008ED68 + 0x88))
#define REP (*(u32 *)(D_8008ED68 + 0x98))

s32 func_800A5400(void) {
    u32 a, b;
    func_8001F1A8(-0x38, 0x50, 0, 1, 0, D_800B2DA8, 1, 9, 2);
    a = PAD;
    if ((a & 0x1000) || (REP & 0x1000)) {
        if (D_800B3C1C >= 2) {
            func_80034AB0(0x84);
            D_800B3C1C -= 2;
        }
    } else if ((a & 0x4000) || (REP & 0x4000)) {
        if (D_800B3C1C < 2) {
            func_80034AB0(0x84);
            D_800B3C1C += 2;
        }
    } else if ((a & 0x8000) || (REP & 0x8000)) {
        if (D_800B3C1C & 1) {
            func_80034AB0(0x84);
            D_800B3C1C -= 1;
        }
    } else if ((a & 0x2000) || (REP & 0x2000)) {
        if (!(D_800B3C1C & 1)) {
            func_80034AB0(0x84);
            D_800B3C1C += 1;
        }
    }
    a = PAD;
    if (!(a & 0x830)) {
        b = REP;
        if (!(b & 0x830)) {
            if (!(a & 0x40) && !(b & 0x40)) return 0;
            func_80034AB0(0x5D);
            func_80034BD8(-3, 0);
            func_80033974(0x7017);
            return func_80012544(0xA);
        }
    }
    if (D_800B3C1C == 0 && D_8008542A == 0) return func_80034AB0(0x4C);
    func_80034AB0(0x48);
    D_800B3C28 = 1;
    func_80012544((u16)(*(u16 *)&D_800B3C1C + 6));
    D_800B3C24 = 0;
    D_800B3C20 = 0;
    D_800B3C1C = 0;
    D_800B3C29 = 1;
    return 0x800B0000; /* lixo do %hi */
}
