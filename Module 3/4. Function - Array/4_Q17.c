//Difference between structure and Union

#include<stdio.h>

union employee{
	
	int u_id;         // size - 4
	char u_name[100]; // size - 100
	float u_salary;   // size - 4 
	                  // overall size = 100 (which is max. size of any datatype.)
};

struct employee1{
	
	int s_id;         // size - 4
	char s_name[100]; // size - 100
	float s_salary;   // size - 4
	                  //overall size = 100 + 4 + 4 = 108 (which is total of all datatypes used.)
};

int main()
{

	struct employee1 s1;
	
	printf("Enter id and name and salary for structure variable\n");
	scanf("%d %s %f",&s1.s_id,&s1.s_name,&s1.s_salary);
	printf("\t  ========Structure========\n");
	printf("\nName is %s\t Id is %d\t Salary is %.2f\n\n",s1.s_name,s1.s_id,s1.s_salary);
	
	union employee u1;
	
	printf("Enter id and name and salary for union variable\n\n");
	printf("\t  ==========Union==========\n");
	scanf("%d",&u1.u_id);
	printf("Id is %d\n",u1.u_id);
	scanf("%s",&u1.u_name);
	printf("Name is %s\n",u1.u_name);
	scanf("%f",&u1.u_salary);
	printf("Salary is %.2f\n\n",u1.u_salary);
 
// Size of Structure and Union :-
 
	printf("Size of structure variable is %d\n",sizeof(s1));
	printf("Size of Union variable is %d",sizeof(u1));
 	
	return 0;
}
