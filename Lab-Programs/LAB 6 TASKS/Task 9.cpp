// Lab 6 - Task 9: Fibonacci series
// Prints 0 1 1 2 3 5 8 13 21 34 ..... using loop

#include <iostream>
using namespace std;
int main()
{
	cout<<"\t Fibonacci series\n\n";
	int num,x,y,z;
	cout<<"Enter ending number: ";
	cin>>num;
	x=0;
	y=1;
	
	if(num>=1)
	cout<<x<<" ";
	
	if(num>=2)
	cout<<y<<" ";
	
	for(int i=3; i<=num; i++)
	{ 	z=x+y;
	cout<<z<<" ";
	x=y;
	y=z;

	}
	
	
	
	
	
	
	
	
}
