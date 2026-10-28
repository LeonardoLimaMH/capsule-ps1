/* stub-ret: mixed */
/* max-insns: 200000 */
/* rand-u32-strided: 0x80078C78 1 4 0,1,2,5,24 */
#include "common.h"

/* inicializa o driver de som: reinicia a sequência 0, todas as vozes (soltando cada tecla e
 * esperando) e o estado mestre D_80093D10; por fim solta as teclas de todas as vozes */
extern u8 D_80093D68[], D_80093D10[];
extern s32 D_8007142C[], D_80078C78;
extern s32 func_8003860C(s32), func_80038A60(s32), SpuSetKey(s32, s32), SpuGetKeyStatus(s32);

#define H(q, o) (*(s16 *)((q) + (o)))
#define W(q, o) (*(s32 *)((q) + (o)))

/* liga/desliga as teclas de bits até o SPU confirmar (status 0 ou 2) */
#define KEY_WAIT(bits) \
    do { \
        SpuSetKey(0, bits); \
        r = SpuGetKeyStatus(bits); \
    } while (r != 2 && r != 0)

s32 func_80038890(void) {
    s32 i, bit, r, mask = 0;
    u8 *v;
    for (i = 0; i <= 0; i++) func_8003860C(i);
    for (i = 0; i < D_80078C78; i++) {
        v = D_80093D68 + i * 0x4E;
        v[0] = i;
        H(v, 0x16) = 0;
        H(v, 0x14) = 0x40;
        H(v, 0x48) = 0x40;
        H(v, 0x4A) = 0x40;
        bit = D_8007142C[i];
        mask |= bit;
        func_80038A60(i);
        KEY_WAIT(bit);
    }
    D_80093D10[1] = 0x40;
    D_80093D10[7] = 0x40;
    D_80093D10[3] = 0x7F;
    D_80093D10[6] = 0;
    D_80093D10[5] = 0x7F;
    W(D_80093D10, 8) = 0x7F;
    W(D_80093D10, 0xC) = 0x7F;
    D_80093D10[2] = 0;
    H(D_80093D10, 0x30) = 0;
    H(D_80093D10, 0x26) = 0;
    KEY_WAIT(mask);
    return r;
}
