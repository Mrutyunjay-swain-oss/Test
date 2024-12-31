#include<stdio.h>
#include<conio.h>

void main()
{
    int n, i, j, layer;
    char ch;

    printf("Enter the size of the pattern (must be an even number): ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        printf("Please enter an even number for the size.\n");
        return;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            // Determine the current layer based on proximity to the edges
            layer = (i < j ? i : j);            // Min row/col to top-left edge
            layer = (layer < (n - i + 1) ? layer : (n - i + 1)); // Min to bottom-left
            layer = (layer < (n - j + 1) ? layer : (n - j + 1)); // Min to right edges
            
            ch = 'A' + layer - 1;  // Assign character based on layer
            printf("%c ", ch);
        }
        printf("\n");
    }
}