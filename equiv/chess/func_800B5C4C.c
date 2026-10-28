#include "common.h"

/* real-callee: func_80015B3C */
/* real-callee: func_800136C8 */
/* real-callee: func_80013C14 */
/* rand-u16: 0x80078B7C 1 0 */
/* rand-u16: 0x80078B7E 1 32786 */
/* rand-u16: 0x8012C554 1 0 */
/* rand-u16: 0x8012C556 1 0 */
/* rand-u16: 0x8012C578 1 4096 */
/* rand-u16: 0x8012C57A 1 32786 */
/* rand-u16: 0x8012C57C 1 0 */
/* rand-u16: 0x8012C57E 1 0 */
/* rand-u16: 0x80121008 1 0 */
/* rand-u16: 0x8012100A 1 0 */
/* rand-u16: 0x8012C558 16 0 */
/* rand-u16: 0x80121000 1 144 */
/* rand-u16: 0x80119714 1 0,1,5,19,20,29,30,31,199 */
/* rand-u16: 0x80119716 1 0 */
/* rand-ptr: 0x8008F760 3 */
/* rand-u16: 0x8008EE54 1 0,1,2,3,4,5,6,7,8,9,10,15,19,20,21,31,32,63,64,98,99,100,65535 */
/* real-callee: __adddf3 */
/* real-callee: __divdf3 */
/* real-callee: __fixdfsi */
/* real-callee: __floatsidf */
/* real-callee: __muldf3 */
/* real-callee: __negdf2 */
/* real-callee: __subdf3 */
/* real-callee: _add_mant_d */
/* real-callee: _comp_mant */
/* real-callee: _dbl_shift */
/* real-callee: _dbl_shift_us */
/* real-callee: _err_math */
/* real-callee: _mainasu */
/* real-callee: _mul_mant_d */
/* real-callee: func_80015D14 */
/* real-callee: func_8004FE2C */
/* real-callee: func_800459CC */
/* callee-contract: RotTransPers */
/* callee-contract: RotTransPers4 */
/* callee-contract: SetRotMatrix */
/* callee-contract: SetTransMatrix */
/* real-callee: func_800FE188 */
/* real-callee: func_800FEC2C */
/* real-callee: func_800FE21C */
/* real-callee: func_800FEBF4 */
/* real-callee: func_800FF460 */
/* real-callee: func_800FF0A0 */
/* real-callee: func_800FF3B4 */
/* real-callee: func_800FE74C */
/* real-callee: func_800DD428 */
/* real-callee: func_800FF190 */
/* real-callee: func_800FF2CC */
/* real-callee: func_800DDA78 */
/* compiler: 2.8.1-psx */
#include "ghidra.h"
#define D_801010B0 (*(s32 *)0x801010B0)
#define func_800B74BC ((s32 (*)())0x800B74BC)
#define func_800B75C4 ((s32 (*)())0x800B75C4)
int func_800B5C4C(int board, int piece, u8 side)
{
    int dir, x, y, result;
    int startx = *(u8 *)(piece + 0x15);
    int starty = *(u8 *)(piece + 0x16);
    int tiles = *(int *)(0x801010B0 + *(u8 *)(board + 9) * 0x34);
    for (dir = 0; dir < 8; dir++) {
        x = startx;
        y = starty;
        *(u8 *)(board + 0x706) = 0;
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
        result = func_800B74BC(board + 0x6E0, tiles, y, x, side, 1);
        if (result != 0) {
            result = func_800B75C4(board + 0x6E0, y, x, *(u8 *)(board + 0x707), 0);
            if (result != 0) return result;
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
/* rand-u16: 0x80160014 1 1536 */
/* rand-u16: 0x80160016 1 6 */
/* rand-u32-strided: 0x80150000 169 4 0x42 */
/* rand-u16: 0x801406E2 1 1541 */
