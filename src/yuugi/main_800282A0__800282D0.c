#include "common.h"
#include "yuugi.h"

s32 func_800282D0(void) {
    extern s32 D_80078C3C;
    extern s32 D_80078C40;
    D_80078C40 = 0;
    D_80078C3C = 0;
    return 0;
}

s32 func_800282E0(void)
{
  extern u16 D_80078C34;
  extern s32 D_80078C3C;
  extern s32 D_80078C40;
  switch (D_80078C40)
  {
    case 0:
 do { func_800338DC(D_80078C34); D_80078C40 += 1; } while (0);
      return 0;

    case 1:
      if (func_80019654() != 0)
    {
      D_80078C40 = 0;
      D_80078C3C = 0;
      return 1;
    }
      return 0;

    default:
      return 0;

  }

}

void func_8002835C(void) {
    extern struct { u8 pad[0x40]; s32 n; s32 a[1]; } D_800EF524;
    extern s32 D_80069EA0[];
    extern s32 D_800EF360[];
    s32 i;

    D_80069EA0[0] = D_800EF524.n != 0;
    if (D_80069EA0[0] != 0) {
        if (D_800EF360[0] == -1) {
            D_800EF360[0] = 0;
        }
        for (i = 0; i < D_800EF524.n; i++) {
            if (D_800EF524.a[i] != -1) {
                func_8002840C(0xF, i + 7);
            }
        }
    }
}

#include "common.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

extern s32 ReadTIM();
extern s32 func_80019F30();

void func_8002840C(s32 a) {
    u8 *p;

    Tim t;
    u32 packed;

    p = (u8 *)func_80019F30(a | 0xF0000) + 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}

void func_800284C8(s32 a) {
    u8 *p;

    Tim t;
    u32 packed;

    p = (u8 *)func_80019F30(a | 0xF0000);
    if (p == 0) {
        return;
    }
    p += 4;
    OpenTIM(p);
    packed = *(u32 *)(p - 4) & 0x100;
    if (ReadTIM(&t) == 0) {
        return;
    }
    if (t.caddr != 0) {
        LoadImage(t.crect, t.caddr);
    }
    if (t.paddr == 0) {
        return;
    }
    if (packed) {
        func_8001A8C0(t.paddr, 0x801CC000);
        LoadImage(t.prect, 0x801CC000);
        DrawSync(0);
    } else {
        LoadImage(t.prect, t.paddr);
    }
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002858C);

s32 func_800293E8(void) {
    extern s16 D_80069AB4[];
    extern struct { u8 pad[0x12]; u16 n; u16 a[(0x1A8 - 0x14) / 2]; } D_80091618[];
    u32 id = (u16)func_800B1260();
    u16 i, n;

    if (id == 0xFFFF) {
        return 0;
    }
    n = D_80091618[id].n;
    for (i = 0; i < n; i++) {
        if (D_80069AB4[D_80091618[id].a[i]] >= 2) {
            return 1;
        }
    }
    return 0;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_800294AC);

s32 func_800296C0(s32 a0, s32 a1) {
    extern u8 D_800EF364[];
    extern struct { u8 pad[0x10]; u16 f10; u8 pad2[0x1A8 - 0x12]; } D_80091618[];
    u32 id = (u16)func_800B1260(a0);
    u16 t;
    s32 row;
    s32 idx;
    u8 *b;
    u8 *p;

    if (id != 0xFFFF) {
        t = D_80091618[id].f10;
        if (t == 0xFFFF) {
            return 0;
        }
        if (t == 1 || t == 5 || t == 3) {
            goto found;
        }
    }
    return 0;
found:
    row = a1 / 8;
    idx = row * 8 + a1 % 8;
    b = D_800EF364;
    p = (t << 6) + b;
    return p[idx] == 0xFF;
}

extern s16 D_80078C28, D_80078C2C;
extern s32 D_80069B28[];
extern u8 D_80091618[];
typedef struct { u8 pad[0x10]; u16 f10; u8 pad2[0x1A8 - 0x12]; } S_1A8;
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
    }
    if (p[0] == 0 && D_80069B28[0] != 0) {
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
            if (((S_1A8 *)D_80091618)[id].f10 == 0 && D_80078C28 == 0) {
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

void func_80029A9C(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 var_s0;
    s32 var_s1;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
        var_s0 = 0;
        if (temp_s2 > 0) {
            do {
                func_800D87E8(arg0, var_s0, var_s1);
                var_s0 += 1;
                var_s1 += 0x2C;
            } while (var_s0 < temp_s2);
        }
    }
}

#include "common.h"
#include "gte_inline.h"

void func_80029B28(void *arg0) {
    extern s32 D_80069B28[];
    extern s32 D_80069EB8[];
    s32 temp_s2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;

    if (((*D_80069B28) != 0) && ((*D_80069EB8) == 0)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 8);
        temp_s2 = M2C_FIELD(arg0, s32 *, 0xC);
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_s1 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0, var_s1);
                    var_s0 += 1;
                    var_s1 += 0x2C;
                } while (var_s0 < temp_s2);
                return;
            }
            break;
        case 1:
            var_s1_2 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_2 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_2, var_s1_2);
                    var_s0_2 += 1;
                    var_s1_2 += 0x2C;
                } while (var_s0_2 < temp_s2);
                return;
            }
            break;
        case 2:
            var_s1_3 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_3 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_3, var_s1_3);
                    var_s0_3 += 1;
                    var_s1_3 += 0x50;
                } while (var_s0_3 < temp_s2);
                return;
            }
            break;
        case 3:
            var_s1_4 = M2C_FIELD(arg0, s32 *, 0xA0);
            var_s0_4 = 0;
            if (temp_s2 > 0) {
                do {
                    func_80023C74(arg0, var_s0_4, var_s1_4);
                    var_s0_4 += 1;
                    var_s1_4 += 0x50;
                } while (var_s0_4 < temp_s2);
            }
            break;
        }
    }
}

extern s32 func_800D8AF8(void *, s32), func_80023ECC(void *, s32), func_8002BD08(void *, void *, s32);
INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029C90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_80029E90);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A090);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A290);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A490);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A734);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002A934);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AB68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AD68);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002AF9C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B138);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B334);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B4D0);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B66C);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B7E8);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002B964);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD08);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BD94);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BE20);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_800282A0__800282D0", func_8002BEAC);
