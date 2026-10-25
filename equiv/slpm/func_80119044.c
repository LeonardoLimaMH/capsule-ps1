/* stub-ret: mixed */
/* rand-mem: 0x80136B10 0x800 0x30 */
/* rand-mem: 0x80131D28 1 3 */
#include "common.h"

typedef struct { u8 b[4]; } U4;
extern u8 D_80136B10[], D_80137310[];
extern u8 D_801354EC[];
extern u8 D_80134F10[], D_80134F11[], D_80134F12[], D_80134F14[], D_80134F18[];
extern u16 D_80110A10;
extern s16 D_80110A14;
extern s8 D_80110A16;
extern s32 D_80131D28, D_80132044;
extern char D_801109D4[], D_801109F4[], D_80110A18[], D_80110A34[];
extern s32 func_801192E0(s32, u32, u8 *);
extern void CdIntToPos(s32, u8 *);
extern void slpm_memcpy(void *, const void *, s32);
extern s32 slpm_printf(const char *, ...);

s32 func_80119044(s32 dir) {
    U4 pos;
    u8 *p, *name, *loc;
    s32 i, off;

    if (dir == D_80132044) return 1;
    if (func_801192E0(1, *(u32 *)(D_801354EC + dir * 44), D_80136B10) != 1) {
        if (D_80131D28 > 0) slpm_printf(D_801109D4);
        return -1;
    }
    if (D_80131D28 >= 2) slpm_printf(D_801109F4);
    p = D_80136B10;
    i = 0;
    if (p < p + 0x800) {
        name = D_80134F10 + 8;
        loc = D_80134F10;
        off = 0;
        while (*p != 0) {
            pos = *(U4 *)(p + 2);
            CdIntToPos(*(s32 *)&pos, loc);
            *(U4 *)(D_80134F10 + 4 + off) = *(U4 *)(p + 0xA);
            if (i == 0) {
                *(u16 *)(D_80134F10 + 8) = D_80110A10;
            } else if (i == 1) {
                *(s16 *)(D_80134F10 + 0x20) = D_80110A14;
                *(s8 *)(D_80134F10 + 0x22) = D_80110A16;
            } else {
                slpm_memcpy(name, p + 0x21, p[0x20]);
                name[p[0x20]] = 0;
            }
            if (D_80131D28 >= 2)
                slpm_printf(D_80110A18, D_80134F10[off], D_80134F11[off], D_80134F12[off],
                            *(u32 *)(D_80134F14 + off), name);
            name += 0x18;
            off += 0x18;
            i++;
            p += p[0];
            loc += 0x18;
            if (i >= 0x40 || !(p < D_80137310)) break;
        }
    }
    D_80132044 = dir;
    if (i < 0x40) D_80134F18[i * 24] = 0;
    if (D_80131D28 >= 2) slpm_printf(D_80110A34, i);
    return 1;
}
