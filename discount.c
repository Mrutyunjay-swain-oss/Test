#include<stdio.h>
#include<conio.h>
void main()
{
	int choice,qty,price,disc;
	printf("Write the number preceding for the below:\nIf you are:\n1: Premium member\n2: Regular member\n3: Not a member\nWrite your choice(1-3): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You will get 40%% discount on each product\nEnter the quantity: ");
			scanf("%d",&qty);
			price=qty*20;
			disc=price*50/100;
			printf("Actual Price: %d\nPrice after discount: %d\n~~~~Thank you for purchasing~~~~",price,price-disc);
			break;
		case 2:
			printf("You will get 30%% discount on whole after 200rupees of purchase\nEnter the quantity: ");
			scanf("%d",&qty);
			price=qty*20;
			disc=price*30/100;
			printf("Actual Price: %d\nPrice after discount: %d\n~~~~Thank you for purchasing~~~~",price,price-disc);
			break;
		case 3:
			printf("You will get 10%% discount on whole after 200rupees of purchase\nEnter the quantity: ");
			scanf("%d",&qty);
			price=qty*20;
			disc=price*10/100;
			printf("Actual Price: %d\nPrice after discount: %d\n~~~~Thank you for purchasing~~~~",price,price-disc);
			break;
		default:
			printf("Invalid Choice");
	}
}
			
			
	