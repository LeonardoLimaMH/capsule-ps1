/* arg0: small */
#include "common.h"

extern u8 D_80100F38[], D_8008ED68[];
extern void func_800D0730(s16 *, s32, s32, s32), func_800D6960(void *, s32, s32, s32);

s32 func_800D577C(s32 a0, s32 a1) {
    s16 v[4];
    u8 *p;
    s16 i;
    D_8008ED68[0x102] = 2;
    p = D_80100F38 + (u16)a0 * 0x79C;
    *(u16 *)(p + 0x396) = 1;
    *(u16 *)(p + 0x398) = a1;
    func_800D0730(v, (s16)(*(u16 *)(p + 0x332) - 1), (s16)(*(u16 *)(p + 0x334) - 1), 0);
    *(u16 *)(p + 0x3A4) = v[0];
    *(u16 *)(p + 0x3A6) = v[2];
    func_800D6960(p + 0x20, 0xA0, 0xA0, 0x10);
    func_800D6960(p + 0x24, 0xC0, 0x90, 0x20);
    func_800D6960(p + 0x30, 0xC0, 0x90, 0x20);
    func_800D6960(p + 0x34, 0xE0, 0x80, 0x40);
    func_800D6960(p + 0x40, 0xE0, 0x80, 0x40);
    func_800D6960(p + 0x44, 0x80, 0x80, 0x70);
    func_800D6960(p + 0x50, 0x80, 0x80, 0x70);
    func_800D6960(p + 0x54, 0x20, 0xE0, 0x70);
    func_800D6960(p + 0x60, 0x20, 0xE0, 0x70);
    func_800D6960(p + 0x64, 0x30, 0xF0, 0x40);
    func_800D6960(p + 0x70, 0x30, 0xF0, 0x40);
    func_800D6960(p + 0x74, 0xC0, 0x40, 0xD0);
    func_800D6960(p + 0x80, 0xC0, 0x40, 0xD0);
    func_800D6960(p + 0x84, 0x80, 0x60, 0xE0);
    func_800D6960(p + 0x90, 0x80, 0x60, 0xE0);
    func_800D6960(p + 0x94, 0xA0, 0xA0, 0x10);
    if (*(s32 *)(D_8008ED68 + 0x18) & 1) {
        for (i = 0; i < 8; i++) {
            u8 *q = p + 0x20 + i * 16;
            if (i & 1) {
                func_800D6960(q + 8, 0xC0, 0x20, 0x40);
                func_800D6960(q + 0xC, 0xD0, 0x20, 0x20);
            } else {
                func_800D6960(q + 0xC, 0xC0, 0x20, 0x40);
                func_800D6960(q + 8, 0xD0, 0x20, 0x20);
            }
        }
    } else {
        for (i = 0; i < 8; i++) {
            u8 *q = p + 0x20 + i * 16;
            if (i & 1) {
                func_800D6960(q + 8, 0xC0, 0x90, 0x20);
                func_800D6960(q + 0xC, 0xA0, 0xA0, 0x10);
            } else {
                func_800D6960(q + 0xC, 0xC0, 0x90, 0x20);
                func_800D6960(q + 8, 0xA0, 0xA0, 0x10);
            }
        }
    }
    return 0; /* v0 = i & 1 com i = 8 */
}
