#include "common.h"

s32 slpm_PadRead(void) {
    extern s32 D_80137338[];
    func_8011AC64();
    return ~(*D_80137338);
}
