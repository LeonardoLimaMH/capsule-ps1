/* stub-ret: mixed */
/* arg0: small */
/* max-insns: 200000 */
/* rand-mem: 0x80085428 1 2 */
/* rand-u16: 0x80091618 1 0,1,2,0xFFFF */
/* rand-u16: 0x800917C0 1 0,1,2,0xFFFF */
/* rand-u16: 0x80091968 1 0,1,2,0xFFFF */
/* rand-u16: 0x80091B10 1 0,1,2,0xFFFF */
/* rand-u16: 0x80091CB8 1 0,1,2,0xFFFF */
/* rand-u16: 0x80091E60 1 0,1,2,0xFFFF */
/* rand-u32-strided: 0x80078C4C 1 4 0,1,2,5,9 */
#include "common.h"

/* a classe da criatura k (tabela D_8006B058 indexada por 5 bits do registro da espécie) já
 * aparece em outra criatura ativa ou na lista D_8006B1EC? achando na lista, zera a marca
 * correspondente em D_80078C4F */
extern u8 D_80091618[], D_80085428[], D_80063940[], D_80078C4F[];
extern s32 D_8006B058[], D_80078C4C;
extern u16 D_8006B1EC[];
extern s32 func_800AECC8(s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define CLS(id) \
    D_8006B058[(*(u32 *)(D_80063940 + (id) * 60 + 8) >> 31) | \
               ((*(u32 *)(D_80063940 + (id) * 60 + 0xC) & 0xF) << 1)]

s32 func_80027C14(s32 a0) {
    u16 k = a0;
    u16 id = *(u16 *)E(k);
    s32 c, found = 0;
    u32 i, n;
    if (D_80085428[0] != 0) return 0;
    if (id == 0xFFFF) return 1;
    c = CLS(id);
    for (i = 0; i < 6; i++) {
        if (i == k) continue;
        if (func_800AECC8(i & 0xFFFF) == -1) continue;
        if (CLS(*(u16 *)E(i)) == c) return 1;
    }
    n = D_80078C4C - 1;
    i = 1;
    if (n != 0 && !found) {
        do {
            if (D_8006B1EC[i] == c) found = 1;
            i++;
        } while (i <= n && !found);
    }
    if (found == 1) D_80078C4F[i] = 0;
    return 1;
}
