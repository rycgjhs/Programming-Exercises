/*
Write a program that prompts the user to enter two dates and then indicates which date 
comes earlier on the calendar:

Enter first date (mm/dd/yyyy): 3/6/08
Enter second date (mm/dd/yyyy): 5/17/07
5/17/07 is earlier than 3/6/08
*/

#include <stdio.h>

int main(void) {

    int firstYear, secondYear, firstMonth, secondMonth, firstDay, secondDay;
    printf("Enter first date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &firstMonth, &firstDay, &firstYear);
    printf("Enter second date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &secondMonth, &secondDay, &secondYear);
    if(firstYear > secondYear) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
    }
    else if(secondYear > firstYear) {
        printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
    }
    else if(firstYear == secondYear) {
        if(firstMonth > secondMonth) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
        }
        else if(secondMonth > firstMonth) {
            printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
        }
        else if(firstMonth == secondMonth) {
            if(firstDay > secondDay) {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", secondMonth, secondDay, secondYear, firstMonth, firstDay, firstYear);
            }
            else if(secondDay > firstDay) {
                printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d", firstMonth, firstDay, firstYear, secondMonth, secondDay, secondYear);
            }
            else if(firstDay == secondDay) {
                printf("They are the same date");
            }
        }
    }

    return 0;


}