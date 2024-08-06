/*
The following table shows the daily flights from one city to another:

Departure time          Arrival time
8:00 a.m.                 10:16 a.m.
9:43 a.m.                 11:52 a.m.
11:19 a.m.                1:31 p.m.
12:47 p.m.                3:00 p.m.
2:00 p.m.                 4:08 p.m.
3:45 p.m.                 5:55 p.m.
7:00 p.m.                 9:20 p.m.
9:45 p.m.                 11:58 p.m.

Write a program that asks user to enter a time (expressed in hours and minutes, using the 24-
hour clock). The program then displays the departure and arrival times for the flight whose 
departure time is closest to that entered by the user:

Enter a 24-hour time: 13:15
Closest departure time is 12:47 p.m., arriving at 3:00 p.m.

Hint: Convert the input into a time expressed in minutes since midnight, and comapre it to 
the departure times, also expressed in minutes since midnight. For example, 13:15 is 13*60+15
= 795 minutes since midnight, which is closer to 12:47 p.m. (767 minutes since
midnight) than to any other departure times.
*/

#include <stdio.h>
#define MIDNIGHT 1440

int main(void) {

    int timeReference, hours, minutes;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &minutes);
    timeReference = hours * 60 + minutes;
    if(timeReference < 480) {
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 p.m.");
    }
    else if(timeReference > 480 && timeReference <= 583) {
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 p.m.");
    }
    else if(timeReference > 583 && timeReference <= 679) {
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
    }
    else if(timeReference > 679 && timeReference <= 767) {
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
    }
    else if(timeReference > 767 && timeReference <= 840) {
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
    }
    else if(timeReference > 840 && timeReference <= 945) {
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
    }
    else if(timeReference > 945 && timeReference <= 1140) {
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
    }
    else if(timeReference > 1140 && timeReference <= 1305) {
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
    }

    return 0;

}