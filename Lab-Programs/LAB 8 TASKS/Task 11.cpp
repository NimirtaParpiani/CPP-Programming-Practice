// Lab 8 - Task 11: Sum of array elements
// Takes array size and values from user, prints sum of all elements

#include <iostream>
using namespace std;
int main()
{
	int size,sum=0;
	cout<<"Enter the size of Array: ";
	cin>>size;
	
	int num[size];
	
	for(int i=0; i<size; i++)
	{ cout<<"Enter value number "<<i+1<<": ";
	cin>>num[i];
	sum += num[i];}
	
	cout<<"Sum of all these numbers = "<<sum;
}
