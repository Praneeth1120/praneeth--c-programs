#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float d,root1,root2;
	printf("Enter a,b,c : ");
	scanf("%d%d%d",&a,&b,&c);
	d = ((b*b)-(4*a*c));
	root1 = ((-b+sqrt(d))/(2*a));
	root2 = ((-b-sqrt(d))/(2*a));
	switch(d>0)
	{
		case 1:printf("The roots are Real and distinct %f %f",root1,root2);
				break;
		case 0: switch(d<0)
				{
					case 1:printf("The roots are imaginary %f %f",root1,root2);
							break;
					case 0:printf("The roots are real and Equal %f %f",root1,root2);
							break;	
				}
	}
}
