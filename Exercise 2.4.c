/*
Write a program that asks the user to enter a dollars-and-cents amount, then display the 
amount with 5% tax added:

    Enter an amount: 100.00
    With tax added: $105.00

*/

#include <stdio.h>


int main(void) {

    float amount, taxedAmount;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    taxedAmount = 1.05f * amount;
    printf("With taxed added: $%0.2f", taxedAmount);
    return 0;

}