#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("Vowel");
			break;
		case 'e':printf("Vowel");
			break;
		case 'i':printf("Vowel");
			break;
		case 'o':printf("Vowel");
			break;
		case 'u':printf("Vowel");
			break;
		default : printf("Consonant");	
	}
}

	/*switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':printf("Vowel");
				break;
		default : printf("Consonant");
				break;
	}*/
