#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j;
    char ch;
    for(i = 1; i <= 8; i++)
    {
        for(j = 1; j <= 8; j++)
        {
            if (i == 1 || i == 8 || j == 1 || j == 8)
                ch = 'A';
            else if (i == 2 || i == 7 || j == 2 || j == 7)
                ch = 'B';
            else if (i == 3 || i == 6 || j == 3 || j == 6)
                ch = 'C';
            else
                ch = 'D';

            printf("%c ", ch);
        }
        printf("\n");
    }
}