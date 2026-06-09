// Lab 8 - Task 2: Split array into two halves
// Takes 10 elements, splits from middle into two separate arrays and displays both

#include <iostream>
using namespace std;
int main()
{
	int num[10];
	cout<<"Enter 10 numbers: ";
	for(int i=0; i<=9; i++)
	{ cin>>num[i]; }
	
	cout<<"Initial array: ";
	for(int i=0; i<=9; i++)
	{ cout<<num[i]<<" "; } 
	
	cout<<"\nAfter spliting"<<endl;
	for(int i=0; i<=4; i++)
	{  cout<<num[i]<<" "; }
	
	cout<<endl;
	
	for(int i=5; i<=9; i++)
	{  cout<<num[i]<<" "; }
	
	
	
	
	
	
	
	
}
