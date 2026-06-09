// Lab 6 - Task 10: Multi-course marks calculator
// Takes n_courses (must be 3-8), calculates average, percentage and PASS/FAIL

#include <iostream>
using namespace std;
int main()
{
	int crs,marks,i;
	int sum = 0;
	cout<<"Enter no.of courses b/w (3-8): ";
	cin>>crs;
	if(crs>8 || crs<3)
	{ cout<<"Invalid Entry"; }
	else
	{ for( i=1; i<=crs; ++i)
	{ cout<<"Enter marks for Course "<<i<<": ";
	cin>>marks;
	sum += marks;}
	}
	 double av = sum/crs, pc=(sum*100.0)/(crs*100.0);
	cout<<"Total marks = "<<sum<<endl;
	cout<<"Average Marks = "<<av<<endl;
	cout<<"Percentage = "<<pc<<"%"<<endl;
	
	if(pc>=60)
	{ cout<<"Result: PASS"; }
	else
	{ cout<<"Result: fail"; }
	
	
	
	
	
	
	
}
