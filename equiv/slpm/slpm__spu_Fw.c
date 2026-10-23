#include "common.h"

s32 slpm__spu_Fw(s32 arg0, s32 arg1) {
    extern u16 D_801333EC[];
    extern s32 D_801333F0[];
    extern s32 D_801333FC[];
    if ((*D_801333F0) == 0) {
        slpm__spu_t(2, (*D_801333EC) << (*D_801333FC));
        slpm__spu_t(1);
        slpm__spu_t(3, arg0, arg1);
        return arg1;
    }
    func_8011EC84(arg0, arg1);
    return arg1;
}
