#include<stdio.h>
main()
{
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	if(num == 0)
	{
		printf("Zero");
	}
	if(num>0)
	{
		printf("Positive");
	}
	if(num<0)
	{
		printf("Negative");
	}
}
