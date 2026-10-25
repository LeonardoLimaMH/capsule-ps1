#include "common.h"

extern u8 D_800922F0[];
extern u8 D_80093710[];
extern s32 DsPosToInt();
extern s32 DsSyncCallback();
extern s32 DsControlF();
extern s32 func_80037404();
extern s32 func_800373A0();

/* o valor em v0 na saída é o que sobra nos registradores do original */
s32 func_80035680(s32 a, s32 p) {
    s32 pos;

    DsSyncCallback(0);
    if ((a & 0xFF) == 2) {
        pos = DsPosToInt(p);
        *(s32 *)(D_800922F0 + 0x1178) = pos;
        if (!(*(u16 *)D_800922F0 & 4) || *(s32 *)(D_800922F0 + 0x1180) >= pos) {
            return 0;
        }
        if (D_800922F0[0x1186] != 0) {
            return func_80037404(*(u16 *)(D_800922F0 + 0x1174) | 0x8000, 1);
        }
        return func_800373A0();
    }
    if (*(s16 *)(D_80093710 + 0x28) != 0) {
        *(u16 *)(D_80093710 + 0x28) -= 1;
        DsSyncCallback(func_80035680);
        return DsControlF(0x10, 0);
    }
    D_800922F0[0x112] = 0;
    D_800922F0[0x113] = 0;
    return (s32)D_800922F0;
}
