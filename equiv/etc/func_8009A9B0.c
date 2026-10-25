/* rand-mem: 0x8008EE44 1 0x10 */
/* rand-mem: 0x8008EE48 1 6 */
/* rand-mem: 0x800859F0 1 8 */
/* rand-mem: 0x8008F780 0x10 3 */
/* rand-mem: 0x8008F7D0 1 2 */
/* rand-mem: 0x800B3ADC 1 4 */
/* rand-mem: 0x800B3B20 1 0x10 */
#include "common.h"

extern u8 D_8008ED68[];
extern s32 D_800B3ADC;
extern s32 func_80012508(void);
extern s32 func_80012578(void);

s32 func_8009A9B0(void) {
    s32 v;
    if (*(u16 *)(D_8008ED68 + 0xE0)) {
        D_800B3ADC = 0x20;
        return func_80012508();
    }
    v = *(s32 *)(D_8008ED68 + 0xA68);
    if (v) return v;
    return func_80012578();
}
