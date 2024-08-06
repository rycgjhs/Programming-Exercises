/*
Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits at one time,
instead of entering one digit, then five digits, and then another five digits.

Enter the first 11 digits of a UPC: 01380015173
Check digit: 5
*/

#include <stdio.h>

int main(void) {

    int digOne, digTwo, digThr;
    printf("Enter the first 11 digits of a UPC: ");
    scanf("%d%d%d", &digOne, &digTwo, &digThr);
    printf("%d%d%d", digOne, digTwo, digThr);
    return 0;
    
/*??*/

}