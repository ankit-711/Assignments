#include<iostream>
using namespace std;

class circle{
	float radius;
	public:
		void get()
		{
			cout<<"Enter radius: ";
			cin>>radius;
		}
		void area()
		{
			cout<<"\nArea of circle is "<<3.14*radius*radius;
		}
		void circumference()
		{
			cout<<"\nCircumference of circle is "<<2*3.14*radius;		
		}
	
};

int main()
{
	circle obj;
	
	obj.get();
	obj.area();
	obj.circumference();
	
	return 0;
}
