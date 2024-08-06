/* 
Write a program that computes the volume of a sphere with a 10-meter radius, using the formula
v = 4/3pir^3. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C
doesn't have an exponential operator, so you'll need to multiply r by itself twice to compute r^3
*/

#include <stdio.h>
#define RATIO 4.0f/3.0f
#define RADIUS 10.0f
#define PI 3.1415f

int main(void) {

    float radiusCubed, volume;
    radiusCubed = RADIUS * RADIUS * RADIUS;
    volume = RATIO * PI * radiusCubed;
    printf("The volume of a 10-m radius sphere is %0.2f-m^3", volume);
    return 0;
    
}