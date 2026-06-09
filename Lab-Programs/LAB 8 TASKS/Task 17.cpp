// Lab 8 - Task 17: Element-wise sum of two arrays
// Adds corresponding elements of two fixed arrays into third array, displays all three

#include <iostream>
using namespace std;
int main()
{
	int arr1[6] = {21,8,11,4,33,50};
	int arr2[6] = {7,35,6,23,14,10};
	
	cout<<"The values of the first array are: "<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	cout<<"\n\nThe values of the second array are: "<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<arr2[i]<<" ";
	}
	
	cout<<"\n\nThe values of the third array are: "<<endl;
	for(int i=0; i<6; i++)
	{
		cout<<arr1[i]+arr2[i]<<" ";
	}
	
	
	
}
