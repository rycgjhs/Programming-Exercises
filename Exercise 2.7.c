/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:

Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
$5 bills: 0
$1 bills: 3

Hint: Divide the amount by 20 to determine the number of $20 bills needed, and then reduce
the amount by the total value of the $20 bills. Repeat for the other bill sizes. Be sure to use 
integer values throughout, not floating-point numbers.
*/

#include <stdio.h>

int main(void) {

    int twentyBill, tenBill, fiveBill, amount, change;
    printf("Enter a monetary amount: ");
    scanf("%d", &amount);
    twentyBill = amount / 20;
    change = amount - 20 * twentyBill;
    tenBill = change / 10;
    change = change - 10 * tenBill;
    fiveBill = change / 5;
    change = change - 5 * fiveBill;
    printf("$20 Bill: %d\n$10 Bill: %d\n$5 Bill: %d\n$1 Bill: %d", twentyBill, tenBill, fiveBill, change);
    return 0;

}