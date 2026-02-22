#include <stdio.h>

int strlen_a(char *s) {
    char *p = s;

    while (*p != '\0') {
        p++;
    }

    return p - s;
}

int main() {
    int len = strlen_a("hello world!");

    printf("Length is %i", len);

    return 0;
}