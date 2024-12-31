#include <stdio.h>
#include <conio.h>

void main() {
    char ch;
    fflush(stdin);
    printf("Enter any character: \n");
    scanf("%c", &ch);

    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || 
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            if (ch >= 'A' && ch <= 'Z')
                printf("Uppercase vowel");
            else
                printf("Lowercase vowel");
        } else {
            if (ch >= 'A' && ch <= 'Z')
                printf("Uppercase consonant");
            else
                printf("Lowercase consonant");
        }
    } else {
        printf("Number or special character");
    }
}
