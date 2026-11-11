#include "common.h"
#include "yuugi.h"

/* ReadTMD: C do SDK PsyQ importado de https://github.com/afsenovilla/Tombi-Decomp (MIT),
   arquivo src/ReadTMD.c; reduzido às declarações de que a função depende
   (tools/ext_import.py). */
typedef struct {
    short vx, vy;
    short vz, pad;
} SVECTOR;

typedef struct {
    u_long id;
    u_char r0, g0, b0, p0;
    u_char r1, g1, b1, p1;
    u_char r2, g2, b2, p2;
    u_char r3, g3, b3, p3;
    u_short tpage, clut;
    u_char u0, v0, u1, v1;
    u_char u2, v2, u3, v3;
    SVECTOR x0, x1, x2, x3;
    SVECTOR n0, n1, n2, n3;
    SVECTOR* v_ofs;
    SVECTOR* n_ofs;
    u_short vert0, vert1;
    u_short vert2, vert3;
    u_short norm0, norm1;
    u_short norm2, norm3;
} TMD_PRIM;

extern TMD_PRIM* ReadTMD(TMD_PRIM* tmdprim);

typedef unsigned char PACKET;

typedef struct {
    short x;
    short y;
    short w;
    short h;
} RECT;

typedef struct {
    u_long mode;
    RECT* crect;
    u_long* caddr;
    RECT* prect;
    u_long* paddr;
} TIM_IMAGE;

/* Strings de depuração do get_tim_addr (rodata) */
extern char D_800113D0[];
extern char D_800113DC[];
extern char D_800113E8[];

extern s32 D_800965C4;

extern s32 D_800965C8;

extern s32 D_800965CC;

TMD_PRIM* ReadTMD(TMD_PRIM* tmdprim)
{
    s32 packet;
    packet = func_8004CDD4((u8* ) D_800965CC, tmdprim);
    if (packet < 0) return 0;
    D_800965CC += packet;
    tmdprim->v_ofs = (SVECTOR*)(D_800965C4);
    tmdprim->n_ofs = (SVECTOR*)(D_800965C8);
    do { (tmdprim->n0).vx = (*(SVECTOR *)((tmdprim->norm0 * 8) + D_800965C8)).vx; (tmdprim->n0).vy = (*(SVECTOR *)((tmdprim->norm0 * 8) + D_800965C8)).vy; (tmdprim->n0).vz = (*(SVECTOR *)((tmdprim->norm0 * 8) + D_800965C8)).vz; } while(0);
    do { (tmdprim->n1).vx = (*(SVECTOR *)((tmdprim->norm1 * 8) + D_800965C8)).vx; (tmdprim->n1).vy = (*(SVECTOR *)((tmdprim->norm1 * 8) + D_800965C8)).vy; (tmdprim->n1).vz = (*(SVECTOR *)((tmdprim->norm1 * 8) + D_800965C8)).vz; } while(0);
    do { (tmdprim->n2).vx = (*(SVECTOR *)((tmdprim->norm2 * 8) + D_800965C8)).vx; (tmdprim->n2).vy = (*(SVECTOR *)((tmdprim->norm2 * 8) + D_800965C8)).vy; (tmdprim->n2).vz = (*(SVECTOR *)((tmdprim->norm2 * 8) + D_800965C8)).vz; } while(0);
    do { (tmdprim->n3).vx = (*(SVECTOR *)((tmdprim->norm3 * 8) + D_800965C8)).vx; (tmdprim->n3).vy = (*(SVECTOR *)((tmdprim->norm3 * 8) + D_800965C8)).vy; (tmdprim->n3).vz = (*(SVECTOR *)((tmdprim->norm3 * 8) + D_800965C8)).vz; } while(0);
    do { (tmdprim->x0).vx = (*(SVECTOR *)((tmdprim->vert0 * 8) + D_800965C4)).vx; (tmdprim->x0).vy = (*(SVECTOR *)((tmdprim->vert0 * 8) + D_800965C4)).vy; (tmdprim->x0).vz = (*(SVECTOR *)((tmdprim->vert0 * 8) + D_800965C4)).vz; } while(0);
    do { (tmdprim->x1).vx = (*(SVECTOR *)((tmdprim->vert1 * 8) + D_800965C4)).vx; (tmdprim->x1).vy = (*(SVECTOR *)((tmdprim->vert1 * 8) + D_800965C4)).vy; (tmdprim->x1).vz = (*(SVECTOR *)((tmdprim->vert1 * 8) + D_800965C4)).vz; } while(0);
    do { (tmdprim->x2).vx = (*(SVECTOR *)((tmdprim->vert2 * 8) + D_800965C4)).vx; (tmdprim->x2).vy = (*(SVECTOR *)((tmdprim->vert2 * 8) + D_800965C4)).vy; (tmdprim->x2).vz = (*(SVECTOR *)((tmdprim->vert2 * 8) + D_800965C4)).vz; } while(0);
    do { (tmdprim->x3).vx = (*(SVECTOR *)((tmdprim->vert3 * 8) + D_800965C4)).vx; (tmdprim->x3).vy = (*(SVECTOR *)((tmdprim->vert3 * 8) + D_800965C4)).vy; (tmdprim->x3).vz = (*(SVECTOR *)((tmdprim->vert3 * 8) + D_800965C4)).vz; } while(0);
    return tmdprim;
}

s32 func_8004CDD4(PACKET* arg0, TMD_PRIM* arg1);

extern char D_800113D0[];
extern char D_800113DC[];
extern char D_800113E8[];
u8 GetGraphDebug(void);
int printf();
s32 func_8004CB48(u_long *tim, u_long *timimg)
{
    u_long n;

    if (*tim++ != 0x10) {
        return -1;
    }
    timimg[0] = *tim++;
    if (GetGraphDebug() == 2) {
        printf(D_800113D0, 0x10);
    }
    if (GetGraphDebug() == 2) {
        printf(D_800113DC, timimg[0]);
    }
    if (GetGraphDebug() == 2) {
        printf(D_800113E8, tim);
    }
    if (timimg[0] & 8) {
        timimg[1] = (u_long)(tim + 1);
        timimg[2] = (u_long)(tim + 3);
        n = *tim >> 2;
        tim += n;
    } else {
        n = 0;
        timimg[1] = 0;
        timimg[2] = 0;
    }
    timimg[3] = (u_long)(tim + 1);
    timimg[4] = (u_long)(tim + 3);
    return n + (*tim >> 2) + 2;
}

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C8A0", func_8004CC60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C8A0", func_8004CDD4);
