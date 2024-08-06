/*
The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing
messages. Here's a typical B1FF communique

H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Write a "B1FF filter" that reads a message entered by the user and translates it into B1ff-
speak:

Enter message: Hey dude, C is rilly cool
In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!!

Your program should convert the message to upper-case letters, substitute digits for certain
letters (A->4, B->8, E->3, I->1, O->0, S->5), and then append 10 or so exclamation marks.
Hint: Store the original message in an array of characters, then go back through the array, 
translating and printing characters one by one.
*/

#include <stdio.h>
#include <ctype.h>

int main(void) {

    char msg[100];
    int i = 0, l = 0;

    printf("Enter message: ");
    while (msg[i-1] != '\n') {
        msg[i] = getchar();
        switch(msg[i]) {
                    case 'A': case 'a':
                    msg[i] = '4'; break;
                    case 'B': case 'b':
                    msg[i] = '8'; break;
                    case 'E': case 'e':
                    msg[i] = '3'; break;
                    case 'I': case 'i':
                    msg[i] = '1'; break;
                    case 'O': case 'o':
                    msg[i] = '0'; break;
                    case 'S': case 's':
                    msg[i] = '5'; break;
                    default:
                    msg[i] = toupper(msg[i]); break;
        }
        l++; i++;
    }   

    for(i = 0; i < l - 1; i++) {
        printf("%c", msg[i]);
    }
    printf("!!!!!!!!!!");

    return 0;
}