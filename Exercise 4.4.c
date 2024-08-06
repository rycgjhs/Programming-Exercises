/*
Write a program that reads an integer entered by the user and displays it in octal (base 8):

Enter a number between 0 and 32767: 1953
In octal, your number is 03641

The output should be displayed using five digits, even if fewer digits are sufficient. Hint: To 
convert the number to octal, first divide it by 8; the remainder is the last digit of the octal 
number (1, in the case). Then divide the original number by 8 and repeat the process to 
arrive at the next-to-last-digit. (printf is capable of displating numbers in base 8, as we'll
see in Chapter 7, so there's actually an easier way to write this program)
*/

#include <stdio.h>

int main(void) {

    int input, oct1, oct2, oct3, oct4, oct5, remainder;
    printf("Enter a number between 0 and 32676: ");
    scanf("%d", &input);
    oct1 = input % 8;
    remainder = input / 8;
    oct2 = remainder % 8;
    remainder /= 8;
    oct3 = remainder % 8;
    remainder /= 8;
    oct4 = remainder % 8;
    remainder /= 8;
    oct5 = remainder % 8;
    printf("In octal, your number is %d%d%d%d%d", oct5, oct4, oct3, oct2, oct1);
    return 0;


}