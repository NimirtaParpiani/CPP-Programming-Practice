// Lab 4 - Task 5: Check equality of two numbers
// Takes two numbers from user and returns 1 if equal, 0 if not equal

#include <iostream>
using namespace std;
int main()
{
	int num1,num2;
	
	cout<<"ENTER 2 NUMBERS: ";
	cin>>num1>>num2;
	
	bool result;
	result = (num1==num2);
	cout<<result;
	
}
