#include<iostream>
using namespace std;

class calculator{
	private:
	float n1,n2;
	public:
		void get()
		{
			cout<<"Enter two values: ";
			cin>>n1>>n2;
		}
		
		void add()
		{
			cout<<"Addition is "<<n1+n2;
		}
		void sub()
		{
			cout<<"Subtraction is "<<n1-n2;
		}
		void mul()
		{
			cout<<"Multiplication is "<<n1*n2;
		}
		void div()
		{
			cout<<"Division is "<<n1/n2;
		}
		
};
int main()  
{
	calculator c;
	char ch;
	
	c.get();
	cout<<"Enter choice ( + , - , * , / ) : "<<ch;
	cin>>ch;
	
	switch(ch)
	{
		case '+': c.add();
		  break;
		case '-': c.sub();
		  break;
		case '*': c.mul();
		  break;  
		case '/': c.div();
		  break;    
		  
		default: cout<<"Invalid choice";
	}
	
	return 0;
}
