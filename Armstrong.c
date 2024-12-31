#include<stdio.h>
void main()
{
	int Arm_num,num,cube,duplicate_num;
	printf("~~~~Armstrong number checker~~~~\nEnter a number: ");
	scanf("%d",&num);
	duplicate_num=num;
	Arm_num=0;
	while (duplicate_num!=0)
	{
		cube=duplicate_num%10;
		Arm_num+=(cube*cube*cube);
		duplicate_num/=10;
	}
	if (Arm_num==num)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
}
	