#include<stdio.h>
main()
{
	int units;
	float bill,surcharge,total;
	printf("Enter number of units : ");
	scanf("%d",&units);
	if(units<=50)
	{
		bill=units*0.50;
	}
	else if(units>50&&units<=150)
	{
		bill = (50*0.5) +((units -50) *0.75);
	}
	else if(units>150&&units<=250)
	{
		bill = ((units-150)*1.25)+(50*0.5)+(100*0.75);
	}
	else if(units>250)
	{
		bill = ((units-250)*1.50)+(50*0.5)+(100*0.75)+(100*1.25);
	}
	surcharge = (20*bill)/100;
	total = bill + surcharge;
	printf("TOTAL BILL = %f",total);
}
