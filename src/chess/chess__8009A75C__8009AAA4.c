#include "ghidra.h"
#include "matching.h"
#include "common.h"

void func_8009AAA4(void *arg0) {
    typedef struct {
        u8 pad0[0x1C];
        u32 unk1C;
        u8 pad20[0xE0 - 0x20];
        u16 unkE0;
        u8 padE2[0x103 - 0xE2];
        u8 unk103;
    } D8ED68_t;
    typedef struct {
        u8 pad0[0xBB8];
        u32 unkBB8;
        u8 padBBC[0xBCA - 0xBBC];
        u8 unkBCA;
        u8 padBCB[0xBE9 - 0xBCB];
        u8 unkBE9;
        u8 unkBEA;
        u8 unkBEB;
    } Arg0_t;
    extern D8ED68_t D_8008ED68;
    extern void func_800AECE0(D8ED68_t *, void *, u8);
    extern void func_8009E1BC(void *);
    extern void func_800B0844(void *);
    extern void func_800A2810(void *);
    extern void func_800A33F8(void *);
    extern void func_800AF9DC(void *);
    extern void func_800A5850(void *);
    extern void func_800B4284(void *);
    extern void func_800B58EC(void *);
    extern void func_800B8A0C(void *);
    extern void func_800BA820(void *);
    extern void func_800BD8EC(void *);
    extern void func_800BD654(void *);
    extern void func_800BDBC0(void *);
    extern void func_800C28A8(void *);
    extern void func_800C416C(void *);
    extern void func_800AD4D8(void *);
    extern void func_8009F4AC(void *);
    extern void func_800C41E8(void *);
    Arg0_t *s0 = (Arg0_t *)arg0;
    D8ED68_t *ed = &D_8008ED68;

    func_800AECE0(ed, s0, s0->unkBCA);
    if (s0->unkBEB != 0) {
        func_8009E1BC(s0);
    }
    if (s0->unkBE9 != 0) {
        func_800B0844(s0);
    }
    switch (ed->unkE0) {
    case 0:
        func_800A2810(s0);
        break;
    case 1:
        func_800A33F8(s0);
        break;
    case 2:
        func_800AF9DC(s0);
        func_800A5850(s0);
        break;
    case 3:
        func_800B4284(s0);
        break;
    case 4:
        func_800B58EC(s0);
        break;
    case 5:
        func_800B8A0C(s0);
        break;
    case 6:
        func_800BA820(s0);
        break;
    case 7:
        func_800BD8EC(s0);
        break;
    case 8:
        func_800BD654(s0);
        break;
    case 9:
        func_800BDBC0(s0);
        break;
    case 10:
        func_800C28A8(s0);
        break;
    case 11:
        func_800C416C(s0);
        break;
    case 12:
        func_800AD4D8(s0);
        break;
    case 13:
        func_8009F4AC(s0);
        break;
    case 14:
        func_800C41E8(s0);
        break;
    }
    ed->unk1C += (ed->unk103 >= 2) ? ed->unk103 : 1;
    s0->unkBB8 += (ed->unk103 >= 2) ? ed->unk103 : 1;
}

