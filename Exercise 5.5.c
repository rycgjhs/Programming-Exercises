/*
In one state, single residents are subject to the following income tax:

Income              Amount of tax
Not over $750       1% of income
$750-$2,250         $7.50 plus 2% of amount over $750
$2,250 - $3,750     $37.50 plus 3% of amount over $2,250
$3,750 - $5,250     $82.50 plus 4% of amount over $3,750
$5,250 - $7,000     $142.50 plus 5% of amount over $5,250
Over $7000          $230.00 plus 6% of amount of $7,000
*/

#include <stdio.h>

int main(void) {

    float income, tax;
    printf("Enter your income: $");
    scanf("%f", &income);
    if(income < 750) {
        tax = 0.01 * income;
        printf("Your tax is $%.2f", tax);
    }
    else if(income < 2250 && income >= 750) {
        tax = 0.02f * income + 7.50f;
        printf("Your tax is $%.2f", tax);
    }
    else if(income < 3750 && income >= 2250) {
        tax = 0.03f * income + 37.50f;
        printf("Your tax is $%.2f", tax);
    }
    else if(income < 5250 && income >= 3750) {
        tax = 0.04f * income + 82.50f;
        printf("Your tax is $%.2f", tax);
    }
    else if(income < 7000 && income >= 5250) {
        tax = 0.05f * income + 142.50f;
        printf("Your tax is $%.2f", tax);
    }
    else if(income > 7000) {
        tax = 0.06f * income + 230.0f;
        printf("Your tax is $%.2f", tax);
    }
    else printf("Invalid statement");

    return 0;
}