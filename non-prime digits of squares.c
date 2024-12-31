#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int i,n,n1, cnt, dig, j, count,tc=0,lsd=1000;
	printf("Digits of the square of number which are not prime\n\n");
	for(i=1;i<=lsd;i++)
	{
		n=pow(i,2);
		n1=n;
		while(n1!=0)
		{
			cnt=0;
			count=0;
			dig=n1%10;
			for(j=1;j<=dig;j++)
			{
				if(dig%j==0)
					count++;
			}
			if(count>2)
			{
				n1/=10;
			}
			else
			{
				cnt++;
				break;
			}
		}
		if(cnt==0)
		{
			tc++;
			printf("\t%d = %d\n",i,n);
		}
	}
	printf("\nTotal numbers from 1 to %d = %d",lsd,tc);
}