#include "common.h"

void func_800A9738(s32 arg0) {
    extern s32 D_800EE914[];
    (*D_800EE914) = arg0;
}


void func_800A9744(void) {
    typedef struct {
        s32 state;
        void *cells[27];
        s32 indices[9];
        s32 unk94;
        u8 r;
        u8 g;
        u8 b;
        u8 pad;
    } Result_800EE914;
    extern Result_800EE914 D_800EE914;
    extern s16 D_80078C22;
    extern u8 D_8008ED68[];
    extern u8 D_8009017C[];
    extern s32 D_800EE910;
    extern s32 rcos(s32);
    extern void PushMatrix(void);
    extern void PopMatrix(void);
    extern void func_8002CEC0(void *);
    extern void SetPolyF4(u8 *);
    extern void SetSemiTrans(u8 *, s32);
    extern s32 RotTransPers4(void *, void *, void *, void *, s32 *, s32 *, s32 *, s32 *, s32 *, s32 *);
    extern void AddPrim(void *, void *);

    s32 xy[6];
    u8 *work_base = D_8008ED68;
    Result_800EE914 *res;
    register s32 s asm("s3");
    s32 count;
    register s32 temp asm("v0");
    s32 i;

    if (D_800EE914.state == 0) {
        return;
    }

    switch (D_80078C22) {
    default:
        temp = 9;
        break;
    case 0:
        temp = 1;
        break;
    case 1:
        temp = 4;
        break;
    }
    count = temp;

    if (work_base[0x99A] != 1) {
        if (D_800EE914.unk94 != 0) {
            D_800EE914.unk94--;
        } else {
            D_800EE914.unk94 = 0x40;
        }
    }

    res = &D_800EE914;
    {
        s32 r = rcos((res->unk94 / 4) << 8);
        if (r < 0) {
            r += 127;
        }
        s = (u32)r >> 7;
    }
    PushMatrix();
    func_8002CEC0(D_8009017C);

    i = 0;
    if (count != 0) {
        register Result_800EE914 *r2 asm("s2") = res;
        do {
            register u8 *w asm("v0") = *(u8 **)work_base;
            register u8 *next asm("a2") = NULL;
            register u8 *p asm("s0") = *(u8 **)(w + 0x1090);
            register u8 *w_reg asm("a1") = w;
            u8 *v;
            s32 rot_ret;
            register s32 z asm("a0");
            register u32 c0 asm("v1");
            register u32 c1 asm("a0");
            register u32 c2 asm("a1");
            register s32 d_800ee910 asm("a2");

            if (p != NULL) {
                u8 *next_p = p + 0x18;
                if (!(w_reg + 0x4594 < next_p)) {
                    next = next_p;
                }
            }
            *(u8 **)(w_reg + 0x1090) = next;
            SetPolyF4(p);
            SetSemiTrans(p, 0);

            v = (u8 *)r2->cells[i];
            rot_ret = RotTransPers4(v + 8, v + 0x10, v + 0x18, v + 0x20, &xy[0], &xy[1], &xy[2], &xy[3], &xy[4], &xy[5]);

            d_800ee910 = D_800EE910;
            c0 = r2->r;
            c1 = r2->g;
            c2 = r2->b;
            c0 += s;
            c1 += s;
            c2 += s;
            p[4] = c0;
            p[5] = c1;
            p[6] = c2;

            *(u16 *)(p + 0x8) = ((u16 *)xy)[0];
            *(u16 *)(p + 0xA) = ((u16 *)xy)[1];
            *(u16 *)(p + 0xC) = ((u16 *)xy)[2];
            *(u16 *)(p + 0xE) = ((u16 *)xy)[3];
            *(u16 *)(p + 0x10) = ((u16 *)xy)[4];
            *(u16 *)(p + 0x12) = ((u16 *)xy)[5];
            *(u16 *)(p + 0x14) = ((u16 *)xy)[6];
            *(u16 *)(p + 0x16) = ((u16 *)xy)[7];

            z = rot_ret + d_800ee910;
            if ((u32)(z - 1) < 0x3FF) {
                u8 *prim = p;
                AddPrim(*(u8 **)work_base + (z * 4 + 0x70), prim);
            }
            i++;
        } while (i < count);
    }
    PopMatrix();
}

void func_800A99AC(s32 arg0, s32 arg1) {
    typedef struct {
        s32 state;
        s32 cells[27];
        s32 indices[9];
        s32 unk94;
    } Result_800EE914;
    extern s16 D_80078C22;
    extern s32 D_800900C0[];
    extern Result_800EE914 D_800EE914;
    Result_800EE914 *res;
    s32 i;
    s32 count;
    s32 step;
    s32 temp;

    D_800EE914.state = 0;
    switch (D_80078C22) {
    case 0:
        temp = 1;
        break;
    case 1:
        temp = 4;
        break;
    default:
        temp = 9;
        break;
    }
    count = temp;

    i = 0;
    if (count != 0) {
        step = D_80078C22 + 1;
        res = &D_800EE914;
        do {
            s32 y = i / step;
            s32 x = i % step;
            s32 val = (arg0 - y) * 8 + (arg1 - x);
            res->indices[i] = val;
            res->cells[i] = D_800900C0[0x15C / 4] + val * 0x2C;
            i++;
        } while (i < count);
    }

    D_800EE914.unk94 = 0x40;
    D_800EE914.state = 1;
}

s32 func_800A9A74(void)
{
  extern struct {
    s32 f0;
    s32 f4;
  } D_800EEB9C;
  if (D_800EEB9C.f4 <= 0)
  {
    if (D_800EEB9C.f0)
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
    else
    {
      D_800EEB9C.f0 = 0;
      return -1;
    }
  }
  D_800EEB9C.f4 = (s32) (D_800EEB9C.f4 - 1);
  func_800B7298(D_800EEB9C.f0);
  return 0;
}

typedef struct {
    u8 pad[0x38];
    u32 flags;
} WorkSlotRecordTask;
typedef struct {
    u8 pad[0x18C];
    WorkSlotRecordTask *task;
    u8 middle[0x21F];
    u8 slots[32];
    u8 tail[0x3C9];
    u32 state;
} WorkSlotRecord;

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9AC0);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9D6C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800A9F84);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA0E4);

s32 func_800AA45C(void) {
    typedef struct {
        u8 pad[0xA68];
        s32 unkA68;
    } S_8ED68;
    extern S_8ED68 D_8008ED68[];
    extern s32 D_800ED8DC[];
    S_8ED68 *p = D_8008ED68;

    if (*D_800ED8DC == 1) {
        if (p->unkA68 != 0) {
            return 0;
        }
    }
    return -1;
}

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA494);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA60C);

INCLUDE_ASM("asm/raise/nonmatchings/raise_8009D2A8__800A9738", func_800AA77C);

void func_800AA8D0(u32 player) {
    extern WorkSlotRecord D_80100F38[];
    WorkSlotRecord *record = &D_80100F38[player & 0xFFFF];
    record->slots[(record->state >> 26) & 31] = 0;
    record->task->flags |= 1;
}

void func_800AA930(s32 idx) {
    typedef struct {
        u8 pad[0x38];
        u32 flags;
    } Obj_800AA930;
    typedef struct {
        u8 pad[0x21C];
        Obj_800AA930 *obj;
        u8 pad2[0x189];
        u8 slots[32];
        u8 pad3[0x3CD];
        u32 state;
    } Player_800AA930;
    extern Player_800AA930 D_80100F38[];
    Player_800AA930 *rec = &D_80100F38[idx & 0xFFFF];
    u32 w;

    rec->obj->flags |= 1;
    w = rec->state;
    rec->obj = 0;
    rec->slots[(w >> 26) & 0x1F] = 0;
}
