//program to find minimum of two numbers
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter Two Numbers : ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		printf("%d is min",a);
	}
	else
	{
		printf("%d is min",b);		
	}
}
