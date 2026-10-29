#ifndef MATCHING_H
#define MATCHING_H

#include "types.h"

/* Preserve the original argument-register copy for a repeated constant.
 * The tied inputs/outputs keep every initialized value; the empty asm emits
 * no instructions. typeof's conditional expression also decays array inputs.
 * repeated must be a side-effect-free constant. The first two operands are
 * evaluated once, and the callee's result is retained. Check the compiled
 * function and the complete binary. A statement expression avoids introducing
 * a loop marker that changes GCC 2.7.2's prologue scheduling in some functions.
 */
#if defined(__mips__) || defined(__mips) || defined(mips)
#define MATCHING_CALL4_REPEAT(function, value0, value1, repeated) \
    __extension__ ({ \
        register __typeof__(0 ? (value0) : (value0)) matching_a0 __asm__("$4") = (value0); \
        register __typeof__(0 ? (value1) : (value1)) matching_a1 __asm__("$5") = (value1); \
        register s32 matching_a2 __asm__("$6") = (repeated); \
        __asm__ volatile("" : "=r"(matching_a0), "=r"(matching_a1), "=r"(matching_a2) \
                         : "0"(matching_a0), "1"(matching_a1), "2"(matching_a2)); \
        function(matching_a0, matching_a1, matching_a2, matching_a2); \
    })
#else
#define MATCHING_CALL4_REPEAT(function, value0, value1, repeated) \
    function((value0), (value1), (repeated), (repeated))
#endif

#endif
