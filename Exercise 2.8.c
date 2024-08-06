/*
Write a program that calculates the remaining balance on a loan after the first, second, and 
third monthly payments:

Enter amount of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

Display each balance with two digits after the decimal point. Hint: Each month, the balance
is decreased by the amount of the payment, but increased by the balance times the monthly
interest rate. To find the monthly interest rate, convert the interest rate entered by the user to 
a percentage and divide it by 12.
*/

#include <stdio.h>

int main(void) {

    float loan, interestRate, monthlyPayment, afterFirstRate, afterSecondRate, afterThirdRate;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter monthly payment: ");
    scanf("%f", &monthlyPayment);
    afterFirstRate = (loan - monthlyPayment) + (((interestRate/100)/12) * loan);
    afterSecondRate = (afterFirstRate - monthlyPayment) + (((interestRate/100)/12) * afterFirstRate);
    afterThirdRate = (afterSecondRate - monthlyPayment) + (((interestRate/100)/12) * afterSecondRate);
    printf("Balance remaining after first payment: $%0.2f\n", afterFirstRate);
    printf("Balance remaining after second payment: $%0.2f\n", afterSecondRate);
    printf("Balance remaining after third payment: $%0.2f\n", afterThirdRate);
    return 0;

}