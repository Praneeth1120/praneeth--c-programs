#include<stdio.h>
int main()
{
	int weeklyhours,hourlyrate;
	float earnings;
	printf("Enter Weekly Hours : ");
	scanf("%d",&weeklyhours);
	printf("Enter Hourly Rate : ");
	scanf("%d",&hourlyrate);
	if(weeklyhours <= 40)
	{
		earnings = hourlyrate * weeklyhours;
	}
	else
	{
		earnings = (40 * hourlyrate )+ (weeklyhours -40) * (hourlyrate * 1.5);
	}
	printf("Earnings are : %f",earnings);
}
