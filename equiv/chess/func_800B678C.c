#include "common.h"
/* compiler: 2.8.1-psx */
#define check_tile ((s32 (*)())0x800B74BC)
#define visit_tile ((s32 (*)())0x800B75C4)
s32 func_800B678C(int board, int piece, u8 side) {
    int dir, x, y, height, next, delta, steps, result;
    int range = *(u8 *)(piece + 0x11);
    u32 *tiles = *(u32 **)(0x801010B0 + *(u8 *)(board + 9) * 0x34);
    for (dir = 0; dir < 8; dir++) {
        x = *(u8 *)(piece + 0x15);
        y = *(u8 *)(piece + 0x16);
        height = (tiles[x * 13 + y] >> 19) & 7;
        steps = 0;
        *(u8 *)(board + 0x706) = 0;
        while (steps < range) {
            switch (dir) {
            case 0: x--; break;
            case 1: x--; y++; break;
            case 2: y++; break;
            case 3: x++; y++; break;
            case 4: x++; break;
            case 5: x++; y--; break;
            case 6: y--; break;
            case 7: x--; y--; break;
            }
            if (check_tile(board + 0x6E0, tiles, y, x, side, 0) == 0) break;
            next = (tiles[x * 13 + y] >> 19) & 7;
            delta = next - height;
            if (delta > 0) {
                steps += delta;
                if (steps >= range) break;
            }
            result = visit_tile(board + 0x6E0, y, x, steps, 1);
            steps++;
            if (result != 0) return result;
            height = next;
        }
    }
    return 0;
}
/* arg0: 0x80140000 */
/* arg1: 0x80160000 */
/* arg2: small */
/* real-callee: func_800B75C4 */
/* rand-u16: 0x80140008 1 0 */
/* rand-u16: 0x801010B0 1 0 */
/* rand-u16: 0x801010B2 1 32789 */
/* rand-u16: 0x80160010 1 0,256,512,1280 */
/* rand-u16: 0x80160014 1 1536 */
/* rand-u16: 0x80160016 1 6 */
/* rand-u16: 0x80140706 1 0,256,512,768,1024,1280 */
/* rand-u32-strided: 0x80150000 169 4 0x42,0x80042,0x100042,0x380042 */
/* rand-u16: 0x801406E2 1 0 */
