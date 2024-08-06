/*

Write a program that asks the user to enter two integers, then calculates and displays theor
greatest common divisor (GCD):

Enter two integers: 12 28
Greatest common divisor: 4

Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as
follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m contains
the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
and copy the remainder into n. Then repeat the process, starting with testing whether n is 0.
*/

#include <stdio.h>

int main(void) {

    int m, n, rem, i;
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);
    for(i = 0; i <= 10; i++) {
        if(n == 0) {
            printf("Greatest common divisor: %d", m);
            break;
        }
    rem = m % n;
    m = n;
    n = rem;    
    }
    return 0;
}