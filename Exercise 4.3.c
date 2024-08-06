/*
Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit
number without using arithmetic to split the number into digits. Hint: See the upc.c program
of section 4.1.
*/

#include <stdio.h>

int main(void) {

    int input;
    printf("Enter a three-digit value: ");
    scanf("%d", &input);
    printf("The reversal is %d%d%d", input % 10, input % 100 / 10, input / 100);
    return 0;


}