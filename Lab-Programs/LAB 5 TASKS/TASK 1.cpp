// Lab 5 - Task 1: CGPA Calculator
// Takes marks out of 100 and displays CGPA according to grading table

#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"ENTER YOUR MARKS: ";
	cin>>marks;
	if(marks>=93 && marks<=100)
	{ cout<<"Your CGPA is 4.00"; }
	
	else if(marks>=87 && marks<=92)
	{ cout<<"Your CGPA is 3.67"; }
	
	else if(marks>=82 && marks<=86)
	{ cout<<"Your CGPA is 3.33"; }
	
	else if(marks>=77 && marks<=81)
	{ cout<<"Your CGPA is 3.00"; }
	
	else if(marks>=72 && marks<=76)
	{ cout<<"Your CGPA is 2.67"; }
	
	else if(marks>=68 && marks<=71)
	{ cout<<"Your CGPA is 2.30"; }
	
	else if(marks>=64 && marks<=67)
	{ cout<<"Your CGPA is 2.00"; }
	
	else if(marks>=60 && marks<=63)
	{ cout<<"Your CGPA is 1.67"; }
	
	else if(marks>=0 && marks<=59)
	{ cout<<"Your CGPA is 0.00"; }
	
	else
	{ cout<<"Invalid Marks"; }
}
