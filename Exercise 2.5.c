/*
Write a program that asks the user to enter a value for x and then displays the value of the 
following polynomial:

3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6

Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself
repeatedly in order to compute the powers of x. (For example, x * x * x is x cubed).
*/

#include <stdio.h>

int main(void) {

    int functionOfX, x, xSquared, xCubed, xRaisedToFour, xRaisedToFive;
    printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
    printf("Enter a value of x to solve the following polynomial: ");
    scanf("%d", &x);
    xSquared = x * x;
    xCubed = x * x * x;
    xRaisedToFour = x * x * x * x;
    xRaisedToFive = x * x * x * x * x;
    functionOfX = 3 * xRaisedToFive + 2 * xRaisedToFour - 5 * xCubed - xSquared + 7 * x - 6;
    printf("%d", functionOfX);
    return 0;

}