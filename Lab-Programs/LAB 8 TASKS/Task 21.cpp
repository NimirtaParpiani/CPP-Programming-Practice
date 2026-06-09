// Lab 8 - Task 21: Find largest value in array
// Takes array elements from user and prints the largest value

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
	
	int largest = num[0];
	
	for(int i=0; i<size; i++)
	{
		if(num[i]>largest)
		largest = num[i];
	}
	
	cout<<"\nThe Largest value is: "<<largest;
	
	
	
	
	
	
}
