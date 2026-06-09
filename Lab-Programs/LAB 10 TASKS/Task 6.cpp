// Lab 10 - Task 6: Even or Odd function
// Takes one integer, returns string "Even" or "Odd"
// Main handles user input and displaying result

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string EvenOdd(int num)
{
	if(num%2==0)
	return "Even";
	else
	return "Odd";
}
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<EvenOdd(num);
}
