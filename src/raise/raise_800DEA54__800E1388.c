#include "common.h"

#include "common.h"
typedef struct { u8 pad[0x110]; u16 field; u8 tail[0x96]; } Record_800E1388;
extern Record_800E1388 D_80091618[];
s32 func_800E1388(u32 player) {
    return D_80091618[player & 0xFFFF].field != 1;
}
