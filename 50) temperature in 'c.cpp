#include<stdio.h>
main()
{
	float temp;
	printf("Enter temperature in Centigrade : ");
	scanf("%f",&temp);
	if(temp <= 0)
	{
		printf("Freezing Weather");
	} 
	else if(temp>0&&temp<=10)
	{
		printf("Very cold weather");
	}
	else if(temp>10&&temp<=20)
	{
		printf("cold weather");
	}
	else if(temp>20&&temp<=30)
	{
		printf("Normal in Temperature");
	}
	else if(temp>30&&temp<=40)
	{
		printf("Its Hot");
	}
	else
	{
		printf("Its very hot");
	}
}
