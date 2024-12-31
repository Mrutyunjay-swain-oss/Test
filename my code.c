#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,j=1;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if(i==1 || i==8)
			{
				printf("%c ",'A');
			}
			if(i==2 || i==7)
			{
				if(j==1 || j==8)
				{
					printf("%c ",'A');
				}
				else
				{
					printf("%c ",'B');
				}
			}
			if(i==3 || i==6)
			{
				if(j==1 || j==8)
				{
					printf("%c ",'A');
				}
				else if(j==2 || j==7)
				{
					printf("%c ",'B');
				}
				else
				{
					printf("%c ",'C');
				}
			}
			if(i==4 || i==5)
			{
				if(j==1 || j==8)
				{
					printf("%c ",'A');
				}
				else if(j==2 || j==7)
				{
					printf("%c ",'B');
				}
				else if(j==3 || j==6)
				{
					printf("%c ",'C');
				}
				else
				{
					printf("%c ",'D');
				}
			}
		}
		printf("\n");
	}
}