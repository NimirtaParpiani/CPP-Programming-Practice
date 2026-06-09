// Lab 6 - Task 3: Whole, Natural, Even and Odd numbers in reverse order
// Takes start and end range from user and prints all categories in reverse

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
	int i=end;
	while(i>=start)
	{ cout<<i<<" ";
	i--; }
	
	cout<<"\nNatural numbers: ";
	i=end;
	while(i>=start)
	{ cout<<i<<" ";
	i--; }
	
	cout<<"\nEven numbers: ";
	i=end;
	while(i>=start)
	{ if(i%2==0)
	cout<<i<<" ";
	i--; }
	
	cout<<"\nOdd numbers: ";
	i=end;
	while(i>=start)
	{ if(i%2==1)
	cout<<i<<" ";
	i--; }
	
}
