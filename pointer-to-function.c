#include <stddef.h>
#include <stdio.h>
#include <string.h>

void strcpy_array(char *s, char *t);
void strcpy_pointer(char *s, char *t);

int main(int argc, char *argv[]) {
    char str1[] = "hello";
    char str2[] = "world hello";

    void (*strcpy)(char *s, char *t);

    // 0 - array | 1 - pointer
    int picked_strategy = 0;

    if (argv[1] != NULL && strcmp(argv[1], "-p") == 0)
        picked_strategy = 1;

    switch (picked_strategy) {
        default:
        case 0:
            strcpy = strcpy_array;
            printf("Using strcpy with array strategy\n");
            break;

        case 1:
            strcpy = strcpy_pointer;
            printf("Using strcpy with pointer strategy\n");
            break;
    }

    strcpy(str1, str2);

    printf("Result: %s\n", str1);
}

void strcpy_array(char *s, char *t) {
    int i = 0;

    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}

void strcpy_pointer(char *s, char *t) {
    while ((*s++ = *t++))
        ;
}
