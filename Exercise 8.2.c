/*
Modify the repdigit.c program of Section 8.1 so that it prints a table showing how
many times each digit appears in the number:

Enter a number: 41271092
Digit: 0 1 2 3 4 5 6 7 8 9
Occurences: 1 2 2 0 1 0 0 1 0 1
*/

#include <stdio.h>

int main(void) {

    int n, r, occurence[10] = {0}, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n > 0) {
        r = n % 10;
        occurence[r]++;
        n /= 10;
    }

    printf("Digit: 0 1 2 3 4 5 6 7 8 9\nOccurences: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", occurence[i]);
    }
    return 0;
}