// Lab 10 - Task 7: Prime number checker function
// Takes integer parameter, returns true if prime false otherwise
// Main handles user input and printing the message

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double pcg(double obt_marks, double total_marks)
{
	return ((obt_marks/total_marks)*100.0);
}
int main()
{
	double obt_marks, total_marks;
	cout<<"Enter Obtained marks: ";
	cin>>obt_marks;
	
	cout<<"Enter Total marks: ";
	cin>>total_marks;
	
	cout<<"Percentage = "<<pcg(obt_marks,total_marks);
}
