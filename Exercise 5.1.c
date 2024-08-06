/*
Write a program that calculates how many digits a number contains:

Enter a number: 374
The number 374 has 3 digits

You may assume that the number has no more than four digits. Hint: Use if statements to 
test the number. For example, if the number is between 0 and 9, it has one digit. If the number
is between 10 and 99, it has two digits.
*/

#include <stdio.h>

int main(void) {

    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    if(input < 10 && input >= 0) {
        printf("The number %d has 1 digit", input);
    }
    else if(input < 99 && input >= 10) {
        printf("The number %d has 2 digits", input);
    }
    else if(input < 999 && input >= 100) {
        printf("The number %d has 3 digits", input);
    }
    else if(input < 9999 && input >= 1000) {
        printf("The number %d has 4 digits", input);
    }
    else printf("Invalid statement");
    return 0;
}