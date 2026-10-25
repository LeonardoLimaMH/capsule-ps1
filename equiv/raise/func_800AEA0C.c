#include "common.h"

/* rand-u16: 0x800EEBFC 1 0,1,2,3 */
/* rand-u16: 0x800EEBFE 1 0 */
/* rand-u16: 0x800EEC00 1 0,1,2,3 */
/* rand-u16: 0x800EEC02 1 0 */
/* rand-u16: 0x800EEC04 1 0,1,2,3 */
/* rand-u16: 0x800EEC06 1 0 */
/* rand-u16: 0x800EEC08 1 0,1,2,3 */
/* rand-u16: 0x800EEC0A 1 0 */
/* rand-u16: 0x800EEC0C 1 0,1,2,3 */
/* rand-u16: 0x800EEC0E 1 0 */
/* rand-u16: 0x800EEC10 1 0,1,2,3 */
/* rand-u16: 0x800EEC12 1 0 */
/* rand-u16: 0x800EEC14 1 0,1,2,3 */
/* rand-u16: 0x800EEC16 1 0 */
/* stub-ret: mixed */
extern u8 D_800EEB9C[];
extern u16 D_800ED88C;
extern void func_8001611C(s32), func_800B472C(void), func_800B6014(void);
extern s32 func_800B4790(void), func_800B47F0(s32), func_800B5CF4(s32), func_800B5DE8(s32, s32), func_800B5F44(s32, s32);
extern s32 func_800B60F8(void), func_800B617C(void), func_800B61E4(void), func_800B6248(void), func_800B62AC(void);
extern s32 func_800B7264(s32);

#define E32(o) (*(s32 *)(D_800EEB9C + (o)))

s32 func_800AEA0C(void) {
    s32 i, j;
    func_8001611C(0x1000);
    func_800B472C();
    E32(0x1C) = func_800B4790();
    for (i = 0; i < 7; i++) {
        E32(0x28 + i * 4) = func_800B47F0(i);
        E32(0x98 + i * 4) = func_800B5CF4(i);
        for (j = 0; j < E32(0x60 + i * 4); j++) {
            E32(0x7C + i * 4) = 0;
            E32(0xD4 + i * 0x24 + j * 4) = func_800B5DE8(i, j);
            if (i < 2) E32(0x4C4 + i * 0x24 + j * 4) = func_800B5F44(i, j);
        }
    }
    E32(0x74C) = func_800B60F8();
    E32(0x754) = func_800B617C();
    E32(0x75C) = func_800B61E4();
    func_800B6014();
    E32(0x770) = func_800B6248();
    E32(0x778) = func_800B62AC();
    D_800ED88C = 0;
    return func_800B7264(1);
}
