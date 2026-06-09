// Lab 8 - Task 4: Store numbers until negative input
// Takes numbers until negative entered, stores in array, prints sum of positive numbers

#include <iostream>
using namespace std;
int main()
{
	int num[100];
	int sum=0;
	
	cout<<"Enter numbers(enter a -ve element to stop): ";
	int i=0;
	while(num[i]>=0)
	{ cin>>num[i];
	
	if(num[i]>=0)
	sum += num[i];
	}
	
	cout<<"Sum = "<<sum;
	
	
	
	
	
	
	
	
	
}
