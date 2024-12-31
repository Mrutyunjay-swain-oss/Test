#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	printf("Enter the year to know if it is a leap year or not:\n");
	scanf("%d",&year);
	if((year%4==0) && (year%100!=0 || year%400==0))
	{
		printf("A Leap year");
	}
	else
	{
		printf("Not a leap year");
	}
}
	