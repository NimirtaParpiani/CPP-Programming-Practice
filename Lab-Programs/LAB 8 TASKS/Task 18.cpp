// Lab 8 - Task 18: Merge two arrays of size N and M into third array of size N+M
// Copies first array then second array into merged third array, displays all three

#include <iostream>
using namespace std;
int main()
{
	int n=5,m=6;
	
	int arr1[n] = {21,10,15,7,42};
	int arr2[m] = {47,77,12,89,53,20};
	int arr3[n+m];
	
	for(int i=0; i<n; i++)
	{
		arr3[i]=arr1[i];
	}
	
	for(int i=0; i<m; i++)
	{
		arr3[n+i]=arr2[i];
	}
	
	cout<<"The values of the first array are: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr1[i]<<" ";
	}
	
	cout<<"\n\nThe values of the second array are: "<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<arr2[i]<<" ";
	}
	
	cout<<"\n\nThe values of the third array are: "<<endl;
	for(int i=0; i<n+m; i++)
	{
		cout<<arr3[i]<<" ";
	}
	
	
	
	
}
