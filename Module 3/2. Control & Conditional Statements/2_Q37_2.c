#include<stdio.h>
int main()
{
	char choice;

	printf("Enter any alphabet in lowercase\n");
	scanf("%c",&choice);
	
    switch(choice)  
    {
	    case 'a': printf("Vowel");
	         break;
        case 'e': printf("Vowel");
	         break;
	    case 'i': printf("Vowel");
	         break;
	    case 'o': printf("Vowel");
	         break;
	    case 'u': printf("Vowel");
	         break;
	    default : printf("Consonant"); 		          
    }
	return 0;
}
