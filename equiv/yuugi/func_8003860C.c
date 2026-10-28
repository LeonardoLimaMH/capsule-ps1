/* stub-ret: mixed */
/* arg0: small */
/* max-insns: 200000 */
/* rand-u32-strided: 0x80078C78 1 4 0,1,2,5,24 */
/* rand-mem: 0x80093D6B 1 64 */
/* rand-mem: 0x80093DB9 1 64 */
/* rand-mem: 0x80093E07 1 64 */
/* rand-mem: 0x80093E55 1 64 */
/* rand-mem: 0x80093EA3 1 64 */
#include "common.h"

/* reinicia a sequência n do driver de som: zera os 16 canais (D_800944B8), as vozes que
 * pertencem a ela (D_80093D68, dono no nibble alto de +3, esperando cada tecla soltar) e as
 * 16 trilhas (D_800937D0); por fim solta as teclas dessas vozes */
extern u8 D_800944B8[], D_80093D68[], D_800937D0[];
extern s32 D_8007142C[], D_80078C78;
extern s16 D_80078C7C;
extern s32 func_80038A60(s32), SpuSetKey(s32, s32), SpuGetKeyStatus(s32);

#define B8(q, o) (*(u8 *)((q) + (o)))
#define H(q, o) (*(s16 *)((q) + (o)))
#define W(q, o) (*(s32 *)((q) + (o)))

s32 func_8003860C(s32 n) {
    s32 i, bit, mask = 0;
    u8 *c;
    D_80078C7C = 0x7F;
    for (i = 0; i < 16; i++) {
        c = D_800944B8 + n * 684 + i * 0x28;
        B8(c, 0x20) = 1;
        B8(c, 0x24) = 0xFF;
        W(c, 0) = 0;
        W(c, 4) = 0;
        B8(c, 0x22) = 0;
        H(c, 0x1C) = 0;
        W(c, 8) = 0;
        W(c, 0xC) = 0;
        H(c, 0x14) = 0x72;
        H(c, 0x16) = 0x72;
        W(c, 0x10) = 0;
        H(c, 0x18) = 0;
        B8(c, 0x23) = 0;
        B8(c, 0x25) = 0;
        B8(c, 0x27) = n << 4;
    }
    for (i = 0; i < D_80078C78; i++) {
        c = D_80093D68 + i * 0x4E;
        if ((B8(c, 3) >> 4) != n) continue;
        B8(c, 0) = i;
        H(c, 0x16) = 0;
        H(c, 0x14) = 0x40;
        B8(c, 0x1B) = 0;
        B8(c, 0x23) = 0;
        B8(c, 0x22) = 0;
        B8(c, 0x28) = 0;
        H(c, 0x24) = 0;
        H(c, 0x26) = 0;
        H(c, 0x2E) = 0;
        B8(c, 0x33) = 0;
        B8(c, 0x32) = 0;
        B8(c, 0x38) = 0;
        H(c, 0x34) = 0;
        H(c, 0x36) = 0;
        H(c, 0x3E) = 0;
        H(c, 0x48) = 0x40;
        H(c, 0x4A) = 0x40;
        bit = D_8007142C[i];
        mask |= bit;
        func_80038A60(i);
        for (;;) {
            s32 r;
            SpuSetKey(0, bit);
            r = SpuGetKeyStatus(bit);
            if (r == 2 || r == 0) break;
        }
    }
    for (i = 0; i < 16; i++) {
        c = D_800937D0 + (n * 16 + i) * 0x54;
        B8(c, 3) = 0x7F;
        B8(c, 0x13) = 0x3C;
        B8(c, 1) = 0x40;
        B8(c, 6) = 0;
        B8(c, 7) = 0x40;
        B8(c, 5) = 0x7F;
        W(c, 8) = 0x7F;
        W(c, 0xC) = 0x7F;
        B8(c, 2) = 0;
        H(c, 0x1E) = 0;
        H(c, 0x18) = 0;
        H(c, 0x20) = 0;
        B8(c, 0x1A) = 0;
        H(c, 0x30) = 0;
        B8(c, 0x22) = 0;
        B8(c, 0x35) = 0;
        B8(c, 0x34) = 0;
        B8(c, 0x36) = 0;
        H(c, 0x3A) = 0;
        H(c, 0x3C) = 0;
        B8(c, 0x45) = 0;
        B8(c, 0x44) = 0;
        B8(c, 0x4E) = 0;
        H(c, 0x46) = 0;
        H(c, 0x48) = 0;
        B8(c, 0x10) = 0;
        B8(c, 0x11) = 0;
        H(c, 0x26) = 0;
        B8(c, 0x12) = 0;
    }
    return SpuSetKey(0, mask);
}
