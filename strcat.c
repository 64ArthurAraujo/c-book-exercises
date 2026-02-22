#include <stdio.h>

void str_concat(char s[], char t[]);

int main() {
    char stringa[] = "hello world";
    char stringb[] = ", hello";

    str_concat(stringa, stringb);

    printf("%s", stringa);
}

void str_concat(char s[], char t[]) {
    int i, j;

    i = j = 0;

    while (s[i] != '\0') {
        i++;
    }

    while ((s[i++] = t[j++]) != '\0');


}