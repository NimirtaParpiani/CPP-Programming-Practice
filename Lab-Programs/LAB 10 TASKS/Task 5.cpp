// Lab 10 - Task 5: Factorial function
// Takes one non-negative integer, returns its factorial
// Main handles user input and displaying result

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double fact(int num)
{
	int fact=1;
	for(int i=1; i<=num; i++)
	{
		fact *= i;
	}
	return fact;
}
int input()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"Factorial of "<<num<<" is "<<fact(num);
}
int main()
{	
	input();
	
	
	
	
	
	
	
	
}
