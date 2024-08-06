/*
Write a program that asks the user for a two-digit number, then prints the English word for
the number:

Enter a two-digit number: 45
You entered the number forty-five.

Hint: Break the number into two digits. Use one switch statement to print the word for the
first digit ("twenty", "thirty", and so fourth). Use a second switch statement to print the
word for the second digit. Don't forget that the nunbers between 11 and 19 require special 
treatment.
*/

#include <stdio.h>

int main(void) {

    //input two-digit numbers
    int input, tens, ones;
    printf("Enter a two-digit number: ");
    scanf("%d", &input);

    //separates the two digits 
    tens = input / 10;
    ones = input % 10;
    printf("You entered the number ");

    //if and switch statements
    if(tens < 10 && tens >= 0) {
        if(tens >= 2 || tens == 0) {

            switch(tens) {
                case 0: break;
                case 2: printf("twenty"); break;
                case 3: printf("thirty"); break;
                case 4: printf("fourty"); break;
                case 5: printf("fifty"); break;
                case 6: printf("sixty"); break;
                case 7: printf("seventy"); break;
                case 8: printf("eighty"); break;
                case 9: printf("ninety"); break;
            }

            if(ones > 0 && tens > 0) {
                printf("-");
            }

            switch(ones) {
                case 1: printf("one"); break;
                case 2: printf("two"); break;
                case 3: printf("three"); break;
                case 4: printf("four"); break;
                case 5: printf("five"); break;
                case 6: printf("six"); break;
                case 7: printf("seven"); break;
                case 8: printf("eight"); break;
                case 9: printf("nine"); break;
                case 0: break;
            }
        }
        else if(input == 11) {
            printf("eleven");
        }
        else if(input == 12) {
            printf("twelve");
        }
        else if(input == 13) {
            printf("thirteen");
        }
        else if(input == 14) {
            printf("fourteen");
        }
        else if(input == 15) {
            printf("fifteen");
        }
        else if(input == 16) {
            printf("sixteen");
        }
        else if(input == 17) {
            printf("seventeen");
        }
        else if(input == 18) {
            printf("eighteen");
        }
        else if(input == 19) {
            printf("nineteen");
        }
        else if(input > 99 ||input < 0) {
            printf("Invalid");
        } 
        else if(input == 0) {
            printf("zero");
        }
    }
    else if(tens > 9 || tens < 0) {
        printf("invalid");
    }
    return 0;

}