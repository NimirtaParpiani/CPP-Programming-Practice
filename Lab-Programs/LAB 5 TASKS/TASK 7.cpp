// Lab 5 - Task 7: Largest of Three Numbers
// Takes three numbers from user and displays the largest one

#include <iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter 3 numbers: ";
	cin>>x>>y>>z;
	
	if (x>y && x>z)
	{ cout<<"First one is greatest"; }
	
	else if (x<y && y>z)
	{ cout<<"Second one is greatest"; }
	
	else if(z>x && z>y)
	{ cout<<"Third one is greatest"; }
	
	else
	{ cout<<"all are equal"; }	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
