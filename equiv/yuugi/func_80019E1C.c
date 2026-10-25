#include "common.h"

extern s32 PCopen();
extern s32 PClseek();

/* carrega um arquivo do PC (depuração) em blocos de 800 bytes */
void func_80019E1C(s32 *f) {
    s32 fd = PCopen(f[2], 0, 0);
    s32 size;
    s32 i = 0;
    s32 lim, off;

    if (fd == -1) {
        return;
    }
    size = PClseek(fd, 0, 2);
    PClseek(fd, 0, 0);
    if (size > 800) {
        lim = 800;
        off = 0;
        do {
            PClseek(fd, off, 0);
            lim += 800;
            i++;
            func_800425BC(fd, f[0] + off, 800);
            off += 800;
        } while (lim < size);
    }
    size -= i * 800;
    if (size > 0) {
        func_800425BC(fd, f[0] + i * 800, size);
    }
    func_800423E8(fd);
}
