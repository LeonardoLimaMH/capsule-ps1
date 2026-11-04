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

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C8A0", func_8004CB48);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C8A0", func_8004CC60);

INCLUDE_ASM("asm/yuugi/nonmatchings/main_8004C8A0", func_8004CDD4);
