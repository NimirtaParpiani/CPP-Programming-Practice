// Lab 8 - Task 16: Copy array in reverse order into second array
// Takes array input, copies in reverse into new array, displays both

#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of array: ";
	cin>>size;
	
	int arr1[size];
	for(int i=0; i<size; i++)
	{
		cout<<"Enter value "<<i+1<<": ";
		cin>>arr1[i];
	}
	
	cout<<"\nValues of first array are: "<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	cout<<"\n\nValues of second array are: "<<endl;
	for(int i=size-1; i>=0; i--)
	{
		cout<<arr1[i]<<" ";
	}
	
	
}
