//program to calculate profit or loss given CP and SP
#include<stdio.h>
main()
{
	int cp,sp,profit,loss;
	printf("Enter CP and SP : ");
	scanf("%d%d",&cp,&sp);
	if(sp>cp)
	{
		profit = sp - cp;
		printf("Profit is %d",profit);
	}
	else
	{
		loss = cp-sp;
		printf("Loss is %d",loss);
	}
}
