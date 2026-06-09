// Lab 8 - Task 6: Second smallest and second largest
// Takes 10 integers, finds and prints second smallest and second largest values

#include <iostream>
using namespace std;
int main()
{
	int num[10];
	
	cout<<"Enter 10 numbers: ";
	for(int i=0; i<10; i++)
	{ cin>>num[i]; }
	
	int largest=num[0], sec_largest=num[0];
	int smallest=num[0], sec_smallest=num[0];
	
	for(int i=1; i<10; i++)
	{ if(num[i]>largest)
	{
		sec_largest=largest;
		largest=num[i];
	}	
	else if(num[i]>sec_largest && num[i] != largest)
	{
		sec_largest=num[i];
	}
	}
	
	for(int i=1; i<10; i++)
	{ if(num[i]<smallest)
	{
		sec_smallest=smallest;
		smallest=num[i];
	}	
	else if(num[i]<sec_smallest && num[i] != smallest)
	{
		sec_smallest=num[i];
	}
	}
	
	cout<<"Second Smallest element = "<<sec_smallest<<endl;
	cout<<"Second Largest element = "<<sec_largest<<endl;
	
}
