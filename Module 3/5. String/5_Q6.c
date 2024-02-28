#include<stdio.h>

int main()
{
    char str[200];
    int a=0,d=0,s=0, i;
 
    printf("Enter the string:\n");
    fgets(str,sizeof str,stdin);
    
    for (i=0;str[i] != '\0';i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z'){
        	a++;
		}
		else if(str[i] >= '0' && str[i] <= '9'){
			d++;
		}
		else if(str[i] != ' ' && str[i] != '\0'){
			s++;
		}
    }
    printf("Number of alphabets in given string are: %d\n",a);
    printf("Number of digits in given string are: %d\n",d);
    printf("Number of Special characters in given string are: %d\n",s-1);
    
    return 0;
}
