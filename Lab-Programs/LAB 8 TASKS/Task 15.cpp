// Lab 8 - Task 15: Print values at odd index positions
// Takes array size and elements, prints only values present at odd indices

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
	
	cout<<"\nThe value on the ODD indices are: ";
	for(int i=0; i<size; i++)
	{
		if(i%2==1)
		{
			cout<<num[i]<<"  ";
		}
	}
	
	
	
	
	
	
	
	
}
