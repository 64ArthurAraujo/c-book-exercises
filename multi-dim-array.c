#include <stdio.h>

static char day_tab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int day_of_the_year(int year, int month, int day) {
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    for (i = 1; i < month; i++) {
        day += day_tab[leap][i];
    }

    return day;
}

void month_day(int year, int year_day, int *p_month, int *p_day) {
    int i, leap;

    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;

    for (i = 1; year_day > day_tab[leap][i]; i++) {
        year_day -= day_tab[leap][i];
    }

    *p_month = i;
    *p_day = year_day;
}

int main() {
    int day = day_of_the_year(2024, 10, 2);

    printf("Day = %i", day);

    int exit_code = 1;

    if (day == 276)
        exit_code = 0;



    return exit_code;
}