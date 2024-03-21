#include<iostream>
using namespace std;

inline void mul(int x,int y)
{
	cout<<x*y;
}
inline void cube(int x)
{
	cout<<x*x*x;
}

int main()
{
	int a,b,choice;
	
	cout<<"Enter 1 for multiplication and 2 for cube\n";
	cin>>choice;
	
	switch (choice)
	{
		case 1:
		      cout<<"Enter two values for multiplication\n";
		      cin>>a>>b;
	          mul(a,b);
	          break;
	          
	    case 2:
		      cout<<"Enter value for find cube\n";
	          cin>>a;
	          cube(a);
			  break;
		default:
			 cout<<"Invalid Choice";      
    }
	
	
	return 0;
}
