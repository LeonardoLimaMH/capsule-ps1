#include "common.h"

void func_80025FC0(s8 arg0, s32 arg1, s32 arg2, s32 arg3) {
    extern s8 D_80085428[];
    s32 temp_a0;

    (*D_80085428) = arg0;
    temp_a0 = arg0 & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 0:
        func_80026020(temp_a0);
        return;
    case 1:
        func_80026078(arg1 & 0xFFFF, arg2 & 0xFFFF, arg3 & 0xFFFF);
        return;
    }
}
