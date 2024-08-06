/*
Write a program that asks the user to enter the numbers from 1 to 16 (in any order) and then
displays the number in a 4 by 4 arrangement, followed by the sums of the rows, columns, 
and diagonals:

Enter the numbers from 1 to 16 in any order:
16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

16 3 2 13
5 10 11 8
9 6 7 12
4 15 14 1

Rows sums: 34 34 34 34
Column sums: 34 34 34 34 
Diagonal sums: 34 34 
*/

#include <stdio.h>

int main(void) {

    int 
        one, 
        two, 
        three,
        four,
        five,
        six,
        seven,
        eight,
        nine,
        ten,
        eleven,
        twelve,
        thirteen,
        fourteen,
        fifteen,
        sixteen;
    int rowSumOne, rowSumTwo, rowSumThree, rowSumFour;
    int columnSumOne, columnSumTwo, columnSumThree, columnSumFour;
    int diagonalSumOne, diagonalSumTwo;
    
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", 
           &one, &two, &three, &four,
           &five, &six, &seven, &eight,
           &nine, &ten, &eleven, &twelve,
           &thirteen, &fourteen, &fifteen, &sixteen);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n",
    one, two, three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fifteen ,sixteen);

    rowSumOne = one + two + three + four;
    rowSumTwo = five + six + seven + eight;
    rowSumThree = nine + ten + eleven + twelve;
    rowSumFour = thirteen + fourteen + fifteen + sixteen;
    columnSumOne = one + five + nine + thirteen;
    columnSumTwo = two + six + ten + fourteen;
    columnSumThree = three + seven + eleven + fifteen;
    columnSumFour = four + eight + twelve + sixteen;
    diagonalSumOne = one + six + eleven + sixteen;
    diagonalSumTwo = four + seven + ten + thirteen;

    printf("Row sums: %d %d %d %d\n", rowSumOne, rowSumTwo, rowSumThree, rowSumFour);
    printf("Column sums: %d %d %d %d\n", columnSumOne, columnSumTwo, columnSumThree, columnSumFour);
    printf("Diagonal sums: %d %d\n", diagonalSumOne, diagonalSumTwo);
    return 0;

}