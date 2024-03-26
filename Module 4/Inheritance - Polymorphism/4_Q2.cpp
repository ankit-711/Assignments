#include<iostream>
using namespace std;

class rectangle{
	protected:
		int length,width;
	public:
		void get()
		{
			cout<<"Enter length and width: ";
			cin>>length>>width;
		}
		
};
class area:public rectangle{
	public:
		void display()
		{
			cout<<"Area of rectangle is "<<length*width;
		}
};

int main()
{
	area obj;
	obj.get();
	obj.display();
	
	return 0;
}
