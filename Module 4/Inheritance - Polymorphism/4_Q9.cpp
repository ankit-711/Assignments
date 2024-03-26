#include<iostream>
using namespace std;

class add{
	int a[3];
	public:
		void get()
		{
			
			for(int i=0;i<3;i++)
			{
				cin>>a[i];
			}
		}
		void display()
		{
			for(int i=0;i<3;i++)
			{
				cout<<a[i]<<"  ";
			}
		}
		add operator +(add obj)
		{
			int ans[3];
			
			for(int i=0;i<3;i++)
			{
				ans[i] = a[i] + obj.a[i];
			}
			
			cout<<"\nAddition = ";
			
			for(int i=0;i<3;i++)
			{
				cout<<ans[i]<<"  ";
			}
		}
};
int main()
{
	cout<<"Enter three value: ";
	add obj1;
	obj1.get();
	obj1.display();
	
	cout<<"\nEnter three value: ";
	add obj2;
	obj2.get();
	obj2.display();
	
	obj1+obj2;
	
	return 0;
}
