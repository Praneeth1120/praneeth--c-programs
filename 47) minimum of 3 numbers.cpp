#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter three Numbers :");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("%d is minimum",a);
	}
	if(b<a&&b<c)
	{
		printf("%d is minimum",b);
	}
	if(c<a&&c<b)
	{
		printf("%d is minimum",c);
	}
}
