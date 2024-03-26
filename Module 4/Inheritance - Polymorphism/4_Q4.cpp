#include<iostream>
using namespace std;

class student
{
protected:
    char name[30];
    int roll;
		
    public:
    void get()
    {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll.no: ";
        cin>>roll;
    }
};
class marks
{
protected:
	int mark[4],i;
		 
    public:
    void in()
    {
        cout<<"Enter the marks: ";
        for(i=0;i<4;i++)
        {
            cin>>mark[i];
        }
    }
};
class result:public student,public marks
{
	int total;
    double pr;
    public:
    void calc()
    {
        total = mark[0]+mark[1]+mark[2]+mark[3];
        pr = total/4;
    }
    void display()
    {
        cout<<"Name        : "<<name<<endl;
        cout<<"Roll.no     : "<<roll<<endl;
        cout<<"Marks       : ";
        for(i=0;i<4;i++)
        {
            cout<<mark[i]<<" ";
        }
        cout<<endl;
        cout<<"Total marks : "<<total<<endl;
        cout<<"Percentage  : "<<pr<<endl;
    }
};
int main()
{
    result obj;
    
    obj.get();
    obj.in();
    obj.calc();
    obj.display();
    
    return 0;
}
