#include <stdio.h>

int main() {
    int a[10];

    a[0] = 1;
    a[1] = 2;
    a[2] = 3;

    // int *pa = &a[2];

    // int x = *pa-1;

    int *pa = a;

    printf("x is %i", *pa+1);
}