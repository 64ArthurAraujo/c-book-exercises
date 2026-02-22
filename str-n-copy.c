#include <stdio.h>

void str_n_cpy(char *s, char *t, int n);

int main() {
    // copy
    char cpy_stringa[] = "hello world";
    char cpy_stringb[] = "mundo";

    str_n_cpy(cpy_stringa, cpy_stringb, 6);
}

void str_n_cpy(char *s, char *t, int n) {
    while ((*(s+n++) = *t++) != '\0');
}