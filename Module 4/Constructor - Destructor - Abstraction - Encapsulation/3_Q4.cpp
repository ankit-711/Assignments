#include<iostream>
using namespace std;

class bank_ac
{
	int ac_no;
	float balance,dp_amt,wt_amt;
	public:
		void get()
		{
			cout<<"Enter account number: ";
			cin>>ac_no;
			cout<<"Enter Total balance: ";
			cin>>balance;
		}
		void deposit()
		{
			cout<<"Enter amount to deposit\n";
			cin>>dp_amt;
			balance = balance + dp_amt;
		}
		void withdraw()
		{
			cout<<"\nEnter amount to withdraw: ";
			cin>>wt_amt;
			if(wt_amt>balance)
			{
				cout<<"\nInsufficient balance";
			}
			else{
				balance = balance - wt_amt;
			}
		}
		void display()
		{
			cout<<"\nTotal account balance is "<<balance;
		}
};
int main()
{
	bank_ac obj;
	obj.get();
	int choice;
	
	cout<<"\nEnter 1 for deposit";
	cout<<"\nEnter 2 for withdraw\n";
	
	cin>>choice;
	
	switch(choice)
	{
		case 1:
			obj.deposit();
			break;
		case 2:
			obj.withdraw();
			break;
		default:
			cout<<"Enter valid choice";
			
	}
	
	obj.display();
	
	return 0;
}
