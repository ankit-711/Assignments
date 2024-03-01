#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	int i,j,l,k,l2;
	
	printf("Enter first string: ");
	fgets(str1,sizeof str1,stdin);
	printf("Enter second string: ");
	fgets(str2,sizeof str2,stdin);
	
	l = strlen(str1);
	l2 = strlen(str2);
	
	for(i=l-1,j=0;i<=str2[l2],j<=l2;i++,j++){
	
		str1[i] = str2[j];
	}
	
	printf("After combining two strings : %s",str1);
	return 0;
}
