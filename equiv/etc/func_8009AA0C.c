/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern s32 D_800B3B20, D_800B3ADC, D_800B3B24;
extern u16 D_8008EE48;
extern s32 func_80012508(void), func_80012578(void);
extern void func_8009BDD8(s32, s32, s32);

s32 func_8009AA0C(void) {
    s32 v, reload;
    if (D_800B3B20) func_8009BDD8(0, 0xA0, 5);
    switch (D_8008EE48) {
    case 0:
        v = --D_800B3ADC;
        if (v > 0) return v;
        return func_80012578();
    case 1:
        if (D_800B3B20 < 10) return 1;
        reload = 0x90;
        break;
    case 2:
        v = --D_800B3ADC;
        if (v > 0) return v;
        reload = 0x70;
        break;
    case 3:
        v = --D_800B3ADC;
        if (v > 0) return v;
        reload = 0x30;
        break;
    case 4:
        v = --D_800B3ADC;
        if (v > 0) return v;
        func_80012508();
        D_800B3B24 = 0;
        return 0x800B0000; /* lixo do %hi */
    default:
        return 0x80090000; /* lixo do %hi da tabela de salto */
    }
    D_800B3ADC = reload;
    return func_80012578();
}
