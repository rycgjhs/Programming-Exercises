/*
Europen countries use a 13-digit code, known as a European Article Number (EAN)
instead of the 12-digit Universal Product Code (UPC) found in North American. Each EAN
ends with a check digit, just as a UPC does. The tecnique for calculating the check digit is
also similarL

    Add the second, fourth, sixth, eigth, tenth, and twelfth digits.
    Add the first, third, fifth, seventh, ninth, and eleventh digits.
    Multiply the first sum by 3 and add it to the second sum.
    Subtract 1 from the total.
    Compute the remainder when the adjusted total is divided by 10.
    Subtract the remainder from 9.

For example, consider Gukkuoglu Turkish Delight Pistachio & Cocounit, which has an EAN 
of 8691484260008. The first sum is 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 +
4 + 4 + 6 + 0 = 31. Multiplying the first sum by 3 and adding the second yields 82. Subtract-
ing 1 gives 81. The remainder upon dividing by 10 is 1. When the remainder is subtracted
from 9, the result is 8, which matches the last digit of the original code. Your job is to mod-
ify the upc.c program of Section 4.1 so that it calculates the check digit for an EAN. The 
user will enter the first 12 digits of the EAN as a single number:

Enter the first 12 digits of an EAN: 869148426000
Check digit: 8
*/

#include <stdio.h>

int main(void) {

    int a, b, c, d, e, f, g, h, i, j, k, l, input;
    printf("Enter the first 12 digits of an EAN: ");
    scanf("%d", &input);
    

}