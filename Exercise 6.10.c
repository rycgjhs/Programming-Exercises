/*
Programming Project 9 in Chapter 5 asked you to write a program that determines which of 
two dates comes earlier on the calendar. Generalize the program so that the user may enter
any number of dates. The user will enter 0/0/0 to indicate that no more dates will be entered:

Enter a date (mm/dd/yy): 3/6/08
Enter a date (mm/dd/yy): 5/17/07
Enter a date (mm/dd/yy): 6/3/07
Enter a date (mm/dd/yy): 0/0/0
5/17/07 is the earliest date
*/

#include <stdio.h>

int main(void) {

    int day = 99, dI, month = 99, mI, year = 99, yI;
    for(;;) {
        printf("Enter a date (mm/dd/yyyy): ");
        scanf("%d/%d/%d", &mI, &dI, &yI);
        if(yI < year && yI != 0) {
            year = yI;
            month = mI;
            day = dI;
        }
        else if(yI == year) {
            if(mI < month && mI != 0) {
                year = yI;
                month = mI;
                day = dI;
            }
            else if(mI == month) {
                if(dI < day && dI != 0) {
                    year = yI;
                    month = mI;
                    day = dI;
                }
            }
        }
        if(yI == 0) {
            if(mI == 0) {
                if(dI == 0) {
                    break;
                }
            }
        }
    }
    printf("%.2d/%.2d/%.2d is the earliest date", month, day, year);
    return 0;
}