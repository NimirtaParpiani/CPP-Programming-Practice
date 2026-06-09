// Lab 6 - Task 2: Print whole, natural, even and odd numbers in a range
// Takes start and end from user and prints each category separately

#include <iostream>
using namespace std;
int main()
{
	int start,end;
	cout<<"Enter starting number of series: ";
	cin>>start;
	cout<<"Enter ending number of series: ";
	cin>>end;
	
	cout<<"Whole numbers: ";
	int i=start;
	while(i<=end)
	{ cout<<i<<" ";
	i++; }
	
	cout<<"\nNatural numbers: ";
	i=start;
	while(i<=end)
	{ cout<<i<<" ";
	i++; }
	
	cout<<"\nEven numbers: ";
	i=start;
	while(i<=end)
	{ if(i%2==0)
	cout<<i<<" ";
	i++; }
	
	cout<<"\nOdd numbers: ";
	i=start;
	while(i<=end)
	{ if(i%2==1)
	cout<<i<<" ";
	i++; }
	
	
	
	
	
}
