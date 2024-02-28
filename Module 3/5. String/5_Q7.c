#include<stdio.h>
#include<string.h>
 
int main()
{
    char str[100],copy[100];
    int i;
 
    printf("Enter the string:\n");
    fgets(str,sizeof str,stdin);
    
    strcpy(copy,str);
    
    printf("Copy of your string is: %s",copy);

    return 0;
}
