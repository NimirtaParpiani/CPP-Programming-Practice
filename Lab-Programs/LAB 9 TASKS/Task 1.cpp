// Lab 9 - Task 1: Maximum of three numbers using ternary operator
// Takes three numbers from user and finds the largest using ternary operator

#include <iostream>
using namespace std;
int main ()
{
	int x,y,z,max;
	cout<<"Enter 3 numbers: ";
	cin>>x>>y>>z;
	
	max = (x>y && x>z) ? x : (y>x && y>z) ? y : z;
	
	cout<<"The maximum number is "<<max; 
}
