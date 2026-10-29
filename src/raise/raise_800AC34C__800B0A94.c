#include "common.h"

typedef struct {
    u8 pad[0x38];
    u32 flags;
} Task_800B0A94;
typedef struct {
    u8 pad[0x184];
    Task_800B0A94 *task;
    u32 state;
    u8 middle[0x1E2];
    s16 value;
    u8 tail[0x428];
    u32 flags;
} Work_800B0A94;
typedef struct {
    u8 pad[0x198];
    s16 a;
    s16 b;
    s16 value;
    u8 tail[0xA];
} Monster_800B0A94;
void func_800B0A94(u32 player, u16 value) {
    extern Monster_800B0A94 D_80091618[];
    extern Work_800B0A94 D_80100F38[];
    u32 index=player & 0xFFFF;
    u32 mbase=(u32)D_80091618;
    Monster_800B0A94 *monster=(Monster_800B0A94 *)(mbase + index*0x1A8);
    u32 wbase=(u32)D_80100F38;
    Work_800B0A94 *work=(Work_800B0A94 *)(wbase + index*0x79C);
    monster->value = value;
    work->value = value;
    work->flags &= ~8;
    work->flags &= ~16;
}
