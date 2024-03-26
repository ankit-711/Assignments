#include<iostream>
using namespace std;

class Swap{
	int a,b;
	public:
		void get()
		{
			cout<<"enter two numbers: ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"Before swap: a is "<<a<<" and b is "<<b;
		}
	friend void temp(Swap);	
};
void temp(Swap obj)
{
	obj.a = obj.a+obj.b;
	obj.b = obj.a-obj.b;
	obj.a = obj.a-obj.b;
	cout<<"\n\nAfter swap : a is "<<obj.a<<" and b is "<<obj.b;
}
int main()
{ 
    Swap obj;
    obj.get();
    obj.display();
	temp(obj);
	
	return 0;
}
