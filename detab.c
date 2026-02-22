#include <stdio.h>

#define INPUT_MAX_LEN 1000

int get_line(char line[]);
int copy_replacing(char to[], char from[]);

// replace tabs with 4 spaces in input
int main() {
    char line[INPUT_MAX_LEN];
    char replaced_line[INPUT_MAX_LEN];

    while (get_line(line) > 0) {
        copy_replacing(replaced_line, line);
        printf("%s", replaced_line);
    }
}

int get_line(char line[]) {
    int c, i;

    for (i = 0; i < INPUT_MAX_LEN - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        line[i] = c;
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}

int copy_replacing(char to[], char from[]) {
    int i;

    i = 0;
    while (from[i] != '\0') {
        if (from[i] == '\t') {
            from[i] = ' ';
            from[i + 1] = ' ';
            from[i + 2] = ' ';
            from[i + 3] = ' ';

            i = i + 3;
        } else {
            to[i] = from[i];
            ++i;
        }
    }
}