/*
    Years to Minutes
    Calculates your age from years into minutes
*/

#include <stdio.h>

int main() {
    int years = 0;
    int minutes = 0;

    puts("Enter your age in years:");
    scanf("%d", &years);
    minutes = years * 365 * 24 * 60;
    printf("\"%d\" years is \"%d\" minutes\n", years, minutes);

    return 0;
}