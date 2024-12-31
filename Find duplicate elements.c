#include<stdio.h>
void main()
{
    int ar[15], n, i, j,count;
    int visited[15] = {0}; // To track processed elements
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &ar[i]);
    }
    printf("Duplicates and their locations:\n");
    for (i = 0; i < n; i++) 
    {
        if (visited[i] == 0) 
        { // Only process if not already marked
            count = 0;
            for (j = i + 1; j < n; j++) 
            {
                if (ar[i] == ar[j]) 
                {
                    if (count == 0) 
                    { // Print only the first time
                        printf("Duplicate of %d is at:", ar[i]);
                    }
                    printf(" %d,", j);
                    visited[j] = 1; // Mark duplicate as visited
                    count++;
                }
            }
            if (count > 0) 
            {
                printf("\n");
            }
        }
        visited[i] = 1; // Mark the current element as visited
    }
}