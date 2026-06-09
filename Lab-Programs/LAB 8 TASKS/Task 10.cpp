// Lab 8 - Task 10: Display array in reverse order
// Takes N values from user and displays them in reverse order

#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of Array: ";
	cin>>size;
	
	int num[size];
	
	for(int i=0; i<size; i++)
	{ cout<<"Enter value number "<<i+1<<": ";
	cin>>num[i]; }
	
	cout<<"\nThe numbers in the reverse order are: \n";
	for(int i=size-1; i>=0; i--)
	{ cout<<num[i]<<" ";
	}
	
	
	
	
	
	
}
