// Lab 7 - Task 1: Continuous input until negative number is entered
// Skips numbers greater than 30, prints sum of valid numbers at the end

#include <iostream>
using namespace std;
int main()
{
	int num,sum=0;
	do
	{
	cout<<"Enter a number: ";
	cin>>num;
	
	if(num>30)
	{ cout<<"This number is greater than 30 and won't be calculated\n";
	continue; }
	
	if(num<0)
	{ continue; }
	
	sum += num; 
	}
	
	while(num>=0);
	cout<<"The sum is "<<sum;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
