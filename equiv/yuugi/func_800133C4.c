#include "common.h"

extern u8 D_8008ED68[];
extern void func_800133A4();

void func_800133C4(void) {
    func_8004FEDC();
    func_8004FE3C(0xF2000003, 2, 0x1000, func_800133A4);
    func_8004FE7C(*(s32 *)(D_8008ED68 + 0x10));
    SetRCnt(0xF2000003, 1, 0x1000);
    StartRCnt(0xF2000003);
    func_8004FEEC();
}
