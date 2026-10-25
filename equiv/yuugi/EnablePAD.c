#include "common.h"

extern void (*jtbl_80096678)(void);

void EnablePAD(void) {
    jtbl_80096678();
}
