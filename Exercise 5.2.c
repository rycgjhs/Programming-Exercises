/*
Write a program that asks the user for a 24-hour time, then displays the time in 12-hour
form:

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Be careful not to display 12:00 as 0:00.
*/

#include <stdio.h>

int main(void) {

    int hour, min;
    printf("Enter a 24-hour time: ");
    scanf("%2d:%2d", &hour, &min);
    if(hour > 12 && hour < 24) {
        hour -= 12;
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
    }
    else if(hour < 12 && hour > 0) {
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
    }
    else if(hour == 12) {
        printf("Equivalent 12-hour time: %.2d:%.2d PM", hour, min);
    }
    else if(hour == 0) {
        hour += 12;
        printf("Equivalent 12-hour time: %.2d:%.2d AM", hour, min);
    }
    else printf("Invalid statement");
    return 0;
}