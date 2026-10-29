#include "common.h"

#include "common.h"
typedef struct { u8 pad[0x1A0]; s16 field; u8 tail[0x6]; } Record_800E16AC;
extern Record_800E16AC D_80091618[];
s32 func_800E16AC(u32 player) {
    return D_80091618[player & 0xFFFF].field == 1;
}
