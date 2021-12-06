#include<stdio.h>
main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float percent;
	printf("Enter marks in 5 subjects : ");
	scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
	total = sub1+sub2+sub3+sub4+sub5;
	percent = (total*100)/500;
	if(percent>90)
	{
		printf("The Grade is A");
	}
	else if(percent>80)
	{
		printf("The Grade is B");
	}
	else if(percent>70)
	{
		printf("The Grade is c");
	}
	else if(percent>40)
	{
		printf("The Grade is D");
	}
	else if(percent<40)
	{
		printf("The Grade is E");
	}
}
