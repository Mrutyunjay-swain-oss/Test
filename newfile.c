#include <stdio.h>
#include <conio.h>
void main()
{
	int yr;
	printf("Enter a year:\n");
	scanf("%d",&yr);
	if ((yr%4!=0) || ((yr%100==0) && (yr%400!=0)))
		printf("Not Leap year");
	else
		printf("a leap year");
}
