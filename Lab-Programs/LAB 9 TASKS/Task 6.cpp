// Lab 9 - Task 6: Letter grade checker using ternary operator
// Takes student score and displays grade A/B/C/D/F based on grading scale

#include <iostream>
using namespace std;
int main ()
{
	int s;
	cout<<"Enter your score: ";
	cin>>s;
	
	string grade = (s>=90 && s<=100) ? "A" : (s>=80 && s<=89) ? "B" : (s>=70 && s<=79) ? "C" : 
		  (s>=60 && s<=69) ? "D" : "F";
		  
	cout<<"Grade "<<grade;
}
