// Lab 5 - Task 2: Marksheet with Grade
// Takes marks for 5 subjects, calculates percentage and displays grade

#include <iostream>
using namespace std;
int main()
{
	int marks1,marks2,marks3,marks4,marks5;
	cout<<"ENTER YOUR MARKS OF 5 SUBJECTS\n\n";
	cout<<"Subject 1: ";
	cin>>marks1;
	cout<<"Subject 2: ";
	cin>>marks2;
	cout<<"Subject 3: ";
	cin>>marks3;
	cout<<"Subject 4: ";
	cin>>marks4;
	cout<<"Subject 5: ";
	cin>>marks5;
	
	int obt_marks=marks1+marks2+marks3+marks4+marks5;
	float pc=(obt_marks/500.0)*100;
	
	cout<<"Obtained marks: "<<obt_marks<<endl;
	cout<<"Percentage: "<<pc<<"%"<<endl;
	
	if(pc>=90 && pc<=100)
	{ cout<<"Grade: A1"; }
	
	else if(pc>=80 && pc<=89)
	{ cout<<"Grade: A"; }
	
	else if(pc>=70 && pc<=79)
	{ cout<<"Grade: B"; }
	
	else if(pc>=60 && pc<=69)
	{ cout<<"Grade: C"; }
	
	else if(pc>=0 && pc<=59)
	{ cout<<"Grade: F"; }
	
	else
	{ cout<<"Invalid Marks"; }
	
}
