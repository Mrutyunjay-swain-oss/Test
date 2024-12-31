/* can only handle greater than or equal to 3 length of sequence*/
#include<stdio.h>
void main()
{
	int initial=0,a,b,c,num;
	printf("Enter the length of sequence:\n");
	scanf("%d",&num);
	while(num!=0)
	{
		if(initial==0)
		{
			printf("%d\n", initial);
			a=1;
			printf("%d\n",a);
			b=initial+a;
			printf("%d\n",b);
			num=num-3;
			++initial;
		}
		else
		{
			c=a+b;
			printf("%d\n",c);
			a=b;
			b=c;
			--num;
		}
	}
}						