/*
Programming Project number 1 in Chapter 4 asked you to write a program that displays a two-digit
number with its digits reversed. Generalize the program so that the number can have one,
two, three, or more digits. Hint: Use a do loop that repeatedly divides the number by 10,
stopping when it reaches 0.
*/

#include <stdio.h>

int main(void) {

    int i, input;
    printf("Enter a digit: ");
    scanf("%d", &input);
    do {
        i = input % 10;
        input /= 10;
        printf("%d", i);
    } while(input > 0);
    return 0;
}