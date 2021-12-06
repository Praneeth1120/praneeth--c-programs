#include<stdio.h>
main()
{
	float a=10,b,c,d,e;
	b=++a;
	c=a++;
	d=--a;
	e=a--;
	printf("%f\n%f\n%f\n%f",b,c,d,e);
}
