/* stub-ret: mixed */
#include "common.h"
typedef struct { u8 values[10]; } ChessLookup10;
extern ChessLookup10 D_800988C8;
extern void func_800C61F4();
extern void func_800161C4();
extern u8 *func_80015B3C();
extern void func_80015EF8();
extern s32 func_800A8770();
extern s32 func_80019F30();
extern void func_80015CD0();
u8 *func_800C47B8(u8 *a, s32 b, s32 c, s32 d, s32 e) {
 ChessLookup10 table = D_800988C8;
 u8 *o;
 s32 i, code;
 o = func_80015B3C(func_800C61F4, func_800161C4, 5);
 func_80015EF8(o);
 *(s32 *)(o+0x7c)=c;
 *(s32 *)(o+0x80)=d;
 *(s32 *)(o+0x40)=b;
 i = func_800A8770(a, a[0xbca], a[0xbca+a[0xbca]+1]);
 *(u16 *)(o+0x66)=table.values[i];
 *(s32 *)(o+0x84)=e;
 code=0x5b;
 if(e<2) code=0x5a;
 i=func_80019F30(0x70013,code);
 func_80015CD0(o+0x14,i,2);
 return o;
}
