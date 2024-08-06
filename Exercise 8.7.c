/*
Write a program that reads a 5x5 array of integers and then prints the row sums and the
column sums:

Enter row 1: 8 3 9 0 10
Enter row 2: 3 5 17 1 1
Enter row 3: 2 8 6 23 1
Enter row 4: 15 7 3 2 9
Enter row 5: 6 14 2 6 0

Row totals: 30 27 40 36 28
Column totals: 34 37 37 32 21
*/

#include <stdio.h>
#define dim 5

int main(void) {

    int square[dim][dim], rowSum = 0, colSum = 0, i, x;
    for(i = 0; i < dim; i++) {
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &square[i][0], &square[i][1], &square[i][2], &square[i][3], &square[i][4]);
        }

    printf("\nRow totals: ");
    for (i = 0; i < 5; i++) {
        for(x = 0; x < 5; x++) {
            rowSum += square[i][x];
        }
        printf("%d ", rowSum);
        rowSum = 0;
    }
    
    printf("\nColumn totals: ");
    for(x = 0; x < 5; x++) {
        for(i = 0; i < 5; i++) {
            colSum += square[i][x];
        }
        printf("%d ", colSum);
        colSum = 0;
    }

    return 0;
}