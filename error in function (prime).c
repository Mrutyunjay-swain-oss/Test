#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d",&n);
	prime(n);
}
void prime(int);
void prime(int a)
{
	int cnt=0,i;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			cnt++;
		}
	}
	if(cnt==2)
		printf("Number is a prime");
	else
		printf("Number isn't a prime");
}