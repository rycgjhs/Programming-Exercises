/*
In the SCRABBLE Crossword Game, players form words using small tiles, each containing
a letter and a face value. The face value from one letter to another, based on the letter's
rarity. (Here are the face values: 1: AEILNORSTU, 2: DG, 3:BCMP, 4: FHVWY, 5:K,
8: JX, 10: QZ.) Write a program that computes the value of a word by summing the values
of its letter:

Enter a word: pitfall
Scrabble value: 12

Your program should allow any mixture of lower-case and upper-case letters in the word.
Hint: Use the toupper library function.
*/

#include <stdio.h>

int main(void) {

    char scrabbleInput;
    short int pointValue, charPoint;
    printf("Enter a word: ");

    scrabbleInput = getchar();
    while(scrabbleInput != '\n') {
        switch(scrabbleInput) {
            case 'A': case 'E': case 'I': case 'L':
            case 'N': case 'O': case 'R': case 'S':
            case 'T': case 'U':
            charPoint = 1; break;
            case 'D': case 'G':
            charPoint = 2; break;
            case 'B': case 'C': case 'M': case 'P':
            charPoint = 3; break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
            charPoint = 4; break;
            case 'K':
            charPoint = 5; break;
            case 'J': case 'X':
            charPoint = 8; break;
            case 'Q': case 'Z':
            charPoint = 10; break;
        }
        pointValue += charPoint;
        scrabbleInput = getchar();
    }

    printf("Scrabble value: %hd", pointValue);
    return 0;
}