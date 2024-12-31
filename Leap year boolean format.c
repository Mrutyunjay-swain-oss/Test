#include <stdio.h>

// Function to determine if a year is a leap year based on SOP expression
int isLeapYear(int year) {
    // Conditions based on SOP
    int A = (year % 4 == 0);   // Condition A: Year is divisible by 4
    int B = (year % 100 == 0); // Condition B: Year is divisible by 100
    int C = (year % 400 == 0); // Condition C: Year is divisible by 400

    // SOP Expression: A.B.C + A.B'.C'
    return (A && B && C) || (A && !B && !C);
}

int main() {
    int year;

    // User input for year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}