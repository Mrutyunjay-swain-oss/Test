#include<stdio.h>
void main()
{
	int n, power=1,count=0,d_n,first, second, middle, final;
	printf("Enter a number:\n");
	scanf("%d",&n);
	d_n=n;
	while(n!=0)
	{
		n=n/10;
		count++;
		power*=10;
	}
	if(count>=6)
	{
		first=((d_n%1000)*(power/1000));
		second=d_n/(power/1000);
		middle=((d_n-(second*(power/1000)))/1000)*1000;
		final=first+middle+second;
		printf("final number: %d",final);
	}
	else
	{
		printf("digit is not enough");
	}
}