/* stub-ret: mixed */
/* max-insns: 200000 */
#include "common.h"

/* operação do cartão de memória no canal ch: limpa os eventos, dispara a operação e espera
 * qual evento chega (1..4, de software ou de hardware); "novo cartão" (4) refaz com
 * _card_clear e os eventos de hardware; o resultado - 1 fica em D_8008ED68+0x950 */
extern u8 D_8008ED68[];
extern s32 D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8;
extern s32 D_80078CEC, D_80078CF0, D_80078CF4, D_80078CF8;
extern s32 func_8004FE6C(s32), func_8004E2BC(s32), func_8004E2CC(s32), _card_clear(s32);

#define TE func_8004FE6C

/* primeiro dos quatro eventos que disparou (1..4), 0 se nenhum */
#define WHICH(e0, e1, e2, e3) \
    (TE(e0) == 1 ? 1 : TE(e1) == 1 ? 2 : TE(e2) == 1 ? 3 : TE(e3) == 1 ? 4 : 0)
#define CLEAR(e0, e1, e2, e3) (TE(e0), TE(e1), TE(e2), TE(e3))
#define WAIT(e0, e1, e2, e3) \
    do { \
        r = WHICH(e0, e1, e2, e3); \
    } while (r == 0)

s32 func_8001CB94(s32 ch) {
    s32 r;
    CLEAR(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    while (func_8004E2BC(ch) == 0)
        ;
    WAIT(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    r -= 1;
    if ((u32)(r - 1) < 2) goto out;
    if (r == 3) {
        CLEAR(D_80078CEC, D_80078CF0, D_80078CF4, D_80078CF8);
        while (_card_clear(ch) == 0)
            ;
        WAIT(D_80078CEC, D_80078CF0, D_80078CF4, D_80078CF8);
        r -= 1;
        if (r != 0) goto out;
    }
    CLEAR(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    while (func_8004E2CC(ch) == 0)
        ;
    WAIT(D_80078CDC, D_80078CE0, D_80078CE4, D_80078CE8);
    r -= 1;
out:
    *(s32 *)(D_8008ED68 + 0x950) = r;
    return r;
}
