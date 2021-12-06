#include<stdio.h>
#include<math.h>
main()
{
	int a,b,c;
	float root1,root2,d;
	printf("Enter values of a,b,c in the quadratic equation :");
	scanf("%d%d%d",&a,&b,&c);
	d = ((b*b)-(4*a*c));
	if(d>0)
	{
		root1 = ((-b+sqrt(d))/2*a);
		root2 = ((-b-sqrt(d))/2*a);
		printf("The roots are Real and distinct %f %f",root1,root2);
	}
	else if(d<0)
	{
		root1 = ((-b+sqrt(d))/2*a);
		root2 = ((-b-sqrt(d))/2*a);
		printf("The roots are imaginary %f %f",root1,root2);
	}
	else if(d==0)
	{
		root1 = ((-b+sqrt(d))/2*a);
		root2 = ((-b-sqrt(d))/2*a);
		printf("The roots are real and Equal %f %f",root1,root2);
	}
}
