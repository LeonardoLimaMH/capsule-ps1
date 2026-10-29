#include "common.h"

#include "common.h"
typedef struct { u8 pad[0x19C]; s16 flag; u8 tail[0x1A8 - 0x19E]; } MonsterRecord;
extern MonsterRecord D_80091618[];
s32 func_800E1554(u32 player) {
 return D_80091618[player & 0xFFFF].flag != 0;
}
