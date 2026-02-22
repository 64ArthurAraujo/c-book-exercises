#include <stdio.h>

#define ALLOC_SIZE 10000

static char allocbuf[ALLOC_SIZE];
// the array name is the address of the zeroth element of it
static char *allocp = allocbuf;

char *alloc(int n) {
    if (allocbuf + ALLOC_SIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    }

    return 0;
}

void afree(char *p) {
    if (p >= allocbuf && p < allocbuf + ALLOC_SIZE)
        allocp = p;
}

int main() {

}