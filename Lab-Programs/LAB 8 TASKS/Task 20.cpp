// Lab 8 - Task 20: Find smallest value in array
// Takes array elements from user and prints the smallest value

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
	
	int smallest = num[0];
	
	for(int i=0; i<size; i++)
	{
		if(num[i]<smallest)
		smallest = num[i];
	}
	
	cout<<"\nThe smallest value is: "<<smallest;
	
	
	
	
	
	
}
