//only for 3 digit numbers
#include<stdio.h>
void main()
{
	int a;
	printf("enter a number:\n");
	scanf("%d",&a);
	int b=a%10;
	int c=(a/10)%10;
	int d=a/100;
	printf("%d%d%d",b,c,d);
}