#include<stdio.h>
main()
{
	float basic,hra,da,gross_salary;
	printf("Enter Basic salary : ");
	scanf("%f",&basic);
	if(basic <= 10000)
	{
		hra = (20*basic)/100;
		da = (80*basic)/100;
		gross_salary = basic + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
	else if(basic <= 20000)
	{
		hra = (25*basic)/100;
		da = (90*basic)/100;
		gross_salary = basic + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
	else if(basic > 20000)
	{
		hra = (30*basic)/100;
		da = (95*basic)/100;
		gross_salary = basic + hra + da;
		printf("Gross salary = %f",gross_salary);
	}
}
