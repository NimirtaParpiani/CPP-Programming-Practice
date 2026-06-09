// Lab 10 - Task 9: Sum of positive integers up to range
// Takes range as parameter, returns sum of all positive integers up to that range
// Main handles user input and displaying result

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int num)
{
	int sum = 0;
	
	for(int i=1; i<=num; i++)
	{
		sum += i ;
	}
	return sum;
}
int input()
{
	int num;
	cout<<"Enter range: ";
	cin>>num;
	
	cout<<"Sum of positive numbers upto "<<num<<" is "<<sum(num);
}
int main()
{
	input();
}
