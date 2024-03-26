#include<iostream>
using namespace std;

class student{
	protected:
		int roll;
	public:
		void info()
		{
			cout<<"Enter roll number: ";
			cin>>roll;
		}
};
class test: public student{
	protected:
		int mark1,mark2;
		public:
			void get()
			{
				cout<<"Enter two subject's marks: ";
				cin>>mark1>>mark2;
			}
};
class result: public test{
	int total;
	public:
		void res()
		{
			total = mark1 + mark2;
		}
		void display()
		{
			cout<<"Roll no.    : "<<roll;
			cout<<"\nMarks 1     : "<<mark1;
			cout<<"\nMarks 2     : "<<mark2;
			cout<<"\nTotal marks : "<<total;
		}
	
};

int main()
{
	result obj;
	
	obj.info();
	obj.get();
	obj.res();
	obj.display();
	
	return 0;
}
