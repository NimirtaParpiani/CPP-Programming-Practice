// Lab 10 - Task 7: Prime number checker function
// Takes integer parameter, returns true if prime false otherwise
// Main handles user input and printing the message

#include <iostream>
using namespace std;
bool prime(int);
int main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	prime(num);
}
bool prime(int num)
{
	bool prime = true;
	for(int i=2; i<num/2; i++)
	{
		if(num%i==0)
		prime = false;
		break;
	}
	if(prime)
	{
		return true;
	}
	else
	{
		return false;
	}
}
