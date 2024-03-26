#include<iostream>
using namespace std;

class employee{
	string name;
	int id;
	float salary;
	char ch;
	public:
		employee()
		{
			cout<<"Enter name, id and salary : ";
			cin>>name>>id>>salary;
		}
		void display(char ch)
		{

			if(ch =='A'){
				salary = salary + salary*0.40;
				cout<<"Your salary is "<<salary;
			}
			else if(ch =='B'){
				salary = salary + salary*0.25;
				cout<<"Your salary is "<<salary;
			}
			else if(ch =='C'){
				salary = salary + salary*0.10;
				cout<<"Your salary is "<<salary;
			}
		}
};
int main()
{

	employee obj;
	obj.display('A');
	
	return 0;
}
