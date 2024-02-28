#include<stdio.h>

void add();
void sub(int n1,int n2);
int mul();
float div(float n1,float n2);

int main()
{
	int choice;
	int no1,no2;
	
	printf("1 for addition\t2 for subtraction\t3for multiplication\t4 for division: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			add();
			break;
		case 2:
			printf("Enter two values");
			scanf("%d %d",&no1,&no2);
			sub(no1,no2);
			break;
		case 3:
		    printf("Multiplication is %d",mul());
			break;
		case 4:
		    printf("Enter two values");
			scanf("%d %d",&no1,&no2);
		   if(no2==0)
			{
				printf("Can't divide by zero");
			}	
		   else{
		   	printf("%f is division",div(no1,no2));
		   }
		   break;
		default: 
		    printf("Invalid choice");   
	}

	return 0;
}

void add()
{
	int n1,n2;
	printf("Enter two values");
	scanf("%d %d",&n1,&n2);
	printf("Addition is %d",n1+n2);
	
}	
void sub(int n1,int n2)
{
	printf("Subtraction is %d",n1-n2);
	
}	
int mul()
{
	int n1,n2;
	printf("Enter two values");
	scanf("%d %d",&n1,&n2);
	return n1*n2;
}

float div(float n1,float n2)
{
	return n1/n2;
}
