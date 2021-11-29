//progprogram to read a character and check whether it is a vowel or not
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a Character : ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is a Vowel",ch);
	}
	else
	{
		printf("%c is not a Vowel",ch);
	}
}
