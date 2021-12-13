//read a digit and display whether it is odd or even using switch case
#include<stdio.h>
main()
{
	int a;
	printf("Enter a digit : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:printf("ODD");
			break;
		case 2:
		case 4:
		case 6:
		case 8:printf("EVEN");
			break;
		default :printf("Not a digit");
	}
}
