#include "common.h"

typedef struct Node {
    u16 h0;
    u16 h2;
    struct Node *next;
    struct Node *prev;
} Node;

extern u8 *D_80078B7C;
extern void func_80013C14();

s32 func_80013928(Node *p) {
    u16 k = p->h2;
    Node **slot = (Node **)(D_80078B7C + k * 4 + 0xC558);
    Node *n = p->next;
    Node *pr = p->prev;
    u16 s0;
    u8 *base;
    u32 cnt;

    if (*slot == p) {
        if (n != 0 && n->h2 == k) {
            *slot = n;
        } else {
            *slot = 0;
        }
    }
    if (pr != 0) {
        if (n != 0) {
            n->prev = pr;
            pr->next = n;
        } else {
            pr->next = 0;
            *(Node **)(D_80078B7C + 0xC578) = pr;
        }
    } else if (n != 0) {
        n->prev = 0;
    } else {
        base = D_80078B7C;
        *(u8 **)(base + 0xC578) = base;
    }
    s0 = p->h0;
    func_80013C14(p, s0);
    p->h0 = s0;
    base = D_80078B7C;
    cnt = *(u32 *)(base + 0xC554);
    if (cnt < 0x154) {
        cnt++;
        *(u32 *)(base + 0xC554) = cnt;
        *(Node **)(base + cnt * 4 + 0xC000) = p;
        return (s32)(base + cnt * 4 + 0xC000);
    } else {
        return ++(*(s32 *)(base + 0xC584));
    }
}
