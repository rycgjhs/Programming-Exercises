/*
Modify the program of Programming Project 5 so that the polynomial is evaluated using the 
following formula:

((((3x+2)x-5)x-1)x+7)x-6

Note that the modified program performs fewer multiplications. This technique for evaluat-
ing polynomials is known as Horner's Rule.
*/

#include <stdio.h>

int main(void) {

    float firstTerm, secondTerm, thirdTerm, fourthTerm, finalAnswer, x;
    printf("((((3x+2)x-5)x-1)x+7)x-6\n");
    printf("Define a variable: ");
    scanf("%f", &x);
    firstTerm = 3 * x + 2;
    secondTerm = firstTerm * x - 5;
    thirdTerm = secondTerm * x - 1;
    fourthTerm = thirdTerm * x + 7;
    finalAnswer = fourthTerm * x - 6;
    printf("The final answer is %0.2f", finalAnswer);
    return 0;
    

}