/*
Write a program that finds the largest and smallest of four integer entered by the user:

Enter four integers: 21 43 10 35
Largest: 43
Smallest: 10

Use as few if statements as possible. Hint: Four if statements are sufficient.
*/

#include <stdio.h>

int main(void) {

    int i, j, k, l;
    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i, &j, &k, &l);
    if(i > j && i > k && i > l) {
        //First term largest, second term smallest
        if(j < k && j < l) {
            printf("Largest: %d\nSmallest: %d", i, j);
        }
        //First term largest, third term smallest
        else if(k < j && k < l) {
            printf("Largest: %d\nSmallest: %d", i, k);
        }
        //First term largest, fourth term smallest
        else if(l < j && l < k) {
            printf("Largest: %d\nSmallest: %d", i, l);
        }
    }
    else if(j > i && j > k && j > l) {
        //Second term largest, first term smallest
        if(i < k && i < l) {
            printf("Largest: %d\nSmallest: %d", j, i);
        }
        //Second term largest, third term smallest
        else if(k < i && k < l) {
            printf("Largest: %d\nSmallest: %d", j, k);
        }
        //Second term largest, fourth term smallest
        else if(l < i && l < k) {
            printf("Largest: %d\nSmallest: %d", j, l);
        }
    }
    else if(k > i && k > j && k > l) {
        //Third term largest, first term smallest
        if(i < j && i < l) {
            printf("Largest: %d\nSmallest: %d", k, i);
        }
        //Third term largest, second term smallest
        else if(j < i && j < l) {
            printf("Largest: %d\nSmallest: %d", k, j);
        }
        //Third term largest, fourth term smallest
        else if(l < i && l < j) {
            printf("Largest: %d\nSmallest: %d", k, l);
        }
    }
    else if(l > i && l > k && l > k) {
        //Fourth term largest, first term smallest
        if(i < j && i < k) {
            printf("Largest: %d\nSmallest: %d", l, i);
        }
        //Fourth term largest, second term smallest
        else if(j < i && j < k) {
            printf("Largest: %d\nSmallest: %d", l, j);
        }
        //Fourth term largest, third term smallest
        else if(k < i && k < j) {
            printf("Largest: %d\nSmallest: %d", l, k);
        }
    }
    return 0;
}