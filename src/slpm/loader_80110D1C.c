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
/* Estado do player de filme (MDEC/stream) do loader; layout deduzido de func_80110F10/801111D4/80111464. */

void func_80110D1C(void)
{
  int new_var;
  extern void slpm_printf(char *);
  u8 pad[64];
  volatile u8 c[8];
  if (new_var)
  {
    slpm_printf(D_80110060);
    slpm_DrawSync(0);
    SsEnd();
    func_8011BBC4();
    new_var = 0xE;
    c[0] = 0x80;
    CdControlB(new_var, (u8 *) c, 0);
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
  else
  {
    slpm_printf(D_80110060);
    slpm_DrawSync(0);
    SsEnd();
    func_8011BBC4();
    new_var = 0xE;
    c[0] = 0x80;
    CdControlB(new_var, (u8 *) c, 0);
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
}
