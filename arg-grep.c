#include <stdio.h>
#include <string.h>

#define MAX_LINE 1000

int get_line(char *line, int max);

int main(int argc, char *argv[]) {
    char line[MAX_LINE];
    int found = 0;

    if (argc != 2) {
        printf("Usage: find pattern\n");
    } else {
        while (get_line(line, MAX_LINE) > 0) {
            if (strstr(line, argv[1]) != NULL) {
                printf("%s", line);
                found++;
            }
        }
    }

    return found;
}

int get_line(char line[], int max) {
    int c, i;

    i = 0;

    while (--max > 0 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }

    if (c == '\n') {
        line[i++] = c;
    }

    line[i] = '\0';
    return i;
}