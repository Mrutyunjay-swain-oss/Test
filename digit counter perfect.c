#include <stdio.h>
void main()
{
	int a = 4891, d, c = 10, f = 1;
	printf("Number: %d\n", a);
	while (a / c != 0)  // Continue while a/c gives a non-zero result
	{
		c *= 10;  // Increase c by a factor of 10
		f++;      // Increase digit count
	}
	printf("%d digit number\n", f);  // Print the number of digits
}