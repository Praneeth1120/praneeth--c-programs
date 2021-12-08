#include<stdio.h>
main()
{
	int a,b,c,max,min,sum;
	printf("eter Three Numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
    {
        max=a;
        if(b<c)
        {
            min=b;
        }
        else 
        {
            min=c;
        }
    }
    else if(b>a&&b>c)
    {
        max=b;
        if(a<c)
        {
            min=a;
        }
        else 
        {
            min=c;
        }
    }
    else if(c>a&&c>b)
    {
        max=c;
        if(a<b)
        {
            min=a;
        }
        else
        {
            min=b;
        }
    }
    sum = max+min;
    printf("%d",sum);
}
