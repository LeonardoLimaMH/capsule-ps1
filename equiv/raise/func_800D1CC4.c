/* stub-ret: mixed */
/* args: small */
/* max-insns: 200000 */
/* rand-u32-strided: 0x800E9038 16 4 0x80150000,0x80150040 */
/* rand-u16: 0x80150000 1 0xFFF7,0xFFF8,0xFFFA,5 */
/* rand-u16: 0x80150002 30 1,2,0x41,0xFFEE */
/* rand-u16: 0x80150040 1 0xFFF7,0xFFFA */
/* rand-u16: 0x80150042 30 3,0x42,0xFFEE */
/* rand-u16: 0x80100E64 1 0,1,2 */
/* rand-mem: 0x80091620 8 3 */
/* rand-u16: 0x80091618 1 0,1,2,3 */
/* rand-u16: 0x8009161C 1 0,1,2,3 */
/* rand-mem: 0x80091620 8 3 */
/* rand-u16: 0x80065164 6 1,2,537 */
/* rand-u16: 0x800917C0 1 0,1,2,3 */
/* rand-u16: 0x800917C4 1 0,1,2,3 */
/* rand-mem: 0x800917C8 8 3 */
/* rand-u16: 0x80065170 6 1,2,537 */
/* rand-u16: 0x80091968 1 0,1,2,3 */
/* rand-u16: 0x8009196C 1 0,1,2,3 */
/* rand-mem: 0x80091970 8 3 */
/* rand-u16: 0x8006517C 6 1,2,537 */
/* rand-u16: 0x80091B10 1 0,1,2,3 */
/* rand-u16: 0x80091B14 1 0,1,2,3 */
/* rand-mem: 0x80091B18 8 3 */
/* rand-u16: 0x80065188 6 1,2,537 */
/* rand-u16: 0x80091CB8 1 0,1,2,3 */
/* rand-u16: 0x80091CBC 1 0,1,2,3 */
/* rand-mem: 0x80091CC0 8 3 */
/* rand-u16: 0x80065194 6 1,2,537 */
/* rand-u16: 0x80091E60 1 0,1,2,3 */
/* rand-u16: 0x80091E64 1 0,1,2,3 */
/* rand-mem: 0x80091E68 8 3 */
/* rand-u16: 0x800651A0 6 1,2,537 */
/* rand-u16: 0x80092008 1 0,1,2,3 */
/* rand-u16: 0x8009200C 1 0,1,2,3 */
/* rand-mem: 0x80092010 8 3 */
/* rand-u16: 0x800651AC 6 1,2,537 */
/* rand-u16: 0x800921B0 1 0,1,2,3 */
/* rand-u16: 0x800921B4 1 0,1,2,3 */
/* rand-mem: 0x800921B8 8 3 */
/* rand-u16: 0x800651B8 6 1,2,537 */
/* rand-u16: 0x80092358 1 0,1,2,3 */
/* rand-u16: 0x8009235C 1 0,1,2,3 */
/* rand-mem: 0x80092360 8 3 */
/* rand-u16: 0x800651C4 6 1,2,537 */
/* rand-u16: 0x80092500 1 0,1,2,3 */
/* rand-u16: 0x80092504 1 0,1,2,3 */
/* rand-mem: 0x80092508 8 3 */
/* rand-u16: 0x800651D0 6 1,2,537 */
/* rand-u16: 0x800926A8 1 0,1,2,3 */
/* rand-u16: 0x800926AC 1 0,1,2,3 */
/* rand-mem: 0x800926B0 8 3 */
/* rand-u16: 0x800651DC 6 1,2,537 */
/* rand-u16: 0x80092850 1 0,1,2,3 */
/* rand-u16: 0x80092854 1 0,1,2,3 */
/* rand-mem: 0x80092858 8 3 */
/* rand-u16: 0x800651E8 6 1,2,537 */
/* rand-u16: 0x800929F8 1 0,1,2,3 */
/* rand-u16: 0x800929FC 1 0,1,2,3 */
/* rand-mem: 0x80092A00 8 3 */
/* rand-u16: 0x800651F4 6 1,2,537 */
/* rand-u16: 0x80092BA0 1 0,1,2,3 */
/* rand-u16: 0x80092BA4 1 0,1,2,3 */
/* rand-mem: 0x80092BA8 8 3 */
/* rand-u16: 0x80065200 6 1,2,537 */
/* rand-u16: 0x80092D48 1 0,1,2,3 */
/* rand-u16: 0x80092D4C 1 0,1,2,3 */
/* rand-mem: 0x80092D50 8 3 */
/* rand-u16: 0x8006520C 6 1,2,537 */
/* rand-u16: 0x80092EF0 1 0,1,2,3 */
/* rand-u16: 0x80092EF4 1 0,1,2,3 */
/* rand-mem: 0x80092EF8 8 3 */
/* rand-u16: 0x80065218 6 1,2,537 */
#include "common.h"

/* monta no buffer de texto D_80103EF0[D_80100E64] a mensagem a1 sobre a criatura a0:
 * cabeçalho, nome da criatura/espécie/lista conforme a2/a3, e a cauda do roteiro D_800E9038[a1] */
extern u8 D_80091618[], D_80063940[];
extern u16 *D_800E9038[];
extern u16 D_80103EF0[], D_800F1CE8, D_800F1CEC[], D_800F0708, D_80065164[];
extern s16 D_80100E64;
extern s32 func_800C07E4(s32, s32), func_800C07B8(s32, s32);

#define E(i) (D_80091618 + (i) * 0x1A8)
#define B (D_80103EF0 + D_80100E64 * 80)
#define PUT(c) (B[D_800F1CE8++] = (c))

/* nome da criatura (8 bytes em +8, até o último não nulo); sem nome: D_800F1CEC com o número */
static void put_name(u16 k) {
    u8 *e = E(k);
    u16 sum = 0;
    s32 i, n;
    for (i = 0; i < 8; i++) sum += e[8 + i];
    if (sum != 0) {
        for (n = 7; n >= 0 && e[8 + n] == 0; n--)
            ;
        for (i = 0; i <= n; i++) PUT(e[8 + i]);
    } else {
        D_800F1CEC[0] = (k & 0xFF) + 0xC3;
        for (i = 0; i < 8; i++) PUT(D_800F1CEC[i]);
    }
}

/* texto de 9 bytes no máximo da tabela D_80063940 (registros de 60 bytes) */
static void put_text(u16 id) {
    u8 *s = D_80063940 + id * 60;
    s32 i;
    for (i = 0; i < 9; i++) {
        if (s[i] == 0) return;
        PUT(s[i]);
    }
}

/* copia o roteiro D_800E9038[m] a partir da posição i até o terminador 0xFFEE */
static void put_script(u16 m, s32 i) {
    u16 c = D_800E9038[m][i];
    while (c != 0xFFEE) {
        PUT(c);
        c = D_800E9038[m][++i];
    }
}

s32 func_800D1CC4(s32 a0, s32 a1, s32 a2, s32 a3) {
    u16 m = a1;
    u16 k = a0;
    u16 h = D_800E9038[m][0];
    if (h == 0xFFF8) return func_800C07E4(m, k);
    if (h == 0xFFFA) {
        u16 *b = B;
        b[0] = 0xFFED;
        D_800F1CE8 = 0;
        D_800F1CE8 = 1;
        b[1] = 2;
        D_800F1CE8 = 2;
        b[2] = 0xA6;
        D_800F1CE8 = 3;
        b[3] = 0x23;
        D_800F1CE8 = 4;
        b[4] = 0xDB;
        D_800F1CE8 = 5;
        b[5] = 0xFFF0;
        D_800F1CE8 = 6;
        put_name(k);
        put_script(m, 9);
    } else if (h == 0xFFF7) {
        B[0] = 0xFFED;
        D_800F1CE8 = 0;
        D_800F1CE8 = 1;
        switch ((u16)a2) {
        case 0:
            return 0x800D261C; /* alvo da tabela de saltos que ficou em v0 */
        case 1:
            put_name(k);
            break;
        case 2:
            put_text(*(u16 *)E(k));
            break;
        case 3:
            if ((u16)a3 == 1) put_name(k);
            else if ((u16)a3 == 2) put_text(*(u16 *)(E(k) + 4));
            D_800F0708 = 1;
            break;
        case 4:
            if ((u16)a3 == 1) {
                u16 *s = D_80065164 + k * 6;
                while (*s != 0x219) PUT(*s++);
            }
            break;
        }
        put_script(m, 4);
    } else {
        return h > 0xFFF8 ? 0xFFFA : 0xFFF7; /* sobra do delay slot */
    }
    PUT(0xFFEE);
    B[D_800F1CE8] = 0;
    return func_800C07B8(m, k);
}
