#include "common.h"
/* compiler: 2.8.1-psx */
typedef s32 (*ChessAction)(u32);
#define evaluate_action ((s32 (*)())0x800D79A4)
u32 func_800DCA2C(u32 piece) {
    u32 offset = ((piece & 0x7F) - 1) * 0x7C + ((piece & 0xFF) >> 7) * 0x2E8;
    u32 card = *(u8 *)(0x80085A10 + offset);
    u32 effect = (*(u32 *)(0x80063948 + card * 0x3C) >> 17) & 0x7F;
    ChessAction action;
    u32 type;
    *(u8 *)0x8011970B = 0;
    *(u8 *)0x8011970A = 0;
    action = ((ChessAction *)0x80101E7C)[effect];
    if (action == 0) return 0;
    if ((u8)action(piece & 0xFF) == 0) return 0;
    if ((u8)evaluate_action() == 0) return 0;
    card = *(u8 *)(0x80085A10 + offset);
    effect = (*(u32 *)(0x80063948 + card * 0x3C) >> 17) & 0x7F;
    type = (*(u32 *)(0x8006B2B4 + effect * 0x58) >> 2) & 0x1F;
    if (type == 16) {
        *(u8 *)0x80118C28 = 0;
        *(u8 *)0x80118C27 = *(u8 *)0x8011970B + *(u8 *)0x8011970A * 13;
    } else if (type == 17) {
        *(u8 *)0x80118C27 = *(u8 *)0x8011970B;
        *(u8 *)0x80118C28 = *(u8 *)0x8011970A;
    } else {
        *(u8 *)0x80118C27 = *(u8 *)(0x80085A26 + offset) + *(u8 *)(0x80085A25 + offset) * 13;
        *(u8 *)0x80118C28 = *(u8 *)0x8011970B + *(u8 *)0x8011970A * 13;
    }
    *(u8 *)0x80118C25 = piece;
    *(u8 *)0x80118C26 = 3;
    return 1;
}
/* real-callee: func_800D3D2C */
/* real-callee: func_800D3A2C */
/* rand-u16: 0x80085A10 1 0 */
/* rand-u16: 0x80085CF8 1 0 */
/* rand-u16: 0x80085A06 1 0,257 */
/* rand-u16: 0x80063948 1 0,256,512,1024,1536,1792,2048 */
/* rand-u16: 0x80118FBA 1 0,257,1542,3084 */
/* rand-u16: 0x80118FBE 1 0,256,512,768 */
/* rand-u16: 0x80118FE4 1 0,257,1542,3084 */
/* rand-u16: 0x80118FE8 1 0,256,512,768 */
/* rand-u16: 0x8011900E 85 0,257,1542,33153,34438 */
/* rand-u16: 0x80118C18 1 0 */
/* rand-u16: 0x80118C1A 1 32790 */
/* rand-u32-strided: 0x80160000 169 4 0,0x42,0x82,0x80042,0x380042 */
/* real-callee: func_8001A998 */
/* real-callee: func_800D497C */
/* real-callee: func_800D4100 */
/* real-callee: func_800D2C9C */
/* rand-u16: 0x80118C22 1 0 */
/* real-callee: func_800D8580 */
/* real-callee: func_800D7B80 */
/* real-callee: func_800202A4 */
/* real-callee: rand */
/* rand-u16: 0x80085A20 1 0,256,768,2304 */
/* rand-u16: 0x80085D08 1 0,256,768,2304 */
/* rand-u32-strided: 0x8006B2B4 1 4 0,0x20000000,0x40000000,0x60000000 */
/* rand-u16: 0x8006B2B8 1 0,1,5,100,65535 */
/* rand-u16: 0x80063948 1 1536 */
/* rand-u16: 0x80085A20 1 0 */
/* rand-u16: 0x80118FBA 1 1542 */
/* rand-u16: 0x8011900E 85 0 */
/* rand-u32-strided: 0x80160000 169 4 0x42 */
/* rand-u16: 0x80118FBE 1 768 */
/* real-callee: func_800DAF10 */
/* stub-ret: mixed */
/* arg0: 0x00000001 */
/* rand-u32-strided: 0x80063948 1 4 0x600 */
/* rand-u32-strided: 0x80101e7c 1 4 0,0x800DAF10 */
/* rand-u32-strided: 0x8006b2b4 1 4 0,64,68 */
