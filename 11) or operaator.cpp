#include<stdio.h>
main()
{
	int a,b,p,q,c;
	printf("Enter Four numbers :");
	scanf("%d%d%d%d",&a,&b,&p,&q);
	c=(a>b)||(p<q);
	printf("%d",c);
}
