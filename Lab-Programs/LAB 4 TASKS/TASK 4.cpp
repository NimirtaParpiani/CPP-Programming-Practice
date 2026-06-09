// Lab 4 - Task 4: Calculate value of X using formula
// X = 5ab(a+b) - 3ab, takes values of a and b from user

#include <iostream>
using namespace std;
int main()
{
	float a,b;
	
	cout<<"Enter value for A: ";
	cin>>a;
	
	cout<<"Enter value for B: ";
	cin>>b;
	
	float X = 5*a*b*(a+b)-3*a*b;
	cout<<"The value of X by the formula (X=5ab(a+b)-3ab) is "<<X;
	
	
	
}
