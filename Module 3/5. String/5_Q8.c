#include<stdio.h>

int main()
{
    char str[100];
    int i,v=0,c=0;
 
    printf("Enter the string(a to z): \n");
    fgets(str,sizeof str,stdin);
    
    for (i=0;str[i] != '\0';i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
        	v++;
		}
		else if(str[i] >= 'a' && str[i] <= 'z'){
			c++;
		}
    }
    printf("Number of vowels in string are: %d\n",v);
    printf("Number of consonants in string are: %d",c);
    
    return 0;
}
