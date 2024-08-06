/*
Modifiy the repdigit. c program of section 8.1 so that it shows which digits (if any)
were repeated:

Enter a number: 939577
Repeated digit(s): 7 9
*/

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    int num, rem, i;
    bool digit[10] = {false}, repeatedDigit[10] = {false};
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Repeated digit(s): ");
    while (num > 0) {
        rem = num % 10;
        if (digit[rem] == true) {
            repeatedDigit[rem] = true;
        }
        digit[rem] = true;
        num /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(repeatedDigit[i] == true) {
            printf("%d ", i);
        }
    }
    
    return 0;
}