#include<stdio.h>
 
int main()
{
    char str[200];
    int count=0, i;
 
    printf("Enter the string:\n");
    fgets(str,sizeof str,stdin);
    
    for (i=0;str[i] != '\0';i++)
    {
        if (str[i] == ' ' && str[i+1] == 'i' && str[i+2] == 's' && str[i+3] == ' ' ){
		    count++; 
		}
    }
    printf("Number of times the word 'is' in given string are: %d\n", count);
    
    return 0;
}
