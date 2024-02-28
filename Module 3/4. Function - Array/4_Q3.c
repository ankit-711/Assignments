#include<stdio.h>
 
void reverse(char str[0]);

int main()
{
  char a[100];
  printf("Enter string: ");
  fgets(a,sizeof a,stdin);
  
  reverse(a);
  return 0;
}

void reverse(char str[0])
{
  if (str[0])
  {
    reverse(str + 1);
    printf("%c", str[0]);
  }
}
 
