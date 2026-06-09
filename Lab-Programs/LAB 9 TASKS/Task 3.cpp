// Lab 9 - Task 3: Absolute value calculator using ternary operator
// Takes a number from user and displays its absolute value

#include <iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	(num<0) ? cout<<"The absolute value is "<<-num : cout<<"The absolute value is "<<num; 
}
