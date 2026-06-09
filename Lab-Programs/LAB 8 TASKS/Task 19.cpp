// Lab 8 - Task 19: Complete student records system using 8 arrays
// Stores names, marks for 4 subjects, computes obtained marks, percentage and grade
// Grade: A(80-100), B(70-79), C(60-69), F(below 60)

#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the number of students: ";
	cin>>size;
	
	string name[size];
	int marksP[size], marksM[size], marksE[size], marksPS[size];
	double total[size], pc[size];
	char grade[size];
	
	for(int i=0; i<size; i++)
	{
		cout<<"\n--- Student "<<i+1<<" ---\n";
		cout<<"Name: ";
		cin>>name[i];
		cout<<"Programming marks: ";
		cin>>marksP[i];
		cout<<"Math marks: ";
		cin>>marksM[i];
		cout<<"English marks: ";
		cin>>marksE[i];
		cout<<"Pakistan Studies marks: ";
		cin>>marksPS[i];
	}
	
	for(int i=0; i<size; i++)
	{
		total[i]=marksP[i]+marksM[i]+marksE[i]+marksPS[i];
		pc[i]=total[i]/400.0*100;
		
		if(pc[i]>=80)
			grade[i]='A';
		else if(pc[i]>=70)
			grade[i]='B';
		else if(pc[i]>=60)
			grade[i]='C';
		else
			grade[i]='F';
	}
	
	cout<<"\n==================================================================================\n";
	cout<<"Name\t\tProg\tMath\tEng\tP.S\tTotal\tPercent\tGrade\n";
	cout<<"==================================================================================\n";
	
	for(int i=0; i<size; i++)
	{
		cout<<name[i]<<"\t\t"
			<<marksP[i]<<"\t"
			<<marksM[i]<<"\t"
			<<marksE[i]<<"\t"
			<<marksPS[i]<<"\t"
			<<total[i]<<"\t"
			<<pc[i]<<"%\t"
			<<grade[i]<<"\n";
	}
	cout<<"==================================================================================\n";
}
