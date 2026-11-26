#include "common.h"
#include "yuugi.h"

void func_8002E7A4(void) {
    extern u8 D_80085428[], D_8006D89C[], D_8006DA24[], D_8006DA38[];
    struct DadosE7A4 {
        u8 pad0[0xF0];
        u16 fF0;
        u8 padF2[0xA20 - 0xF2];
        s32 fA20;
    };
    extern struct DadosE7A4 D_8008ED68[];
    struct EstadoE7A4 {
        s16 f0, f2, f4, f6;
        s32 f8;
        u8 padC[0x1A - 0xC];
        s16 f1A;
    };
    extern struct EstadoE7A4 D_800922D0[];
    extern s32 D_8008F788[], D_800922D8[], D_80078D28;
    extern u8 *func_80033020();
    extern u8 *func_80032F50();
    extern s32 func_8001F1A8(s16, s16, s32, s32, s32, s32, s32, s32, s32);
    extern void func_8001F35C(), func_80033974();
    extern void func_80032610(void *), func_80032CF4(void *), func_80032760(void *), func_80032B0C(void *), func_800327CC(void *);
    extern void func_80032888(void *), func_80032C54(void *), func_80032BB8(void *), func_80032A28(void *), func_80032944(void *);
    u8 *G = D_80085428;
    struct DadosE7A4 *D;
    u8 *o;
    s32 r;
    register s32 i asm("s1");
    s32 pos;
    void (*cb)(void *);
    s32 c, x, y, id, v, s1, yy;
    s32 rr;
    register s32 t asm("s2");

    func_80033020(-0x30, -0x68, 0, 0, func_80032610);
    func_80033020(-0x20, 0x18, 0, 1, func_80032CF4);
    func_80032F50(-0x90, -0x74, 0, 0, func_80032760);
    i = 0;
    cb = func_80032B0C;
    for (pos = -0x50; i < 3; i++, pos += 0x40) {
        *(s32 *)(func_80032F50(-0x90, pos, 0, 0xD, cb) + 0x80) = i;
    }
    func_80032F50(-0x90, -0x70, 0, 0xB, func_800327CC);
    func_80032F50(-0x90, -0x70, 0, 0xC, func_80032888);
    i = 0;
    cb = func_80032C54;
    for (pos = -0x30; i < 2; i++, pos += 0x40) {
        *(s32 *)(func_80032F50(pos, 0x18, 0, i + 0xF, cb) + 0x80) = i;
    }
    func_80032F50(-0x70, -0x20, 0, 0xE, func_80032BB8);
    for (r = 0; r < 2; r++) {
        for (c = 0; c < 8; c++) {
            o = func_80032F50(8 + c * 15, r * 16 + 8, 0, c + 0x16, func_80032A28);
            *(s32 *)(o + 0x80) = c;
            *(s32 *)(o + 0x84) = r;
        }
    }
    if (G[0] != 3 && (u32)D_8008F788[0] < 2) {
        void (*cb2)(void *);
        rr = 0;
        t = rr;
        cb2 = func_80032944;
        for (yy = -0xA0; rr < 5; rr++, yy += 0x40) {
            for (c = 0; c < 6;) {
                s32 odd = rr & 1;
                y = yy;
                x = odd ? 0xA0 : -0xE0;
                if (rr & 1) {
                    id = t != 0 ? 0x1E : 0x1F;
                } else {
                    id = t != 0 ? 0x1F : 0x1E;
                }
                o = func_80032F50(x, y, 2, id, cb2);
                *(s16 *)(o + 0x6A) = c + 1;
                if (rr & 1) {
                    *(s16 *)(o + 0x6A) = -(c + 1);
                }
                *(s32 *)(o + 0x84) = c;
                c++;
                {
                    register u32 flags asm("v0") = *(u32 *)(o + 0x38);
                    t ^= 1;
                    *(s32 *)(o + 0x80) = rr;
                    *(u32 *)(o + 0x38) = flags | 8;
                }
                {
                    s32 level = *(volatile u8 *)G;
                    u16 value = *(volatile u16 *)(o + 0x66);
                    *(u16 *)(o + 0x66) = level + 2 + value;
                }
            }
        }
    }
    D = D_8008ED68;
    if (D->fA20 != 0) {
        G[0x5CB] = 2;
        D_800922D0[0].f8 = 2;
        func_80033974(0);
        if ((u32)D->fA20 >= 5) {
            D_800922D0[0].f1A = 0;
        } else {
            D_800922D0[0].f1A = 1;
        }
        D_800922D0[0].f4 = 0;
        D_8008ED68[0].fF0 = 4;
        D_800922D0[0].f0 = 0;
        if (G[0x5D0] != 2) {
            func_8001F1A8(-0x68, 0, 3, 1, 0, (s32)D_8006D89C, 1, 0xF, 0);
        } else {
            v = D_8008ED68[0].fA20;
            s1 = 1;
            if (v == 7 || v == 4) {
                s1 = 2;
            }
            func_8001F1A8(-0x64, -8, 3, 1, 0, (s32)D_8006DA24, 1, 9, 0);
            func_8001F35C(-2, -8, 3, 1, 0, s1, 1, 0);
            func_8001F1A8(-0x64, 8, 3, 1, 0, (s32)D_8006DA38, 1, 8, 0);
        }
    } else {
        s32 mode = G[0];
        if (mode == 3) {
        G[0x5CB] = 1;
        D_800922D8[0] = 1;
        D->fF0 = mode;
    } else {
        D_80078D28 = 0x41;
        D->fF0 += 1;
    }
    }
}


extern u8 D_80085428[];
extern s32 D_8008F6B8[];


extern s32 func_8001F1A8(s16, s16, s32, s32, s32, s32, s32, s32, s32);



extern u8 D_8008F702[];
extern u32 D_800922D8[];
extern void func_80033450();
extern s32 func_800185F8();

/* o valor em v0 na saída é o que sobra nos registradores do original (no caso 0, o
   endereço lido da tabela de saltos) */


extern u8 *func_80015B3C();
extern s32 func_8001A434();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];


extern u8 *func_80015B3C();
extern s32 func_8001A44C();
extern void func_8003350C();
extern void func_800161C4();
extern u8 D_80065390[];



extern u8 D_800922F0[];

extern void func_800371A4(), func_8003CD70(), func_8003CE14(), func_8003CA90();
extern void func_80033BD0(), SpuSetKey(), func_80036DB0();
extern s32 func_8003D518();

