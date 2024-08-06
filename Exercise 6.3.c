/*
Write a program that aks the user to enter a graction, then redices the fraction to lowest 
terms:

Enter a fraction: 6/12
In lowest terms: 1/2

Hint: To reduce a fraction to lowest terms, first compute the GCD of the numerator and
denominator. Then divide both the numerator and denominator by the GCD.
*/

#include <stdio.h>

int main(void) {

    int n, d, rem, GCD, numerator, denominator;
    printf("Enter a fraction: ");
    scanf("%d/%d", &n, &d);
    numerator = n;
    denominator = d;
    for(;;) {
        if(d == 0) {
            GCD = n;
            break;
        }
    rem = n % d;
    n = d;
    d = rem;
    }
    numerator /= GCD; 
    denominator /= GCD;
    printf("In lowest terms: %d/%d", numerator, denominator);
    return 0;

}