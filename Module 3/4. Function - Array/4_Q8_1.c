#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char temp[100];
	
	printf("Enter a string: \n");
    scanf("%s",str);
    
    strcpy(temp,str);
    
	printf("Reverse of string is %s.\n",strrev(temp));
	
	
    if (strcmp(temp,str)==0){
    	printf("'%s' is palindrome string.",str);
	}
    else {
    	printf("'%s' is not palindrome string.",str);
	}

	return 0;
}
