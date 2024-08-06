/*
Using the switch statement, write a program that converts a numerical grade into a letter 
grade:

Enter numerical grade: 84
Letter grade: B

Using the following grading scale: A = 90-100, B = 80-90, C = 70-79, D = 60-69, F = 0-59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade 
into two digits, then use a switch statement to test the ten's digit.
*/

#include <stdio.h>

int main(void) {

    int numGr, tens;
    printf("Enter numerical grade: ");
    scanf("%d", &numGr);
    printf("Letter grade: ");
    tens = numGr / 10;
    switch (tens) {
        case 1: case 2: case 3: case 4: case 5:
        printf("F"); break;

        case 6:
        printf("D"); break;

        case 7:
        printf("C"); break;

        case 8:
        printf("B"); break;

        case 9: case 10:
        printf("A"); break;
    }
    return 0;
}