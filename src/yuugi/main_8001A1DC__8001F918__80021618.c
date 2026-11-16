#include "common.h"
#include "yuugi.h"

typedef struct {
    s16 x;
    s16 y;
    s32 f_4;
    u8 f_8[0x10];
} S_800637AC;
extern S_800637AC D_800637AC[];

extern u32 D_80078BE0;

typedef struct {
    u8 pad00[0xC];
    u32 unk0C;
    u8 pad10[0x2C];
} S_80063940;
extern S_80063940 D_80063940[];

extern s8 D_80085429[];

typedef struct {
    s16 x, y, w, h;
} Rect;

extern Rect D_80078BE8[];
extern u8 D_8001033C[];
extern s32 DsControlB();

extern u16 D_8008EE44[];
extern s32 func_80012508(), _96_remove();
extern void ResetCallback(), ClearImage();
extern void DsDataCallback(), DsReadyCallback(), StopRCnt(), PadStop();
extern void StopCallback(), func_8004FDEC(), func_8004FDDC();

extern void func_8002E4D0();

extern u16 D_8005089C[];
extern s32 func_80033E5C();

extern u8 *func_80015B3C();
extern void func_80018600();

extern u8 D_80085428[];

extern void func_80015EF8(), func_800227D4(), func_800161C4();
extern s32 func_80019F30();

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

extern u8 D_8008ED68[];
s32 rand(void);

s32 rand(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

void func_80021618(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    extern M2C_UNK D_80078D08;
    s32 var_s0 = -1;
    s32 var_s1 = 0;
    register s32 reset asm("s7") = 0;
    s32 temp_v0;
    s32 var_a0;
    register s32 var_a1 asm("a1");
    u8 temp_v1, var_v0;
    if (M2C_FIELD(arg0, s32 *, 0x3C) == 0 ||
        M2C_FIELD(&D_80078D08, u8 *, 0) != M2C_FIELD(arg2, u8 *, 5)) {
        M2C_FIELD(&D_80078D08, u8 *, 0) = M2C_FIELD(arg2, u8 *, 5);
        temp_v1 = M2C_FIELD(arg2, u8 *, 5);
        switch (temp_v1) {
        case 1: var_s0 = 3; var_s1 = 1; break;
        case 2: var_s0 = 4; var_s1 = 1; break;
        case 3: var_s0 = 5; var_s1 = 1; break;
        case 4: var_s0 = 6; var_s1 = 1; break;
        case 5: var_s0 = 7; var_s1 = 1; break;
        case 0:
        default: var_s0 = 0; var_s1 = 1; break;
        }
    } else if (M2C_FIELD(&D_80078D08, u8 *, 0) == 0) {
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            if (arg4 < 4) {
                if (arg3 != 0) {
                    if (M2C_FIELD(&D_80078D08, u8 *, 1) != 1) {
                        var_s0 = 0;
                        goto idle;
                    }
                    goto random;
                }
                if (M2C_FIELD(&D_80078D08, u8 *, 1) == 0x65) {
random:
                    temp_v0 = func_80020304(0x3E8);
                    if (temp_v0 < 10) {
                        if (!(func_800337EC() & 4)) {
                            var_s0 = 1;
                            var_s1 = 3;
                        } else {
                            goto two;
                        }
                    } else if (temp_v0 < 20) {
two:
                        var_s0 = 2;
                        var_s1 = 3;
                    }
                } else {
                    var_s0 = 0;
idle:
                    var_s1 = 1;
                }
            }
            goto check;
        }
    } else {
check:
        if (M2C_FIELD(arg0, s16 *, 0x24) < 0) {
            M2C_FIELD(arg2, s8 *, 0x10) = 1;
        }
    }
    if (var_s0 != -1) {
        if (arg4 != 4) {
            var_v0 = var_s0 + 1;
            if (arg3 == 0) var_v0 = var_s0 + 0x65;
            M2C_FIELD(&D_80078D08, u8 *, 1) = var_v0;
            var_a0 = 0x7000E;
            if (arg3 != 0) var_a0 = 0x70013;
            var_a1 = arg1 * 8;
            var_a1 = M2C_FIELD(&D_80078D08, u8 *, 1) + var_a1;
        } else {
            M2C_FIELD(&D_80078D08, u8 *, 1) = var_s0 + 0x3B;
            var_a0 = 0x7000A;
            var_a1 = 0x3B;
        }
        func_80015CD0(arg0 + 0x14, func_80019F30(var_a0, var_a1), var_s1);
        if (reset != 0) M2C_FIELD(arg0, s16 *, 0x24) = 0;
        M2C_FIELD(arg2, s8 *, 0x10) = 0;
    }
}

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

#define H(o) (*(s16 *)(obj + (o)))
#define W(o) (*(u32 *)(obj + (o)))

extern s32 (*D_80069AA4[])(void);

extern s32 (*D_80069AA4[])(void);

