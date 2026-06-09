// Lab 7 - Task 7: Average test scores of students
// Takes total students and tests per student, calculates and displays average for each student

#include <iostream>
using namespace std;
int main()
{
	int stds,score,marks;
	float av;
	
	cout<<"\t This Program Averages Test Scores\n\n";
	
	cout<<"For how many students do you have score: ";
	cin>>stds;
	cout<<"How many test scores does each student have: ";
	cin>>score;
	
	for(int x=1; x<=stds; x++)
	{ int sum=0;
	for(int y=1; y<=score; y++)
	{ cout<<"Enter score "<<y<<" for student "<<x<<": ";
	cin>>marks;
	sum += marks; }
	av=sum/score;
	cout<<"The average score of student "<<x<<" is "<<av<<"\n";
	}
	
	
	
	
	
	
	
	

}
