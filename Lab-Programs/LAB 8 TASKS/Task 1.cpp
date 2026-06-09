// Lab 8 - Task 1: Array operations
// Takes N elements from user, prints sum, average, smallest and largest

#include <iostream>
using namespace std;
int main ()
{
	int sum=0;
	int num[5];
	
	cout<<"Enter 5 numbers: ";
	for(int i=0; i<=4; i++)
	{ cin>>num[i]; 
	sum += num[i]; }
	
	int largest=num[0];
	int smallest=num[0];
	
	
	for(int i=1; i<=4; i++)
	{ if(num[i]>largest)
		largest=num[i];
	if(num[i]<smallest)
		smallest=num[i];	
	}
	
	cout<<"Sum = "<<sum<<endl;
	cout<<"Average = "<<sum/5.0<<endl;
	cout<<"Smallest element = "<<smallest<<endl;
	cout<<"Largest element = "<<largest<<endl;	
	
}
