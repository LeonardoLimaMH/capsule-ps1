#include "common.h"

/* Estado do player de filme (MDEC/stream) do loader; layout deduzido de func_80110F10/801111D4/80111464. */
typedef struct {
  s16 x, y, w, h;
} LdrRect;

typedef struct {
  u8 *buf[2];   /* 0x00 */
  s32 cur;      /* 0x08 */
  u8 *ring;     /* 0x0C */
  LdrRect r[2]; /* 0x10 */
  s32 sel;      /* 0x20 */
  s16 x, y;     /* 0x24 */
  s16 w, h;     /* 0x28 */
  s32 done;     /* 0x2C */
} LdrMovie;

extern char D_80110060[];
extern char D_80110070[];
extern char D_80110080[];
void func_80110D1C(void)
{
  extern void slpm_printf(char *);
  u8 pad[64];
  volatile u8 c[8];

  slpm_printf(D_80110060);
  slpm_DrawSync(0);
  SsEnd();
  func_8011BBC4();
  c[0] = 0x80;
  CdControlB(0xE, (u8 *)c, 0);
  DecDCToutCallback(0);
  CdDataCallback(0);
  CdReadyCallback(0);
  CdControlB(9, 0, 0);
  slpm_StopRCnt(0xF2000000);
  slpm_StopRCnt(0xF2000001);
  slpm_StopRCnt(0xF2000002);
  slpm_StopRCnt(0xF2000003);
  slpm_PadStop();
  slpm_ResetGraph(3);
  slpm_StopCallback();
  slpm_printf(D_80110070);
  func_80111B24();
  func_80111B14(D_80110080, 0x801FF000, 0);
  slpm__96_remove();
}

void func_80110E10(void)
{
  extern s16 D_80133498;
  extern s16 D_8013349A;
  extern s16 D_8013349C;
  extern s16 D_8013349E;

  slpm_SetDispMask(0);
  D_80133498 = 0;
  D_8013349A = 0;
  D_8013349C = 0x280;
  D_8013349E = 0x1E0;
  slpm_ClearImage(&D_80133498, 0, 0, 0);
  slpm_DrawSync(0);
  slpm_SetDispMask(1);
}

void func_80110E70(s16 arg0, s16 arg1)
{
  extern s32 D_80133484;
  extern s32 D_80133488;
  s16 new_var;
  D_80133484 = (s32) arg0;
  D_80133484 = (s32) arg0;
  new_var = arg1;
 do { } while (0);
  D_80133488 = (s32) new_var;
}

void func_80110E90(s32 arg0, s32 arg1)
{
  extern u8 *D_801334A0;

  DecDCTReset(0);
  *(s32 *)(D_801334A0 + 0x34) = 0;
  DecDCToutCallback(arg1);
  StSetRing(D_801334A0 + 0x44, 0x20);
  StSetStream(0, 1, 0xA6, 0, 0);
  func_80111538(arg0);
}

void func_80110F10(LdrMovie *m, s16 x0, s16 y0, s16 x1, s16 y1)
{
  extern u8 *D_801334A0;
  extern s32 D_8013348C;

  m->buf[0] = D_801334A0 + 0x12D44;
  m->buf[1] = D_801334A0 + 0x3AD44;
  m->cur = 0;
  m->ring = D_801334A0 + 0x10044;
  m->sel = 0;
  m->done = 0;
  if (D_8013348C & 1) {
    m->r[0].x = x0;
    m->r[0].y = y0;
    m->r[0].w = 480;
    m->r[0].h = 240;
    m->r[1].x = x1;
    m->r[1].y = y1;
    m->r[1].w = 480;
    m->r[1].h = 240;
    m->x = x0;
    m->y = y0;
    m->w = 24;
  } else {
    m->r[0].x = x0;
    m->r[0].y = y0;
    m->r[0].w = 320;
    m->r[0].h = 240;
    m->r[1].x = x1;
    m->r[1].y = y1;
    m->r[1].w = 320;
    m->r[1].h = 240;
    m->x = x0;
    m->y = y0;
    m->w = 16;
  }
  m->h = 240;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80110FDC);

extern s32 D_8013348C;
extern char D_80133490[];
extern char D_801100D0[];
extern u32 *func_80111268(LdrMovie *m);
extern void DecDCTvlc();
extern void StFreeRing();
extern void slpm_printf();
s32 func_801111D4(LdrMovie *m)
{
  u32 *p;
  s32 i = 0x800000;

  do {
    p = func_80111268(m);
    i--;
    if (p != 0) {
      m->cur = m->cur == 0;
      DecDCTvlc(p, m->buf[m->cur]);
      StFreeRing(p);
      return 0;
    }
  } while (i != 0);
  slpm_printf(D_80133490);
  return 0xFFFF;
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111268);

void func_80111464(LdrMovie *m)
{
  volatile s32 cnt = 0x800000;

  while (m->done == 0) {
    cnt--;
    if (cnt == 0) {
      slpm_printf(D_801100D0);
      m->done = 1;
      m->sel = m->sel == 0;
      m->x = m->r[m->sel].x;
      m->y = m->r[m->sel].y;
    }
  }
  m->done = 0;
}

void func_80111538(u8 *arg0)
{
    do {
    } while (CdControl(0x15, arg0, 0) == 0);
    do {
    } while (CdRead2(0x1C0) == 0);
}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111584);

s32 func_801119E4(s32 arg0, s32 arg1)
{
    extern u8 D_801334A8[];
    u8 *p;
    u8 *base = D_801334A8;

    p = base + arg0 * 0x22;
    if (((p[1] >> 4) == 4) && (arg1 == 0)) {
        return p[3] | (p[2] << 8);
    }
    return 0xFFFF;
}

void func_80111A40(void) {

}

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", __SN_ENTRY_POINT_loader);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B04);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B14);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B24);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", slpm__96_remove);

INCLUDE_ASM("asm/slpm/nonmatchings/loader_80110D1C", func_80111B54);
