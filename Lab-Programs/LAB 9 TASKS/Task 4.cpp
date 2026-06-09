// Lab 9 - Task 4: Leap year checker using ternary operator
// Takes year from user and checks divisibility by 4 to determine leap year

#include <iostream>
using namespace std;
int main ()
{
	int year;
	cout<<"Enter any year: ";
	cin>>year;
	
	(year%4 == 0 && year%100 != 0 || year%400 == 0) ? cout<<"Leap year" : cout<<"Common year";
}
