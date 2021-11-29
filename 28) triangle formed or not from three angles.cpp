//program to check whether triangle is formed or not by giving input of 3 angles
#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter Three Angles : ");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c) == 180)
	{
		printf("Triangle is Formed");
	}
	else
	{
		printf("Trianle is not Formed");
	}
}
