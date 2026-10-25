#include "common.h"

extern u8 D_80131B35[];
extern char D_8011044C[];
extern void (*D_80131B30)();
extern u8 *D_80131B2C;

s32 slpm_SetGraphQueue(s32 mode) {
    u8 old = D_80131B35[0];

    if (D_80131B35[1] >= 2) {
        D_80131B30(D_8011044C, mode);
    }
    if (mode != D_80131B35[0]) {
        (*(void (**)())(D_80131B2C + 0x34))(1);
        D_80131B35[0] = mode;
        slpm_DMACallback(2, 0);
    }
    return old;
}
