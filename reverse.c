#include<stdio.h>
void main()
{
	int num,a;
	printf("Enter a number:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		a=num%10;
		num/=10;
		printf("%d",a);
	}
}