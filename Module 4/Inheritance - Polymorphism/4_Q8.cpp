#include<iostream>
using namespace std;
class calculator{
	double n1,n2;
	public:
		void ans()
		{
			cout<<"Enter value for number 1 and number 2.\n";
			cin>>n1>>n2;
			cout<<"Additon is "<<n1+n2;
		
		}
		void ans(int a,int b)
		{
			n1=a;
			n2=b;
			cout<<"Subtraction is "<<n1-n2;
		}
		void ans(int x)
		{
			n1=x;
			cout<<"Enter 2nd value for multiplication: ";
			cin>>n2;
			cout<<"Multiplication is "<<n1*n2;
		}
		void ans(double a,double b)
		{
			n1=a;
			n2=b;
			if(n2!=0)
			{
				cout<<"Division is "<<n1/n2;
			}
			else{
				cout<<"Can't divide by zero";
			}
		}
};
int main()
{
	calculator obj;
	
	int choice,no1,no2;
	double n1,n2;
	cout<<"1 for '+' 2 for '-' 3 for '*' 4 for '/' ";
	cin>>choice;
	
	if(choice==1)
	{
	    obj.ans();
	}
	else if(choice==2)
	{
		cout<<"Enter two values for subtraction: ";
		cin>>no1>>no2;
		obj.ans(no1,no2);
	}
	else if(choice==3)
	{
		cout<<"Enter 1st value for multiplication: ";
		cin>>no1;
		obj.ans(no1);
	}
	else if(choice==4)
	{
		cout<<"Enter two values for division: ";
		cin>>n1>>n2;
		obj.ans(n1,n2);
	}
	else {
		cout<<"Invalid choice";
	}
	
	return 0;
}
