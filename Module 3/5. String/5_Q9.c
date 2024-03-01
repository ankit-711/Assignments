#include<stdio.h>

int main()
{
    char str[100];
    int freq[250]; 
    int i = 0, max;
    int ascii;

    printf("Enter any string: ");
    gets(str);

    for(i=0; i<250; i++)
    {
        freq[i] = 0;
    }

    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }

    max = 0;
    for(i=0; i<250; i++)
    {
        if(freq[i] > freq[max])
            max = i;
    }

    printf("Maximum number of character is '%c' = %d times.", max, freq[max]);

    return 0;
}
