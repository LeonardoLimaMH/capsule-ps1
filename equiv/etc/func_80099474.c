#include "common.h"

extern u8 D_8008ED68[], D_80085428[];
extern u8 D_800859F0;
extern s32 D_800B3AC8;
extern s32 func_80012508(void), func_80012578(void), func_80019654(void), func_800337EC(void);
extern s32 func_800338DC(s32);

s32 func_80099474(void) {
    s32 r, flag;
    switch (*(u16 *)(D_8008ED68 + 0xE0)) {
    case 0:
        D_800B3AC8 = 0;
        flag = *(s32 *)(D_8008ED68 + 0xA20);
        *(u16 *)(D_80085428 + 8) = 0x7003;
        if (flag == 1 || !(D_80085428[0x5C8] & 4)) return func_80012508();
        return func_80012578();
    case 1:
        r = func_80019654();
        if (r == 0) return r;
        return func_80012578();
    case 2:
        func_800338DC(0x7003);
        return func_80012578();
    case 3:
        if (!(D_800859F0 & 4)) return func_80012508();
        r = func_800337EC() & 0x80;
        if (r == 0) return r;
        return func_80012508();
    }
    return 0x80080000; /* lixo do %hi no delay slot */
}
