/*
    Area of a square
*/

#include <stdio.h>

int main() {
    int square_side = 1;
    int square_area = 0;

    //Write the prompt
    puts("Enter the side of a square");

    //Get the input
    // & - address operator
    scanf("%d", &square_side);

    //Do the math
    square_area = square_side * square_side;

    //Create the output
    printf("The area of a square with side %d is %d\n", square_side, square_area);

    return 0;
}