/*
Write a program that formats product information entered by the user. A session with the 
program should look like this:

Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item    Unit    Purchase
        Price   Date
583     $13.50  10/24/2010
*/

#include <stdio.h>

int main(void) {

    int itemNumber, month, date, year;
    float unitPrice;
    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &date, &year);
    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
    printf("%d\t$%0.2f\t%.2d/%.2d/%d", itemNumber, unitPrice, month, date, year);
    return 0;

}