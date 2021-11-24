#include<stdio.h>
main()
{
	float temp,celsius;
	printf("Enter Temperature in Farenheit :");
	scanf("%f",&temp);
	celsius = (5*(temp -32))/9;
	printf("Temperature in Celsius is :%f",celsius);
}
