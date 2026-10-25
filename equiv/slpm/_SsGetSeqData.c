/* compiler: 2.8.1-psx */
/* args: small */
/* rand-ptr: 0x801373F0 16 */
#include "common.h"

extern u8 *D_801373F0[];
extern void (*D_80137350)(s16, s16, s32, s32);
extern void (*D_80137354)(s16, s16, s32);
extern void (*D_80137358)(s16, s16, s32);
extern void (*D_8013735C)(s16, s16, s32);
extern void (*D_80137360)(s16, s16, s32);
extern void _SsSeqGetEof(s16, s16, s32);
extern s32 _SsReadDeltaValue(s16, s16);

#define CUR (*(u8 **)p)

s32 _SsGetSeqData(s16 a, s16 b) {
    u8 **tbl = &D_801373F0[a];
    s32 off = b * 0xB0;
    u8 *p = *tbl + off;
    u8 *q = CUR;
    u8 c = *q++;
    u32 st;
    u8 d, e;

    CUR = q;
    if ((*(u32 *)(*tbl + off + 0x98) & 0x401) == 0x401 && q == *(u8 **)(p + 0x10) + 1) {
        _SsSeqGetEof(a, b, (*(u8 **)(p + 0x10))[1]);
        return -1;
    }
    if (c & 0x80) {
        p[0x17] = c & 0xF;
        st = c & 0xF0;
        switch (st) {
        case 0xC0:
            p[0x16] = st;
            d = *CUR++;
            D_80137354(a, b, d);
            return 0;
        case 0x90:
            p[0x16] = st;
            d = *CUR++;
            e = *CUR++;
            *(s32 *)(p + 0x90) = _SsReadDeltaValue(a, b);
            D_80137350(a, b, d, e);
            return 0;
        case 0xB0:
            p[0x16] = st;
            d = *CUR++;
            D_80137360(a, b, d);
            return 0;
        case 0xE0:
            p[0x16] = st;
            CUR += 1;
            D_80137358(a, b, st);
            return 0;
        case 0xF0:
            p[0x16] = 0xFF;
            d = *CUR++;
            if (d == 0x2F) {
                _SsSeqGetEof(a, b, 0x2F);
                return 1;
            }
            D_8013735C(a, b, d);
            return 0;
        }
        return 0;
    }
    switch (p[0x16]) {
    case 0xC0:
        D_80137354(a, b, c);
        return 0;
    case 0x90:
        e = *CUR++;
        *(s32 *)(p + 0x90) = _SsReadDeltaValue(a, b);
        D_80137350(a, b, c, e);
        return 0;
    case 0xB0:
        D_80137360(a, b, c);
        return 0;
    case 0xE0:
        D_80137358(a, b, (s32)tbl);
        return 0;
    case 0xFF:
        if (c == 0x2F) {
            _SsSeqGetEof(a, b, 0x2F);
            return 1;
        }
        D_8013735C(a, b, c);
        return 0;
    }
    return 0;
}
