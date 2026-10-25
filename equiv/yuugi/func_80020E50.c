#include "common.h"

extern u8 *func_80015B3C();
extern void func_80018600();

u8 *func_80020E50(u8 *src, s32 a1) {
    u8 *obj = func_80015B3C(a1, func_80018600);

    func_8001602C(obj);
    *(s32 *)(obj + 0xC) = *(s32 *)(src + 0xC);
    func_8001AA70(obj + 0x18, src + 0x18, 0x34);
    return obj;
}
