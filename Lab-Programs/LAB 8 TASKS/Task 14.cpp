// Lab 8 - Task 14: Print only even values from array
// Takes array size and elements from user, prints only even values

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
	cin>>num[i];
	}
	
	cout<<"\nThe EVEN numbers are: ";
	for(int i=0; i<size; i++)
	{
		if(num[i]%2==0)
		cout<<num[i]<<"  ";
	}
	
	
	
}
