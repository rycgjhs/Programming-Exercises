/*
Write a program that finds the largest in a series of numbers entered by the user. The pro
gram must print the user to enter numbers one by one. When the user enters 0 or a negative
number, the program must display the largest nonnegative number entered:

Enter a number: 60
Enter a number: 38.3
Enter a number: 4.89
Enter a number: 100.62
Enter a number: 75.2295
Enter a number: 0

The largest number entered was 100.62
Notice that the numbers aren't exactly integers.
*/

#include <stdio.h>

int main(void) {

    float numInput, numHighest = 0;
    for(;;) {
        printf("Enter a number: ");
        scanf("%f", &numInput);
        if(numInput == 0) {
            break;
        }

        if(numInput >= numHighest) {
            numHighest = numInput;
        }
    }
    printf("The largest number entered was %.4f", numHighest);
    return 0;

}