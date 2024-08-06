/*
Extend the programming in Programming 1 project to handle three-digit numbers
*/

#include <stdio.h>

int main(void) {

    int input, i, j, k, l;
    printf("Enter a three-digit value: ");
    scanf("%3d", &input);
    i = input % 100;
    j = i % 10;
    k = i / 10;
    l = input / 100;
    printf("The reversal is: %d%d%d", j, k, l);
    return 0;

}