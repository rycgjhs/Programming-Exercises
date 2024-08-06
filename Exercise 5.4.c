/*
Here's a simplified version of teh Beaufort scale, which is used to estimate wind force:

Speed(knots)    Description
Less than 1     Calm
1-3             Light air
4-27            Breeze
28-47           Gale
48-63           Storm
Above 63        Hurricane

Write a program that asks the user to enter a wind speed (in knots), then displays the corresponding
description.
*/

#include <stdio.h>

int main(void) {

    int speed;
    printf("Enter a corresponding wind speed: ");
    scanf("%d", &speed);
    if(speed < 1) {
        printf("Wind speed is calm");
    }
    else if(speed < 3 && speed >= 1) {
        printf("Wind speed is light air");
    }
    else if(speed < 27 && speed >= 3) {
        printf("Wind speed is breeze");
    }
    else if(speed < 47 && speed >= 27) {
        printf("Wind speed is gale");
    }
    else if(speed < 63 && speed >= 47) {
        printf("Wind speed is storm");
    }
    else if(speed >= 63) {
        printf("Wind speed is hurricane");
    }
    else printf("Invalid");

    return 0;

}