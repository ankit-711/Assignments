#include<iostream>
using namespace std;

class rectangle{
	float length,width;
	public:
		void get()
		{
			cout<<"Enter length and width: ";
			cin>>length>>width;
		}
		void area()
		{
			cout<<"\nArea of rectangle is "<<length*width;
		}
		void perimeter()
		{
			cout<<"\nPerimeter of rectangle is "<<2*(length+width);		
		}
	
};

int main()
{
	rectangle obj;
	
	obj.get();
	obj.area();
	obj.perimeter();
	
	return 0;
}
