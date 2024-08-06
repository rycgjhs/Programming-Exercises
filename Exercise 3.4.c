/*
Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-
xxxx and then display the number in the form xxx.xxx.xxxx:

Enter phone number: [(xxx) xxx-xxxx]: (404) 817-6900
You entered 404.817.6900
*/

#include <stdio.h>

int main(void) {

    int left, middle, right;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &left, &middle, &right);
    printf("You entered %.3d.%.3d.%.4d", left, middle, right);
    return 0;

}