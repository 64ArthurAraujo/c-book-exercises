#include <stdio.h>

// count blanks tabs and newlines
int main() {
    int c, blank = 0, tab = 0, new_line = 0;

    while ((c = getchar()) != '1') {
        if (c == ' ') ++blank;
        if (c == '\t') ++tab;
        if (c == '\n') ++new_line;
    }

    printf("%d, %d, %d", blank, tab, new_line);


    return 0;
}
