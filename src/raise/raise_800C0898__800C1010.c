#include "common.h"

typedef struct {
    s16 unk_0;
    s16 unk_2;
    u16 idx;
    u16 cnt;
    s16 unk_8;
    s16 a[32];
    s16 b[32];
    s16 c[32];
} D_80100E60_t;

extern D_80100E60_t D_80100E60;
extern u8 D_80100F38[];
extern s32 func_800B1260(s32);
extern s32 func_800E1820(s32);
extern s32 func_800E17F8(s32);
extern void func_800C0EE8(s32, s16, s16);




void func_800C1010(u8 *arg0, s32 arg1) {
    typedef struct {
        u16 unk00;
        u8 pad02[0x1A6];
    } S_91618;
    typedef struct {
        u8 pad00[0x10];
        u32 f10_0 : 24;
        u32 f10_24 : 6;
        u32 f10_30 : 4 __attribute__((packed));
        u32 f14_2 : 30;
        u8 pad18[0x24];
    } S_63940;
    extern S_91618 D_80091618[];
    extern S_63940 D_80063940[];
    extern u8 D_800F170C[];
    extern s16 D_800F190C[];
    extern s16 D_80103EC2[];
    extern void func_800CEC68(s32, s32, s32);
    extern s32 func_800E3A04(s32, void *, void *);
    extern void func_800C5850(void *, void *, s32, s32, s32);

    s32 k;
    s32 side;
    u8 *rec;
    s16 *p;
    u8 cmd;
    void (*fn)(u8 *, s32);
    s16 cur;

    k = func_800B1260(arg1);
    if ((u16)k != 0xFFFF) {
        side = arg1 != 1;
        rec = D_80100F38 + (u16)k * 0x79C;
        if (*(s16 *)(rec + 0x388) != 2) {
            register s16 *base asm("v0") = D_800F190C;
            p = &base[side];
            cmd = **(u8 **)(rec + 0x2BC);
            *p = cmd;
            fn = *(void (**)(u8 *, s32))(D_800F170C + cmd * 4);
            if (*(s16 *)(rec + 0x344) == 0) {
                func_800CEC68(arg1, *(s16 *)(rec + 0x336), *(s16 *)(rec + 0x338));
            }
            fn(arg0, arg1);
            cur = *p;
            if (cur == 0x52 || cur == 0xD || cur == 0x53 || cur == 0x69 || cur == 0x79 ||
                cur == 0x7A || cur == 0x71 || cur == 0x74 || cur == 0x77 || cur == 0x70) {
                if ((D_800F190C[side] != 0x52 && D_800F190C[side] != 0x53) ||
                    *(s16 *)(rec + 0x37E) == 0) {
                    goto after_pos;
                }
            }
            *(s16 *)(arg0 + 0x4E) = func_800E3A04(arg1, rec + 0x1CC, &arg0);
after_pos:
            if (D_80103EC2[0] == 1 && *(void **)(rec + 0x180) != NULL) {
                u16 id = D_80091618[(u16)k].unk00;
                s8 val = D_80063940[id].f10_24;
                short res = val;
                if (D_80063940[id].f10_30 == 0) {
                    res = (D_80063940[id].f10_24 * 4) / 5;
                }
                func_800C5850(arg0, *(void **)(rec + 0x180), 0, (s16)-res, -1);
            }
        }
    }
}


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

extern u8 D_800F170C[];


extern u8 D_80100F38[];
extern s32 func_800B1260(s32);

#define PL(a) (D_80100F38 + (func_800B1260(a) & 0xFFFF) * 0x79C)
#define P32(o) (*(s32 *)(p + (o)))
#define P16(o) (*(u16 *)(p + (o)))
#define PS16(o) (*(s16 *)(p + (o)))

