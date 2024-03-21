#include<iostream>
using namespace std;

class triangle
{
	int a,b,c;
	public:
		void get()
		{
			cout<<"Enter three sides of triangle: ";
			cin>>a>>b>>c;
		}
		void type()
		{
			if(a==b && b==c)
			{
				cout<<"Triangle is equilateral.";
			}
			else if(a==b || b==c || a==c)
			{
				cout<<"Triangle is isosceles.";
			}
			else {
				cout<<"Triangle is scalene.";
			}
		}
};

int main()
{
	triangle obj;
	
	obj.get();
	obj.type();
	
	return 0;
}
