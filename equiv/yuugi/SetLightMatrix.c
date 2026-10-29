/* stub-ret: mixed */
/* arg0: 0x80150000 */
/* rand-u16: 0x80150000 64 0,1,0x10,0x40,0x80,0x100,0xFFC0,0xFFF0,0xFF80,0x1000 */
#include "common.h"
#include "gte_inline.h"

/* libgte: matriz de direção das luzes (LLM) */
void SetLightMatrix(void *m) {
    gte_SetLightMatrix(m);
}
