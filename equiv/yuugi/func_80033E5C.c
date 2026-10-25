#include "common.h"

extern u8 D_800922F0[], D_80070594[];
extern u16 D_80093510[];
extern s16 D_80078D3C;
extern void func_80033CEC(), func_80034C10(), func_8003727C(), func_80036DB0();

#define CNT (*(s16 *)(g + 0x134))
#define ENT(id) (D_80070594 + (id) * 8)

void func_80033E5C(u16 *list, s32 n) {
    u8 buf[16];
    u8 *g = D_800922F0;
    s32 i, j, k, m, found, lim;
    u16 val;

    CNT = 0;
    D_80078D3C = 0;
    for (i = 0; i < 0x99; i++) {
        *(s32 *)(*(u8 **)(g + 0x140) + i * 16 + 0xC) = 0;
    }
    CNT = 0;
    D_80078D3C = 0;
    for (j = 0; j < n; j++) {
        if (list[j] == 0xFFFF || *(u16 *)ENT(list[j]) == 0) {
            continue;
        }
        k = 0;
        do {
            found = 0;
            if (CNT > 0) {
                val = *(u16 *)(*(u8 **)(ENT(list[j]) + 4) + k * 2);
                lim = CNT;
                m = 0;
                do {
                    if (D_80093510[m] == val) {
                        found = 1;
                    }
                    m++;
                } while (m < lim);
            }
            if (!found) {
                D_80093510[CNT] = *(u16 *)(*(u8 **)(ENT(list[j]) + 4) + k * 2);
                *(u16 *)(g + 0x134) += 1;
            }
            k++;
        } while (k < *(u16 *)ENT(list[j]));
    }
    func_80033CEC(D_80093510, CNT);
    if (*(u16 *)D_800922F0 & 0x80) {
        func_80034C10(-4);
    }
    if (*(u16 *)D_800922F0 & 0xF) {
        func_8003727C(-0x20, 0);
        buf[0] = 0x26;
        func_80036DB0(buf);
    }
    buf[0] = 0x50;
    *(u16 *)D_800922F0 |= 2;
    func_80036DB0(buf);
    buf[0] = 0x52;
    *(u16 **)(buf + 0xC) = D_80093510;
    *(u16 *)(buf + 2) = *(u16 *)(g + 0x134);
    func_80036DB0(buf);
    buf[0] = 0x11;
    func_80036DB0(buf);
}
