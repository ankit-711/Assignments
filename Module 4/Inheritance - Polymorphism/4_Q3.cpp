#include<iostream>
using namespace std;

class student{
	protected:
		double pr;
	public:
		void get_pr()
		{
			cout<<"Enter percentage: ";
			cin>>pr;
		}
};
class teacher{
	protected:
	    double salary;
	public:
	    void get_salary()
		{
			cout<<"Enter salary: ";
			cin>>salary;
		}
};
class person: public student,public teacher{
	string name;
	int age;
	public:
		void get()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter age: ";
			cin>>age;
		}
		
};
int main()
{
	person obj;
	
	obj.get();
	obj.get_pr();
	obj.get_salary();

	return 0;
}
