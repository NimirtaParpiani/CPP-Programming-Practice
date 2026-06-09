// Lab 4 - Task 7: Check if at least one condition is true
// Takes a and b from user, checks if a<50 OR a<b is true

#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ENTER 2 NUMBERS: ";
	cin>>a>>b;
	
	if(a<50 && a<b)
	{ cout<<"TRUE "<<a<<" is less than 50 and "<<b;}
	
	else if(a<50 && a>b)
	{ cout<<a<<" is less than 50 but greater than "<<b;}
	
	else if(a>50 && a<b)
	{ cout<<a<<" is less than "<<b<<" but greater than 50";}
	
	else
	{ cout<<"FALSE";}
	
	
	
	
	
}
