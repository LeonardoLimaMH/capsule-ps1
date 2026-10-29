#include "common.h"

typedef struct {
    u8 pad[0x38];
    u32 flags;
} WorkAuxTaskRecordTask;
typedef struct {
    u8 pad[0x184];
    WorkAuxTaskRecordTask *task;
    u8 tail[0x614];
} WorkAuxTaskRecord;
u32 func_800E15DC(u32 player) {
    extern WorkAuxTaskRecord D_80100F38[];
    WorkAuxTaskRecord *record = &D_80100F38[player & 0xFFFF];
    return (record->task->flags & 1) ^ 1;
}
