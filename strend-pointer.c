#include <stdio.h>
#include <string.h>

int strend_pointer(char *s, char *t);

int main() {
    char stringa[] = "hello world";
    char stringb[] = "world";

    const int ends = strend_pointer(stringa, stringb);

    if (ends) {
        printf("String ends!");
    } else {
        printf("String does not end!");
    }
}

int strend_pointer(char *s, char *t) {
    size_t s_size = strlen(s);
    size_t t_size = strlen(t);

    while (*(s + s_size--) == *(t + t_size--) && t_size != 0)
        ;

    if (t_size == 0)
        return 1;

    return 0;
}