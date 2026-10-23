#include "common.h"

void func_80012C7C(void *arg0) {
    u16 sp10;
    u16 sp12;
    s16 sp14;
    u16 sp16;
    s16 var_v0;

    if (!(M2C_FIELD(arg0, s32 *, 0) & 0x400)) {
        sp10 = M2C_FIELD(arg0, u16 *, 4);
        sp12 = M2C_FIELD(arg0, u16 *, 6);
        if (!(M2C_FIELD(arg0, s32 *, 0) & 0x200)) {
            var_v0 = M2C_FIELD(arg0, s16 *, 8);
            if (var_v0 < 0) {
                var_v0 += 3;
            }
            sp14 = (s16) (var_v0 >> 2);
        } else {
            sp14 = (s16) ((s16) (u16) M2C_FIELD(arg0, s16 *, 8) / 2);
        }
        sp16 = M2C_FIELD(arg0, u16 *, 0xA);
        if (!(M2C_FIELD(arg0, s32 *, 0) & 0x100)) {
            LoadImage(&sp10, arg0 + 0xC);
            return;
        }
        func_8001A8C0(arg0 + 0xC, 0x801CC000);
        LoadImage(&sp10, (void *)0x801CC000);
        DrawSync(0);
    }
}
