#include<iostream>
using namespace std;

class calculator{
	double l,w,h,b,r;
	
	public:
		void area()
		{
			cout<<"Enter length and width: ";
			cin>>l>>w;
			cout<<"Area of rectangle is "<<l*w;
		}
		void area(double h,double b)
		{
			cout<<"Area of triangle is "<<0.5*h*b;
		}
		void area(double r)
		{
			cout<<"Area of Circle is "<<3.14*r*r;
		}
};

int main()
{
	calculator obj;
	double no1,no2;
	int choice;
	cout<<"Find Area:\n1 for rectangle\n2 for triangle\n3 for Circle ";
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			obj.area();
			break;
		case 2:
			cout<<"Enter height and base ";
			cin>>no1>>no2;
			obj.area(no1,no2);
			break;
		case 3:
			cout<<"Enter radius ";
			cin>>no1;
			obj.area(no1);
			break;
		default:
			cout<<"Invalid choice";	
	}
	return 0;
}
