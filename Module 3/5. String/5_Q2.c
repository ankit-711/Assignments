#include<stdio.h>

int main() 
{
    char str[90];
    int i=0;
    printf("Enter name: ");
    scanf("%s",str);
    
    while (str[i]!='\0')
	{
        printf("%c ",str[i]);
        i++;
    }
    
    return 0;
}
