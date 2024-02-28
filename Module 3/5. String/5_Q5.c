#include<stdio.h> 

int main()
{
    char str1[100], str2[100]; 
    int i = 0; 
    
    printf("Enter the first string: ");
    fgets(str1,sizeof str1,stdin);

    printf("Enter the second string: ");
    fgets(str2,sizeof str2,stdin);

    while (str1[i] == str2[i] && str1[i] != '\0') {
        i++;
    }

    if (str1[i] > str2[i]) {
        printf("String 1 comes after String 2.\n");
    } else if (str1[i] < str2[i]) {
        printf("String 1 comes before String 2.\n");
    } else {
        printf("Both strings are the same.\n");
    }

    return 0; 

}
