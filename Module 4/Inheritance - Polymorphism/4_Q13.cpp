#include<iostream>
using namespace std;

class maxx{
	int a,b;
	public:
		void get()
		{
			cout<<"enter two numbers: ";
			cin>>a>>b;
		}
		void display()
		{
			cout<<"a is "<<a<<" and b is "<<b;
		}
	friend void temp(maxx);	
};
void temp(maxx obj)
{
	if(obj.a > obj.b){
		cout<<"\n\na is max.";
	}
	else{
		cout<<"\n\nb is max.";
	}
}
int main()
{ 
    maxx obj;
    obj.get();
    obj.display();
	temp(obj);
	
	return 0;
}
