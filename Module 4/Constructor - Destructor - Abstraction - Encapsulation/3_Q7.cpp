#include<iostream>
using namespace std;

class date{
	int d,m,y;
	public:
		void get()
		{
			cout<<"Enter day: ";
			cin>>d;
			cout<<"Enter month: ";
			cin>>m;
			cout<<"Enter year: ";
			cin>>y;
		}
		void check()
		{
			if((d<=31 && d>=1) && (m>=1 && m<=12)){
			
				if((m==4 || m==6 || m==9 || m==11) && d>30){
					cout<<"Date is invalid";
				}
				else if(y%4!=0 && d>=29){
					cout<<"Date is invalid";
				}
				else {
					cout<<"Date is valid";
				}
		    }
		    else{
		    	cout<<"Invalid date !!";
			}
		}
	
};

int main()
{
	date obj;
	obj.get();
	obj.check();
	
	return 0;
}
