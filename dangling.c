#include <stdio.h>

void main() {
    int condition1 = 0; // Change this to 1 to test the other branch
    int condition2 = 1; // Change this as needed
    int condition3 = 1; // Change this as needed

    if (condition3) 
        if (condition2) 
            if (condition3)
            ;
    else
        printf("dangling else!\n");
}
