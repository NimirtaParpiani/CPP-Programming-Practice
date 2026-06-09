// Lab 8 - Task 12: Average of hardcoded array
// Declares and initializes array with 10 fixed values, displays their average

#include <iostream>
using namespace std;
int main()
{
	double sum=0;
	double num[10]={23,54,12.5,7,49,33.9,67,35,76,12};
	
	cout<<"Array is: ";
	for(int i=0; i<10; i++)
	{ cout<<num[i]<<" ";
	sum += num[i];
	}
	
	cout<<"\nAverage of all numbers = "<<sum/10.0;
	
	
	
}
