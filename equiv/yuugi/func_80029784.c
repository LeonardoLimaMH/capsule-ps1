#include "common.h"

extern s16 D_80078C28, D_80078C2C;
extern s32 D_80069B28;
extern u8 D_80091618[];
extern void PushMatrix(), PopMatrix(), func_8002CEC0(), func_80029A9C(), func_80029B28();
extern void func_80029C90(), func_80029E90(), func_8002A090(), func_8002A290(), func_8002A490();
extern void func_8002A734(), func_8002A934(), func_8002AB68(), func_8002AD68();
extern void func_8002AF9C(), func_8002B138(), func_8002B334(), func_8002B4D0(), func_8002B66C();
extern void func_8002B7E8();
extern s32 func_800B1260();

void func_80029784(s32 a0, s32 *p, s32 a2) {
    s32 v, s1, t;
    u16 id;

    PushMatrix();
    func_8002CEC0(p);
    v = p[0];
    s1 = p[1];
    if (v == 1) {
        if (D_80078C28 != 0 && D_80078C2C < 0xE) {
            func_80029A9C(p);
            p[0] = 0;
        } else {
            func_80029B28(p);
            p[0] = 0;
        }
        v = p[0];
    }
    if (v == 0 && D_80069B28 != 0) {
        switch (p[2]) {
        case 0:
            func_80029C90(p, a2);
            break;
        case 1:
            func_80029E90(p, a2);
            break;
        case 2:
            func_8002A090(p, a2);
            break;
        case 3:
            func_8002A290(p, a2);
            break;
        }
    } else if (s1 == 1 || s1 == 4) {
        t = s1 == 1;
        id = func_800B1260(t);
        if (id != 0xFFFF) {
            if (*(u16 *)(D_80091618 + id * 0x1A8 + 0x10) == 0 && D_80078C28 == 0) {
                func_8002A490(p, a2, t);
            } else {
                switch (p[2]) {
                case 0:
                    func_8002A734(p, a2, t);
                    break;
                case 1:
                    func_8002A934(p, a2, t);
                    break;
                case 2:
                    func_8002AB68(p, a2, t);
                    break;
                case 3:
                    func_8002AD68(p, a2, t);
                    break;
                }
            }
        }
    } else {
        switch (p[2]) {
        case 0:
            func_8002AF9C(p, a2);
            break;
        case 1:
            func_8002B138(p, a2);
            break;
        case 2:
            func_8002B334(p, a2);
            break;
        case 3:
            func_8002B4D0(p, a2);
            break;
        case 4:
            func_8002B66C(p, a2);
            break;
        case 5:
            func_8002B7E8(p, a2);
            break;
        }
    }
    PopMatrix();
}
