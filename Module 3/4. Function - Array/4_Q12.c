#include<stdio.h>
struct student{
	char name[20];
};

int main() {
	
	int i;
    struct student s[5];
    printf("Enter name of students.\n");
    
	for(i=0;i<5;i++)
    {
        printf("%d. ",i+1);
        scanf("%s",&s[i].name);
        
    }
    for(i=0;i<5;i++)
    {
        printf("Student %d: %s\n",i+1,s[i].name);
    }
    return 0;
}
