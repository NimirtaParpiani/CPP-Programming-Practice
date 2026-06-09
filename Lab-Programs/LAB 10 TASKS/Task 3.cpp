// Lab 10 - Task 3: Calculator with separate functions
// Four functions for subtraction, multiplication, division and modulus
// Each function takes two integers and returns result, main handles printing

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sub(int a, int b)
{
	return a-b;
}
int mul(int a, int b)
{
	return a*b;
}
int div(int a, int b)
{
	return ((float)a/b);
}
int mod(int a, int b)
{
	return a%b;
}
int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	
	cout<<"Substraction = "<<sub(a,b)<<endl;
	cout<<"Multiplication = "<<mul(a,b)<<endl;
	cout<<"Division = "<<div(a,b)<<endl;
	cout<<"Remainder = "<<mod(a,b)<<endl;
	
}
