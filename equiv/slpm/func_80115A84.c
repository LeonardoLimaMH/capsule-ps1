/* stub-ret: mixed */
/* arg2: small */
/* arg0: 0x80116254 */
/* (fn = uma função stubada: a chamada indireta fica registrada e comparada) */
/* max-insns: 200000 */
/* rand-u32-strided: 0x80131C5C 2 4 0,1,2,63 */
/* rand-u32-strided: 0x80131C3C 1 4 0x80150000 */
/* rand-u32-strided: 0x80131C48 1 4 0x80150010 */
/* rand-u32-strided: 0x80150000 1 4 0x4000000,0x4000001 */
/* rand-u32-strided: 0x80150010 1 4 0,0x1000000 */
/* rand-mem: 0x80131B35 1 2 */
/* rand-u32-strided: 0x80131B40 1 4 0,1 */
/* (GPUSTAT e CHCR apontados para a RAM, para a espera terminar) */
#include "common.h"

/* fila de comandos da GPU (anel de 64 entradas de 96 bytes em D_80133690): com a GPU livre
 * e a fila vazia executa fn(data, arg) na hora; senão copia size bytes de data para a entrada
 * (ou guarda o ponteiro), enfileira e devolve quantas entradas há na fila; -1 se a espera
 * pela fila cheia falhar */
extern u8 D_80131B34[], D_80133690[];
extern s32 D_80131C5C, D_80131C60, D_80131C64;
extern volatile u32 *D_80131C3C, *D_80131C48;
extern s32 func_80116220(), func_80116254(), func_80115D34(), slpm_SetIntrMask(s32);
extern s32 slpm_DMACallback(s32, void *);

#define ENT(q, o) (*(s32 *)(D_80133690 + (q) * 96 + (o)))

s32 func_80115A84(s32 (*fn)(), u32 *data, s32 size, s32 arg) {
    s32 i;
    func_80116220();
    while (((D_80131C5C + 1) & 0x3F) == D_80131C60) {
        if (func_80116254()) return -1;
        func_80115D34();
    }
    D_80131C64 = slpm_SetIntrMask(0);
    *(s32 *)(D_80131B34 + 8) = 1;
    if (D_80131B34[1] == 0 ||
        (D_80131C5C == D_80131C60 && !(*D_80131C48 & 0x1000000) && *(s32 *)(D_80131B34 + 0xC) == 0)) {
        while (!(*D_80131C3C & 0x4000000))
            ;
        fn(data, arg);
        slpm_SetIntrMask(D_80131C64);
        return 0;
    }
    slpm_DMACallback(2, func_80115D34);
    if (size != 0) {
        for (i = 0; i < size / 4; i++) ENT(D_80131C5C, 0xC + i * 4) = data[i];
        ENT(D_80131C5C, 4) = (s32)(D_80133690 + D_80131C5C * 96 + 0xC);
    } else {
        ENT(D_80131C5C, 4) = (s32)data;
    }
    ENT(D_80131C5C, 8) = arg;
    ENT(D_80131C5C, 0) = (s32)fn;
    D_80131C5C = (D_80131C5C + 1) & 0x3F;
    slpm_SetIntrMask(D_80131C64);
    func_80115D34();
    return (D_80131C5C - D_80131C60) & 0x3F;
}
