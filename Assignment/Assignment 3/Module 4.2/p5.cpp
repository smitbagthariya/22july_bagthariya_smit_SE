
//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
//Data member of batsman. Total runs, Average runs and best performance. 
//Member functions input data, calculate average runs, Display data. (Single Inheritance)  

#include<iostream>
using namespace std;
class cricketer
{
	string name;
	int age;	
	
	public:
	
	void inputdata()
	{
		cout<<"Enter Cricketer Name: ";
		cin>>name;
		cout<<"Enter Cricketer Age: ";
		cin>>age;
	}
	
	void displaydata()
	{
		cout<<"\nCricketer Name: "<<name;
		cout<<"\nCricketer Age: "<<age;
	}
};
class batsman : public cricketer
{
	int runs;
	int matches_play;
	int best_performance;
	int average_runs;
	
	public:
	
	void inputdata()
	{
		cricketer::inputdata();
		cout<<"Enter Runs: ";
		cin>>runs;
		cout<<"Enter Matches play: ";
		cin>>matches_play;
		cout<<"Enter Best performance: ";
		cin>>best_performance;
	}
	
	void calaverage_runs()
	{
		average_runs=runs/matches_play;
	}
	
	void displaydata()
	{
		cricketer::displaydata();
		cout<<"\nRuns: "<<runs;
		cout<<"\nMatches play: "<<matches_play;
		cout<<"\nBest performance: "<<best_performance;
		cout<<"\nAverage runs: "<<average_runs;
	}
};
main()
{
	batsman b1;
	b1.inputdata();
	b1.calaverage_runs();
	b1.displaydata();
		
}
