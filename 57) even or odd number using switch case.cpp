//To check whether a number is even or odd
#include<stdio.h>
main()
{
	int a,rem;
	printf("Enter a number : ");
	scanf("%d",&a);
	rem = a%2;
	switch(rem)
	{
		case 0:printf("Even");
			break;
		default : printf("Odd");
	}
}
