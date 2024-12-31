#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n,count,prime=0;
	clrscr();
	printf("Enter the range:\n");
	scanf("%d",&n);
	printf("Primary numbers are:-");
	for(i=2;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count<=2)
		{
			printf(" %d,",i);
			prime++;
		}
	}
	printf("\n\n\nNumber of prime numbers are: %d",prime);
}