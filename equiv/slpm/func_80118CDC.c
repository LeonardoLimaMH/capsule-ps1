/* stub-ret: mixed */
/* rand-mem: 0x80136B10 0x800 0x30 */
/* rand-mem: 0x80131D28 1 3 */
#include "common.h"

typedef struct { u8 b[4]; } U4;
extern u8 D_80136B10[];
extern u8 D_80135510[], D_80135514[], D_80135518[];
extern s32 D_80131D28, D_80132044;
extern char D_801108F4[], D_80110920[], D_80110928[], D_80110958[], D_8011097C[], D_8011099C[], D_801109B0[];
extern s32 func_801192E0(s32, u32, u8 *);
extern s32 strncmp(const char *, const char *, s32);
extern void slpm_memcpy(void *, const void *, s32);
extern s32 slpm_printf(const char *, ...);

s32 func_80118CDC(void) {
    U4 sec;
    s32 r, i, e;
    u8 *p, *end, *name;

    r = func_801192E0(1, 0x10, D_80136B10);
    if (r != 1) {
        if (D_80131D28 > 0) slpm_printf(D_801108F4);
        return 0;
    }
    if (strncmp((char *)D_80136B10 + 1, D_80110920, 5)) {
        if (D_80131D28 > 0) slpm_printf(D_80110928);
        return 0;
    }
    sec = *(U4 *)(D_80136B10 + 0x8C);
    if (func_801192E0(1, *(u32 *)&sec, D_80136B10) != r) {
        if (D_80131D28 > 0) slpm_printf(D_80110958, *(u32 *)&sec);
        return 0;
    }
    if (D_80131D28 >= 2) slpm_printf(D_8011097C);
    p = D_80136B10;
    end = p + 0x800;
    i = 0;
    while (p < end && *p != 0) {
        e = i * 44;
        *(U4 *)(D_80135518 + e) = *(U4 *)(p + 2);
        name = D_80135518 + 4 + e;
        *(s32 *)(D_80135510 + e) = i + 1;
        *(s32 *)(D_80135514 + e) = p[6];
        slpm_memcpy(name, p + 8, p[0]);
        name[p[0]] = 0;
        p += p[0] + ((p[0] & 1) + 8);
        if (D_80131D28 >= 2)
            slpm_printf(D_8011099C, *(u32 *)(D_80135518 + e), *(u32 *)(D_80135510 + e), *(u32 *)(D_80135514 + e), name);
        i++;
        if (i >= 0x80) goto done;
    }
    if (i < 0x80) *(s32 *)(D_80135514 + i * 44) = 0;
done:
    D_80132044 = 0;
    if (D_80131D28 >= 2) slpm_printf(D_801109B0, i);
    return 1;
}
