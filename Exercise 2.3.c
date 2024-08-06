/*
Modify the program of Programming Project 2 so that it prompts the user to enter the radius 
of the sphere
*/

#include <stdio.h>
#define RATIO 4.0f/3.0f
#define PI 3.1415f

int main(void) {

    float radius, radiusCubed, volume;
    printf("What is the radius of your sphere: ");
    scanf("%f", &radius);
    radiusCubed = radius * radius * radius;
    volume = RATIO * PI * radiusCubed;
    printf("The volume of the sphere is %0.2f-m^3", volume);
    return 0;

}