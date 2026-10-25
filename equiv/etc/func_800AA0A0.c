/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern u16 D_8008EE48;
extern u8 D_800859F0;
extern u8 D_800B3D24, D_800B3D25;
extern s32 D_800B3D10;
extern u16 D_800B3D22;
extern s32 func_80012508(void), func_80012578(void), func_80019654(void), func_800337EC(void);
extern s32 func_800338DC(s32);
extern void func_80033974(s32), func_8001611C(s32), func_800AB7D8(void);

s32 func_800AA0A0(u8 *p) {
    s32 r;
    switch (D_8008EE48) {
    case 0:
        func_80033974(0x8000);
        func_8001611C(0x1000);
        D_800B3D24 = (p[0xBE1] >> 1) & 1;
        D_800B3D25 = (p[0xBE1] >> 3) & 3;
        func_800AB7D8();
        D_800B3D10 = 0;
        D_800B3D22 = 0x7001;
        if (p[0x5D0] != 2 && D_800B3D24) D_800B3D22 = 0x7002;
        if (p[0x5C8] & 4) return func_80012578();
        return func_80012508();
    case 1:
        r = func_80019654();
        if (r == 0) return r;
        return func_80012578();
    case 2:
        func_800338DC(D_800B3D22);
        return func_80012578();
    case 3:
        if (!(D_800859F0 & 4)) return func_80012508();
        r = func_800337EC() & 0x80;
        if (r == 0) return r;
        return func_80012508();
    }
    return 0x80080000; /* lixo do %hi no delay slot */
}
