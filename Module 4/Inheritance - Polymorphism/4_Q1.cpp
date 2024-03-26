#include<iostream>
using namespace std;

class cricketer{
  protected:
	int total_runs;
	int total_matches;
	int best_score;
	int avg_runs;
	
	public:
		void get()
		{
			cout<<"Enter total no. of runs: ";
			cin>>total_runs;
			cout<<"Enter no. of matches: ";
			cin>>total_matches;
			cout<<"Enter best score: ";
			cin>>best_score;
		}
		void avg()
		{
			avg_runs = total_runs/total_matches;
		}
};
class batsman: public cricketer{
	
	public:
		void display()
		{
			cout<<"Average of batsman is "<<avg_runs;
		}
};

int main()
{
	batsman obj;
	
	obj.get();
	obj.avg();
	obj.display();
	  
	return 0;
}
