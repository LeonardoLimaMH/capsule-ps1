#include "common.h"

extern s32 D_80078B0C;
extern s32 D_80078B10;
extern s8 D_80078A7D[];
extern u8 D_80096610[];
extern void func_8004FF2C();

/* saída de texto com buffer de 32 bytes; tabulação expande até a coluna múltipla de 8 */
void _putchar(s32 c) {
    s8 ch = c;

    if (ch == 9) {
        do {
            _putchar(0x20);
        } while (D_80078B0C & 7);
        return;
    }
    if (ch == 10) {
        _putchar(0xD);
        D_80078B0C = 0;
    } else if (D_80078A7D[c & 0xFF] & 0x97) {
        D_80078B0C++;
    }
    if (D_80078B10 >= 32) {
        func_8004FF2C(1, D_80096610, D_80078B10);
        D_80078B10 = 0;
    }
    D_80096610[D_80078B10++] = c;
}
