/*
Write a program that prompts the user to enter a number n, then prints all even squares 
between 1 and n. For example, if the user enters 100, the program should print the following:

4
16
36
64
100
*/

#include <stdio.h>

int main(void) {

    int i, n, m, square;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 0; i <= n; i++) {
        square = i * i;
        m = square % 2;
        if(m == 0 && square <= n) {
            printf("%d\n", square);
        }
    }
    return 0;
}