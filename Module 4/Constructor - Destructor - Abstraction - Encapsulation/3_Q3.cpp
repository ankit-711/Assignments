#include<iostream>
using namespace std;

class car{
	string company,model;
	int year;
	public:
		void get()
		{
			cout<<"Enter company name: ";
			cin>>company;
			cout<<"Enter model: ";
			cin>>model;
			cout<<"Enter year: ";
			cin>>year;
		}
		void display()
		{
			cout<<"\nCompany: "<<company<<endl;
			cout<<"Model  : "<<model<<endl;
			cout<<"Year   : "<<year<<endl;
		}
	
};

int main()
{
	car c;
	
	c.get();
	c.display();
	
	return 0;
}
