//program to check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
main()
{
	int a;
	printf("Enter a number : ");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("%d is divisible",a);
	}
	else
	{
		printf("%d is not divisible",a);
	}
}
