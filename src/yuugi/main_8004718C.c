#include "common.h"
#include "yuugi.h"

void DsDataSync(void) {
    CD_datasync();
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004718C", DsIntToPos);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004718C", DsPosToInt);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004718C", DsSetDebug);
