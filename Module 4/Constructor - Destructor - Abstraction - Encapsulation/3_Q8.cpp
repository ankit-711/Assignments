#include<iostream>
using namespace std;

class student{
	public:
		int id;
		string address;
		void get_student(int id1,string address1)
		{
			id=id1;
			address=address1;
		}
	
};
class marks{
	
	float pr;
	char grade;
	student *ref;
	public:
		void get_marks(float pr1,char grade1,student *ref1)
		{
			pr = pr1;
			grade = grade1;
			ref = ref1;
		}
		void display()
		{
			cout<<"Id is "<<ref->id<<" Grade is "<<grade<<endl;
			cout<<"Address is "<<ref->address<<" & percentage is "<<pr;
		}
};

int main()
{
	student stu;
	
	stu.get_student(101,"Ahmd");
	marks mark;
	mark.get_marks(78,'A',&stu);
	mark.display();  
	
	
	return 0;
}
