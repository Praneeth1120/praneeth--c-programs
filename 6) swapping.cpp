#include<stdio.h>
main()
{
	int a ,b,temp;
	printf("Enter two numbers :",a,b);
	scanf("%d %d",&a,&b);
	temp = a;
	a=b;
	b=temp;
	printf("Swapped numbers are %d,%d: ",a,b);
}
