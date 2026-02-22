#include <stdio.h>

void str_concat(char *s, char *t);

int main() {
    char stringa[] = "hello, world";
    char stringb[] = ", hello";

    str_concat(stringa, stringb);

    printf("%s", stringa);
}

void str_concat(char *s, char *t) {
    const char *p = s;
    char i = 0;

    while (*p++)
        i++;

    while ((*(s++ + i) = *t++))
        ;
}