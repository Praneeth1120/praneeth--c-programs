//read operator and two numbers and perform specific operationon two numbers
#include<stdio.h>
main()
{
	int a,b,sum,difference,product,modulus;
	float division;
	char ch;
	printf("Enter a operator : ");
	scanf("%c",&ch);
	printf("Enter two number : ");
	scanf("%d%d",&a,&b);
	sum = a+b;
	difference = a-b;
	product = a*b;
	modulus = a%b;
	division = a/b;
	switch(ch)
	{
		case '+':printf("sum is %d",sum);
			break;
		case '-':printf("Difference is %d",difference);
			break;
		case '*':printf("Product is %d",product);
			break;
		case '%':printf("Modulus is %d",modulus);
		    break;
		case '/':printf("division is %f",division);
			break;
		default :printf("Invalid");
	}
}
