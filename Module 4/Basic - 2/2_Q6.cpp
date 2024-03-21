#include<iostream>
using namespace std;

class person{
	string name;
	int age;
	string country;
	public:
		void get()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
			cout<<"Enter your country: ";
			cin>>country;
		}
		void display()
		{
			cout<<"\nYour name is "<<name;
			cout<<"\nYour age is "<<age;
			cout<<"\nYour country is "<<country;
		}
		
};

int main()
{
	person obj;
	
	obj.get();
	obj.display();
	
	
	return 0;
}
