#include "common.h"

extern u8 D_8008F702;
extern u32 D_800922D8;
extern s32 func_80033450();
extern s32 func_800185F8();

/* o valor em v0 na saída é o que sobra nos registradores do original (no caso 0, o
   endereço lido da tabela de saltos) */
s32 func_80032944(u8 *o) {
    s32 v;

    if (D_8008F702 != 0) {
        return D_8008F702;
    }
    switch (D_800922D8) {
    case 0:
        return 0x80032A18;
    case 1:
        *(s16 *)(o + 0x6A) = -1;
        *(s16 *)(o + 0x6E) = 1;
        v = *(s32 *)(o + 0x84) * 64 - 0xA0;
        *(s16 *)(o + 0x46) = v;
        return v;
    case 2:
        return func_80033450(o);
    case 3:
        *(s16 *)(o + 0x6A) = 0;
        *(s16 *)(o + 0x46) = *(s32 *)(o + 0x84) * 64 - 0xA0;
        *(s16 *)(o + 0x4A) = *(s32 *)(o + 0x80) * 64 - 0xA0;
        if (*(s32 *)(o + 0x84) & 1) {
            v = ~*(u16 *)(o + 0x80);
        } else {
            v = 5 - *(u16 *)(o + 0x80);
        }
        *(s16 *)(o + 0x6E) = v;
        return v;
    case 4:
        return func_800185F8(o);
    }
    return 0x80010000; /* %hi da tabela de saltos, carregado no delay slot */
}
