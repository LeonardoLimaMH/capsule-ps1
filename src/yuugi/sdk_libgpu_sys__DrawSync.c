#include "common.h"
#include "yuugi.h"

extern u8 D_8007891E;
extern char D_80011288[];
extern void (*D_80078918)();
extern u8 *D_80078914;

int DrawSync(int mode) {
    if (D_8007891E >= 2) {
        D_80078918(D_80011288, mode);
    }
    return (*(int (**)())(D_80078914 + 0x3C))(mode);
}
