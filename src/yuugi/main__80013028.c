#include "common.h"
#include "yuugi.h"

#include "common.h"

typedef struct {
    u32 mode;
    void *crect;
    u32 *caddr;
    void *prect;
    u32 *paddr;
} Tim;

/* Estado de um controle (D_8008ED68 + 0x80 + i * 0x10). */
typedef struct {
    u32 now;
    u32 old;
    u32 trig;
    u32 rel;
} PadState;

/* Visão parcial de D_8008ED68 usada pelas rotinas de controle. */
typedef struct {
    u8 unk0[0x80];
    PadState pad[2];
    u8 unkA0[4];
    u32 hold[2][4];
} PadWork;

extern s32 ReadTIM();
extern s32 func_80019F30();

void func_80013028(u8 *p) {
    Tim t;
    u32 packed;

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

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028", func_800130D8);

#include "common.h"

s32 func_8001312C(s32 arg0, s32 arg1) {
    extern u8 D_8008ED68[];
    u8 *temp_a0;
    u8 *base = D_8008ED68;

    temp_a0 = base + arg0 * 0x22;
    if (((temp_a0[0x3D] >> 4) == 4) && (arg1 == 0)) {
        return temp_a0[0x3F] | (temp_a0[0x3E] << 8);
    }
    return 0xFFFF;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main__80013028", func_80013180);

void func_800131C0(void) {
    extern u8 D_8008ED68[];
    extern void func_8004FEDC(), func_8004FEEC();
    u32 st[2];
    u8 *p;
    u32 *s1;
    u32 v, cur, old, *c;
    s32 i, j;

    func_8004FEDC();
    for (i = 0; i < 2; i++) {
        p = D_8008ED68 + i * 0x22;
        s1 = ((u32 (*)[4])D_8008ED68)[i];
        if ((p[0x3D] >> 4) == 4) {
            v = p[0x3F] | (p[0x3E] << 8);
        } else {
            v = 0xFFFF;
        }
        st[i] = ~v & 0xFFFF;
        func_8004FEEC();
        cur = st[i];
        old = s1[0x80 / 4];
        s1[0x84 / 4] = old;
        s1[0x80 / 4] = cur;
        s1[0x88 / 4] = ~old & cur;
        s1[0x8C / 4] = ~cur & s1[0x84 / 4];
    }
    for (i = 0; i < 2; i++) {
        c = &((u32 (*)[4])D_8008ED68)[i][0xA4 / 4];
        for (j = 0; j < 4; j++, c++) {
            if (((u32 (*)[4])D_8008ED68)[i][0x80 / 4] & (1 << (j + 12))) {
                if (D_8008ED68[0x103] >= 2) {
                    *c = *c + D_8008ED68[0x103];
                } else {
                    *c = *c + 1;
                }
            } else {
                *c = 0;
            }
        }
    }
}
