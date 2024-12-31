#include<stdio.h>
void main()
{
	int a1, a2, a3;
	printf("Enter your angles:\n");
	scanf("%d %d %d",&a1,&a2,&a3);
	if(a1+a2+a3==180)
	{
		if((a1==90&&a2<90&&a3<90)||(a1<90&&a2==90&&a3<90)||(a1<90&&a2<90&&a3==90))
		{
			printf("Right Angle triangle");
		}
		else if(a1<90&&a2<90&&a3<90)
		{
			printf("Acute Angle Triangle");
		}
		else if((a1>90&&a2<90&&a3<90)||(a1<90&&a2>90&&a3<90)||(a1<90&&a2<90&&a3>90))
		{
			printf("Obtuse angle triangle");
		}
		else
		{
			printf("Triangle doesn't exist");
		}
	}
	else
	{
		printf("Triangle doesn't exist");
	}
}